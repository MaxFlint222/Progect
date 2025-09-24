class BuildingSetEditor: ScriptedWidgetEventHandler
{
	private Widget 		   m_root;
	private ButtonWidget   m_Apply;
	private ButtonWidget   m_button_close;
	private ButtonWidget   m_button_export;
	private CheckBoxWidget m_Active;
	private EditBoxWidget  m_SetName;
	private bool 		   m_EditMode;
	
	void BuildingSetEditor(Widget parent, string setName, bool active, bool editMode = false)
	{
		m_root   		= GetGame().GetWorkspace().CreateWidgets(VPPATUIConstants.EditDialog, parent);
		m_Apply   		= ButtonWidget.Cast(m_root.FindAnyWidget("button_ok"));
		m_button_close  = ButtonWidget.Cast(m_root.FindAnyWidget("panel_close"));
		m_button_export  = ButtonWidget.Cast(m_root.FindAnyWidget("button_export"));
		GetVPPUIManager().HookConfirmationDialog(m_button_export, parent,this,"ExportRaw", DIAGTYPE.DIAG_YESNO, "Export", "#VSTR_TOOLTIP_EXPORT_SET");
		
		m_SetName 		= EditBoxWidget.Cast(m_root.FindAnyWidget("InputSetName"));
		m_Active        = CheckBoxWidget.Cast(m_root.FindAnyWidget("checkbox_active"));
		m_root.SetHandler(this);
		m_EditMode = editMode;
		
		m_SetName.SetText(setName);
		m_Active.SetChecked(active);
	}
	
	void ~BuildingSetEditor()
	{
		if (m_root)
			m_root.Unlink();
	}
	
	void ExportRaw(int result)
	{
		if (result == DIAGRESULT.YES)
		{
			//Send RPC 
			GetRPCManager().VSendRPC("RPC_BuildingSetManager", "ExportSetToCode", new Param1<string>(m_SetName.GetText()),true,null);
			delete this;
		}
	}
	
	override bool OnClick(Widget w, int x, int y, int button)
	{
		super.OnClick(w, x, y, button);
		if (w == m_Apply)
		{
			//Close and callback
			MenuObjectManager objMenu = MenuObjectManager.Cast(VPPAdminHud.Cast(GetVPPUIManager().GetMenuByType(VPPAdminHud)).GetSubMenuByType(MenuObjectManager));
			if (objMenu)
			{
				if (!m_EditMode && objMenu.CheckDuplicateSet(m_SetName.GetText()) || m_SetName.GetText() == "" || m_SetName.GetText().Length() < 4){
					GetVPPUIManager().DisplayNotification("#VSTR_NOTIFY_ERR_DUPENAME");
					return false;
				}
				if (m_EditMode)
				{
					objMenu.UpdateBuildingSet(m_SetName.GetText(),m_Active.IsChecked());
					delete this;
				}else{
					objMenu.CreateNewSet(m_SetName.GetText(),m_Active.IsChecked());
					delete this;
				}
			}
			return true;
		}
		
		if (w == m_button_close)
		{
			delete this;
			return true;
		}
		return false;
	}
};