class SpawnAmmoChatModule extends ChatCommand
{
	private ref Timer m_TickDelay;

	override void ExecuteCommand(PlayerBase caller, array<Man> targets, array<string> args)
    {        
        if(caller == null) return;

        string callerID   = caller.VPlayerGetSteamId();
        string callerName = caller.VPlayerGetName();

		EntityAI weapon = caller.GetHumanInventory().GetEntityInHands();

		if( weapon )
		{
			weapon.SetHealth( weapon.GetMaxHealth( "", "" ) );
		
			Magazine foundMag = Magazine.Cast(weapon.GetAttachmentByConfigTypeName( "DefaultMagazine" ));
			if(foundMag && foundMag.IsMagazine())
			{
				foundMag.ServerSetAmmoMax();
			}else{							  
				foundMag = Magazine.Cast(caller.GetHumanInventory().CreateInInventory(g_Game.GetDefaultMagazine(weapon)));
				if (foundMag)
					foundMag.ServerSetAmmoMax();
			}
			
			m_TickDelay = new Timer(CALL_CATEGORY_GAMEPLAY);
		    m_TickDelay.Run(2.0,this,"InvokeReloadOnClient",new Param1<PlayerIdentity>(caller.GetIdentity()));
		
			Object suppressor = ( Object ) weapon.GetAttachmentByConfigTypeName( "SuppressorBase" );
			if( suppressor )
			{
				suppressor.SetHealth( suppressor.GetMaxHealth( "", "" ) );
			}
			GetGame().RPCSingleParam(caller, ERPCs.RPC_USER_ACTION_MESSAGE, new Param1<string>( "Weapon " + weapon.ConfigGetString("displayName") + " Reloaded and Repaired" ), true, caller.GetIdentity());
			GetWebHooksManager().PostData(AdminActivityMessage, new AdminActivityMessage(callerID, callerName, "Chat Command Manager: /ammo used on self."));
			GetSimpleLogger().Log(string.Format("\"%1\" (steamid=%2) /ammo used on self.", callerName, callerID));
		}
    }

    void InvokeReloadOnClient(PlayerIdentity clientIdentity)
	{
		GetRPCManager().VSendRPC( "RPC_PlayerBase", "InvokeReload", null, true, clientIdentity);
	}
}