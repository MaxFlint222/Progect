modded class MissionServer
{
	void MissionServer()
	{
		GetRPCManager().AddRPC( "CF", "RecieveModList", this, SingeplayerExecutionType.Server );
	}

	override void OnEvent( EventType eventTypeId, Param params ) 
	{
		super.OnEvent( eventTypeId, params );

		switch( eventTypeId )
		{
		case LogoutCancelEventTypeID:
			LogoutCancelEventParams logoutCancelParams;
			
			Class.CastTo( logoutCancelParams, params );

			auto logoutCancelArgs = new CF_EventPlayerArgs();
			Class.CastTo(logoutCancelArgs.Player, logoutCancelParams.param1);
			CF_ModuleWorldManager.OnClientLogoutCancelled(this, logoutCancelArgs);

			break;
		}
	}

	override void OnInit()
	{
		super.OnInit();
	}

	override void OnMissionStart()
	{
		super.OnMissionStart();

		CF_ModuleCoreManager.OnSettingsChanged(this, CF_EventArgs.Empty);
		CF_ModuleCoreManager.OnMissionStart(this, CF_EventArgs.Empty);
	}

	override void OnMissionFinish()
	{
		super.OnMissionFinish();

		CF_ModuleCoreManager.OnMissionFinish(this, CF_EventArgs.Empty);
	}

	override void OnMissionLoaded()
	{
		super.OnMissionLoaded();

		CF_ModuleCoreManager.OnMissionLoaded(this, CF_EventArgs.Empty);
	}

	override void OnUpdate( float timeslice )
	{
		CF_OnUpdate(timeslice);

		super.OnUpdate( timeslice );
	}

	override void InvokeOnConnect(PlayerBase player, PlayerIdentity identity)
	{
		CF_Log.Debug("[CF] MissionServer::InvokeOnConnect %1 %2 - ID '%3' - player.GetIdentity() = %4", "" + player, "" + identity, identity.GetId(), "" + player.GetIdentity());

		super.InvokeOnConnect( player, identity );

		CF_ModuleWorldManager.OnInvokeConnect(this, new CF_EventPlayerArgs(player, identity));
	}

	override void InvokeOnDisconnect( PlayerBase player )
	{
		CF_Log.Debug("[CF] MissionServer::InvokeOnDisconnect %1", "" + player);

		super.InvokeOnDisconnect( player );

		CF_ModuleWorldManager.OnInvokeDisconnect(this, new CF_EventPlayerArgs(player));
	}

	override void OnClientReadyEvent( PlayerIdentity identity, PlayerBase player )
	{
		CF_Log.Debug("[CF] MissionServer::OnClientReadyEvent - %1 %2 - ID '%3' - player.GetIdentity() = %4", "" + identity, "" + player, identity.GetId(), "" + player.GetIdentity());

		super.OnClientReadyEvent( identity, player );

		CF_ModuleWorldManager.OnClientReady(this, new CF_EventPlayerArgs(player, identity));
	}
	
	override void OnClientReconnectEvent( PlayerIdentity identity, PlayerBase player )
	{
		CF_Log.Debug("[CF] MissionServer::OnClientReconnectEvent - %1 %2 - ID '%3' - %4 - player.GetIdentity() = %4", "" + identity, "" + player, identity.GetId(), "" + player.GetIdentity());

		super.OnClientReconnectEvent( identity, player );

		CF_ModuleWorldManager.OnClientReconnect(this, new CF_EventPlayerArgs(player, identity));
	}
	
	override void OnClientRespawnEvent( PlayerIdentity identity, PlayerBase player )
	{
		super.OnClientRespawnEvent( identity, player );

		CF_ModuleWorldManager.OnClientRespawn(this, new CF_EventPlayerArgs(player, identity));
	}
	
	override void OnClientDisconnectedEvent( PlayerIdentity identity, PlayerBase player, int logoutTime, bool authFailed )
	{
		CF_Log.Debug("[CF] MissionServer::OnClientDisconnectedEvent - %1 %2 - ID '%3' - player.GetIdentity() = %4", "" + identity, "" + player, identity.GetId(), "" + player.GetIdentity());

		super.OnClientDisconnectedEvent( identity, player, logoutTime, authFailed );

		auto args = new CF_EventPlayerDisconnectedArgs(player, identity);
		args.LogoutTime = logoutTime;
		args.AuthFailed = authFailed;

		CF_ModuleWorldManager.OnClientLogout(this, args);
	}

	override void PlayerDisconnected( PlayerBase player, PlayerIdentity identity, string uid )
	{
		CF_Log.Debug("[CF] MissionServer::PlayerDisconnected %1 %2 UID '%3'", "" + player, "" + identity, uid);

		if (player)
		{
			string id = player.CF_GetIdentityId(false);
			if (id != uid)
			{
				if (id)
					CF_Log.Error("[CF] MissionServer::PlayerDisconnected - previously set identity ID '%1' doesn't match UID '%2' for player %3", id, uid, player.ToString());  //! Shouldn't be possible to happen
				CF_Log.Debug("[CF] MissionServer::PlayerDisconnected - using UID %1", uid);
				player.CF_SetIdentityId(uid);
			}
		}

		auto args = new CF_EventPlayerDisconnectedArgs(player, identity);
		args.UID = uid;

		// must call before vanilla
		CF_ModuleWorldManager.OnClientDisconnect(this, args);

		super.PlayerDisconnected( player, identity, uid );
	}

	override PlayerBase OnClientNewEvent( PlayerIdentity identity, vector pos, ParamsReadContext ctx )
	{
		CF_Log.Debug("[CF] MissionServer::OnClientNewEvent %1 - ID '%2'", "" + identity, identity.GetId());

		PlayerBase player = super.OnClientNewEvent( identity, pos, ctx );

		auto args = new CF_EventNewPlayerArgs(player, identity, pos, ctx);
		CF_ModuleWorldManager.OnClientNew(this, args);

		//TODO: allow the args to override these 'out' variables again, 'CF_ModuleWorldManager.OnClientNew' deletes 'args' before this can be used
		//player = args.Player;

		return player;
	} 

	override void OnClientPrepareEvent( PlayerIdentity identity, out bool useDB, out vector pos, out float yaw, out int preloadTimeout )
	{
		CF_Log.Debug("[CF] MissionServer::OnClientPrepareEvent %1 - ID '%2'", "" + identity, identity.GetId());

		auto args = new CF_EventPlayerPrepareArgs();
		args.Identity = identity;
		args.UseDatabase = useDB;
		args.Position = pos;
		args.Yaw = yaw;
		args.PreloadTimeout = preloadTimeout;

		CF_ModuleWorldManager.OnClientPrepare(this, args);
		
		//TODO: allow the args to override these 'out' variables again, 'CF_ModuleWorldManager.OnClientPrepare' deletes 'args' before this can be used
		//useDB = args.UseDatabase;
		//pos = args.Position;
		//yaw = args.Yaw;
		//preloadTimeout = args.PreloadTimeout;

		// must call module code before vanilla
		super.OnClientPrepareEvent(identity, useDB, pos, yaw, preloadTimeout);
	}
};
