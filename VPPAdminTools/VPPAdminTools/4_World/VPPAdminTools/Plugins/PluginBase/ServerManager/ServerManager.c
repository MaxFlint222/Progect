class ServerManager extends PluginBase
{
	private int  m_TimeCounter;
	private bool m_RestartInProgress;
	
	void ServerManager()
	{
		/* RPCs */
		GetRPCManager().AddRPC( "RPC_ServerManager", "RequestServerMonitor", this, SingeplayerExecutionType.Server );
		GetRPCManager().AddRPC( "RPC_ServerManager", "RequestActivityMap", this, SingeplayerExecutionType.Server );
		GetRPCManager().AddRPC( "RPC_ServerManager", "RequestRestartServer", this, SingeplayerExecutionType.Server );
		GetRPCManager().AddRPC( "RPC_ServerManager", "RequestScriptList", this, SingeplayerExecutionType.Server );
		GetRPCManager().AddRPC( "RPC_ServerManager", "LoadScript", this, SingeplayerExecutionType.Server );
		GetRPCManager().AddRPC( "RPC_ServerManager", "RequestKickAllPlayers", this, SingeplayerExecutionType.Server );
		GetRPCManager().AddRPC( "RPC_ServerManager", "RequestLogViewer", this, SingeplayerExecutionType.Server );
	}
	
	void RequestLogViewer(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		if ( type == CallType.Server )
		{
			FindFileHandle FileSearch;
			string FileName;
			string FullPath;
			string Filter = ".ADM";
			int file_attr;
			array<string> m_Files = new array<string>;
			
			if (FileExist("$profile:"))
			{
				string path_find_pattern = "$profile:" + "\\*";
		
				FileSearch = FindFile(path_find_pattern, FileName, file_attr, FindFileFlags.ALL);
		
				bool found = true;
				while (found)
				{
					if ( file_attr != FileAttr.DIRECTORY )
					{
						FullPath = "$profile:" + "/" + FileName;
						
						string fileType = FileName.Substring((FileName.Length() - Filter.Length()), Filter.Length());
						if (fileType == Filter)
						{
							m_Files.Insert(FullPath);
						}
					}
					else if ( file_attr == FileAttr.DIRECTORY )
					{
						FullPath = "$profile:" + "/" + FileName;
						GetFileFromFolder(FullPath,m_Files,".ADM");
					}
					found = FindNextFile(FileSearch, FileName, file_attr);
				}
				CloseFindFile(FileSearch);
			}
			
			if (m_Files.Count() > 0)
			{
				FileHandle logFile = OpenFile( m_Files.Get(0),FileMode.READ);
				array<string> ContentLines = new array<string>;
				
				if (logFile != 0)
				{
					string line_content;
					string endLine;
					int limit = 0;
					while ( true )
					{
						int line = FGets(logFile,line_content);
						endLine = line_content;
						endLine.ToLower();
						if (endLine.Contains("/*end*/")){ break; }
						if (line <= 0 && line_content == "")
						{
							ContentLines.Insert("\n");
							if (limit >= 10){ break; }
							limit++;
						}
						else
						{
							ContentLines.Insert(ReplaceTabs(line_content));
							line_content = "";
						}
					}
					CloseFile(logFile);
					
					GetRPCManager().VSendRPC("RPC_MenuServerManager", "HandleLogViewer", new Param1<ref array<string>>(ContentLines), true, sender);
				}
			}else{
				GetPermissionManager().NotifyPlayer(sender.GetPlainId(),".ADM logs not found...",NotifyTypes.ERROR);
			}
		}
	}	
	
	void RequestRestartServer(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		Param1<int> data;
		if (!ctx.Read(data)) return;
		
	 	if ( type == CallType.Server )
		{
			if (!GetPermissionManager().VerifyPermission(sender.GetPlainId(), "ServerManager:RestartServer")) return;
			
			if (!m_RestartInProgress)
			{
				m_TimeCounter       = data.param1;
				m_RestartInProgress = true;
				GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(this.RestartTicker, 1000, true);
				GetWebHooksManager().PostData(AdminActivityMessage, new AdminActivityMessage(sender.GetPlainId(), sender.GetName(), "[ServerManager] Requested for server restart in: " + data.param1 + " seconds"));
				GetSimpleLogger().Log(string.Format("\"%1\" (steamid=%2) requested a server restart", sender.GetName(), sender.GetPlainId()));
			}
			else
			{
				GetPermissionManager().NotifyPlayer(sender.GetPlainId(),"#VSTR_NOTIFY_RESTART_ERROR",NotifyTypes.ERROR);
			}
		}
	}
	
	void RestartTicker()
	{
		m_TimeCounter--;
		if (m_TimeCounter < 0)
		{
			GetGame().DisconnectSessionForce();
			GetGame().RestartMission();
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).Remove(this.RestartTicker);
		}
		else
		{
			//alert players
			array<Man> players = new array<Man>;
			GetGame().GetWorld().GetPlayerList(players);
			foreach(Man player : players)
			{
				if (PlayerBase.Cast(player) != null)
				{
					GetPermissionManager().NotifyPlayer(PlayerBase.Cast(player).VPlayerGetSteamId(),"#VSTR_NOTIFY_RESTART_IN "+m_TimeCounter, NotifyTypes.NOTIFY, 0.2);
				}
			}
		}
	}
	
	void RequestKickAllPlayers(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		Param1<string> data;
		if (!ctx.Read(data)) return;
		
		if( type == CallType.Server )
		{
			if (!GetPermissionManager().VerifyPermission(sender.GetPlainId(), "ServerManager:KickAllPlayers")) return;
			
			array<Man> players = new array<Man>;
			GetGame().GetWorld().GetPlayerList(players);
			GetSimpleLogger().Log(string.Format("\"%1\" (steamid=%2) just kicked all players from the server", sender.GetName(), sender.GetPlainId()));

			foreach(Man player : players)
			{
				if (player && PlayerBase.Cast(player).VPlayerGetSteamId() != sender.GetPlainId())
				{
					GetRPCManager().VSendRPC( "RPC_MissionGameplay", "KickClientHandle", new Param1<string>( data.param1 ), true, player.GetIdentity());
					GetSimpleLogger().Log(string.Format("\"%1\" (steamid=%2) Kicking Player: \"%3\" (steamid=%4)", sender.GetName(), sender.GetPlainId(), PlayerBase.Cast(player).VPlayerGetName(), PlayerBase.Cast(player).VPlayerGetSteamId()));
				}
			}
			GetWebHooksManager().PostData(AdminActivityMessage, new AdminActivityMessage(sender.GetPlainId(), sender.GetName(), "[ServerManager] Requested to kick all players from server: " + players.Count()));
		}
	}
	
	void RequestActivityMap(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		if( type == CallType.Server )
		{
			if (!GetPermissionManager().VerifyPermission(sender.GetPlainId(), "MenuServerManager", "", false)) return;
			
			array<ref VPPPlayerData> m_List = new array<ref VPPPlayerData>;
			array<Man>   m_Players = new array<Man>;
			GetGame().GetWorld().GetPlayerList( m_Players );
			foreach(Man player : m_Players)
			{
				m_List.Insert( new VPPPlayerData(PlayerBase.Cast(player).VPlayerGetName(), player.GetPosition()) );
			}
			GetRPCManager().VSendRPC( "RPC_MenuServerManager", "UpdateActivityMap", new Param1<ref array<ref VPPPlayerData>>( m_List ), true, sender);
		}
	}

	void RequestServerMonitor( CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target )
	{
		if( type == CallType.Server )
		{
			GetRPCManager().VSendRPC( "RPC_MenuServerManager", "UpdateServerMonitor", new Param1<int>(GetGame().GetTime()), true, sender);
		}
	}
	
	void LoadScript(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		autoptr Param1<string> data;
		if( !ctx.Read( data ) ) return;
		
		if( type == CallType.Server && sender != null)
		{
			if (!GetPermissionManager().VerifyPermission(sender.GetPlainId(), "ServerManager:LoadScripts")) return;
			
			if (FileExist(data.param1))
			{
				ScriptModule CustomModule = ScriptModule.LoadScript(GetGame().GameScript, data.param1, true);
				Class retValue;
				CustomModule.CallFunction(null, "GetInstance", retValue, null);
				CustomModule.CallFunction(retValue, "FuckThis", null, null);
				
				GetPermissionManager().NotifyPlayer(sender.GetPlainId(),"Loaded Script: "+data.param1,NotifyTypes.NOTIFY);
			}else{
				GetPermissionManager().NotifyPlayer(sender.GetPlainId(),"File: "+data.param1+" was unable to be found!",NotifyTypes.ERROR);
			}
		}
	}
	
	void RequestScriptList(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target)
	{
		if( type == CallType.Server )
		{
			if (!GetPermissionManager().VerifyPermission(sender.GetPlainId(), "MenuServerManager", "", false)) return;
			
			array<string> file_list = new array<string>;
			SearchForFiles(file_list);
			
			for (int i = 0; i < file_list.Count(); ++i)
			{
				//Get text data
				FileHandle scriptFile = OpenFile( file_list.Get(i),FileMode.READ);
				
				array<string> ContentLines = new array<string>;
				
				if (scriptFile != 0)
				{
					string line_content;
					string endLine;
					int limit = 0;
					while ( true ){
						int line = FGets(scriptFile,line_content);
						endLine = line_content;
						endLine.ToLower();
						if (endLine.Contains("/*end*/")){ break; }
						if (line <= 0 && line_content == ""){
							ContentLines.Insert("\n");
							if (limit >= 100){ break; }
							limit++;
						}else{
							//Replace Tabbers with space
							ContentLines.Insert(ReplaceTabs(line_content));
							line_content = "";
						}
					}
					CloseFile(scriptFile);
					GetRPCManager().VSendRPC( "RPC_MenuServerManager", "SortScriptList", new Param2<string,ref array<string>>( file_list.Get(i), ContentLines ), true, sender);
				}
				Print("[RequestScriptList] Total files Located: "+file_list.Count() + " ConfigPath: "+file_list.Get(i));
			}
		}
	}
	
	private string ReplaceTabs(string line)
	{
		int ascii_code = 9;
		string str = ascii_code.AsciiToString();

		for(int i = 0; i < line.Length(); i++)
		{
			if (line.Get(i) == str)
			{
				line.Replace(str,"        ");
			}
		}
		return line;
	}
	
	private void SearchForFiles(out array<string> m_Files)
	{
		FindFileHandle FileSearch;
		string SearchDirectoy = "$profile:";
	
		string FolderName;
		string FullPath;
		int 	file_attr;
		int	flags;
	
		if (FileExist(SearchDirectoy))
		{
			string path_find_pattern = SearchDirectoy + "\\*"; // [/*] [\\*] [//*/]
	
			FileSearch = FindFile(path_find_pattern, FolderName, file_attr, FindFileFlags.ALL);
	
			bool found = true;
			while (found)
			{
				if ( file_attr == FileAttr.DIRECTORY )
				{
					FullPath = SearchDirectoy + "/" + FolderName;
					GetFileFromFolder(FullPath,m_Files,".c");
				}
				found = FindNextFile(FileSearch, FolderName, file_attr);
			}
			CloseFindFile(FileSearch);
		}else{
			Print("SearchForFiles():: Directory either missing or inaccessible!");
		}
	}
	
	private void GetFileFromFolder(string FolderPath, array<string> m_Files,string filter)
	{
		FindFileHandle FileSearch;
	
		string FileName;
		string FullPath;
		string Filter = filter;
		int 	file_attr;
		int	flags;
	
		if (FileExist(FolderPath))
		{
			string path_find_pattern = FolderPath + "\\*"; // [/*] [\\*] [*/]
	
			FileSearch = FindFile(path_find_pattern, FileName, file_attr, FindFileFlags.ALL);
	
			bool found = true;
			while (found)
			{
				if ( file_attr != FileAttr.DIRECTORY )
				{
					FullPath = FolderPath + "/" + FileName;
					
					if (FileName != "")
					{
						string fileType = FileName.Substring((FileName.Length() - Filter.Length()), Filter.Length());
						if (fileType == Filter)
						{
							m_Files.Insert(FullPath);
						}
					}
				}
				else if ( file_attr == FileAttr.DIRECTORY )
				{
					FullPath = FolderPath + "/" + FileName;
					GetFileFromFolder(FullPath,m_Files,".c");
				}
				found = FindNextFile(FileSearch, FileName, file_attr);
			}
			CloseFindFile(FileSearch);
		}
	}
}