////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.98
//https://mikero.bytex.digital/Downloads
//'now' is Wed Sep 24 04:17:22 2025 : 'file' last modified on Wed Sep 24 04:17:22 2025
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class DZM_VPPAdminTools
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
		worlds[] = {};
	};
};
class CfgMods
{
	class AVPPAdminTools
	{
		dir = "VPPAdminTools";
		hideName = 0;
		hidePicture = 0;
		name = "#STR_VPPAT_NAME";
		credits = "DaOne & GravityWolf";
		author = "DaOne & GravityWolf";
		authorID = "420420";
		version = "Version 1.0";
		extra = 0;
		type = "mod";
		inputs = "VPPAdminTools/data/modded_Inputs.xml";
		picture = "VPPAdminTools/data/vpp_logo_m.paa";
		logoSmall = "VPPAdminTools/data/vpp_logo_ss.paa";
		logo = "VPPAdminTools/data/vpp_logo_s.paa";
		logoOver = "VPPAdminTools/data/vpp_logo_s.paa";
		tooltip = "Dean Hall did nothing wrong. Make DayZ Greater than great.";
		overview = "A DayZ Workshop Addon which aims to add administration tools by implementing a collection of features which help communities manager their players while keeping the installation, and configuration simple for new, and advanced users.";
		action = "https://discord.dayzvpp.com";
		dependencies[] = {"Core","Game","World","Mission"};
		class defs
		{
			class widgetStyles
			{
				files[] = {"VPPAdminTools/GUI/Styles/testStyle.styles"};
			};
			class imageSets
			{
				files[] = {"VPPAdminTools/GUI/Textures/dayz_gui_vpp.imageset"};
			};
			class engineScriptModule
			{
				value = "";
				files[] = {"VPPAdminTools/Definitions","VPPAdminTools/VPPNotifications/Definitions","VPPAdminTools/1_Core"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"VPPAdminTools/Definitions","VPPAdminTools/VPPNotifications/Definitions","VPPAdminTools/VPPNotifications/3_Game","VPPAdminTools/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"VPPAdminTools/Definitions","VPPAdminTools/VPPNotifications/Definitions","VPPAdminTools/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"VPPAdminTools/Definitions","VPPAdminTools/VPPNotifications/Definitions","VPPAdminTools/VPPNotifications/5_Mission","VPPAdminTools/5_Mission"};
			};
		};
	};
};
class CfgSoundShaders
{
	class UISEffect_0_SoundShaders
	{
		samples[] = {{"VPPAdminTools\sounds\beep",1}};
		range = 25;
		volume = 1.5;
	};
	class UISEffect_1_SoundShaders
	{
		samples[] = {{"VPPAdminTools\sounds\click",1}};
		range = 25;
		volume = 1.5;
	};
	class UISEffect_2_SoundShaders
	{
		samples[] = {{"VPPAdminTools\sounds\hint",1}};
		range = 25;
		volume = 1.5;
	};
};
class CfgSoundSets
{
	class UISEffect_0_SoundSets
	{
		soundShaders[] = {"UISEffect_0_SoundShaders"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
	class UISEffect_1_SoundSets
	{
		soundShaders[] = {"UISEffect_1_SoundShaders"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
	class UISEffect_2_SoundSets
	{
		soundShaders[] = {"UISEffect_2_SoundShaders"};
		volumeFactor = 1;
		frequencyFactor = 1;
		spatial = 0;
	};
};
class RscMapControl
{
	scaleMin = 5e-05;
	scaleMax = 0.85;
	scaleDefault = 0.85;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 20;
	ptsPerSquareCLn = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareObj = 9;
	maxSatelliteAlpha = 1;
	alphaFadeStartScale = 1;
	alphaFadeEndScale = 1;
	userMapPath = "dz\gear\navigation\data\usermap";
	maxUserMapAlpha = 0.2;
	alphaUserMapFadeStartScale = 0.5;
	alphaUserMapFadeEndScale = 0.8;
	showCountourInterval = 0;
	colorLevels[] = {0.65,0.6,0.45,0.3};
	colorSea[] = {0.2,0.5,0.7,1};
	colorForest[] = {0.36,0.78,0.08,0};
	colorRocks[] = {0.5,0.5,0.5,0.2};
	colorCountlines[] = {0.85,0.8,0.65,0.1};
	colorMainCountlines[] = {0.45,0.4,0.25,0};
	colorCountlinesWater[] = {0.25,0.4,0.5,0.3};
	colorMainCountlinesWater[] = {0.25,0.4,0.5,0.9};
	colorPowerLines[] = {0.1,0.1,0.1,1};
	colorRailWay[] = {0.8,0.2,0,1};
	colorForestBorder[] = {0.4,0.8,0,0};
	colorRocksBorder[] = {0.5,0.5,0.5,0};
	colorOutside[] = {1,1,1,1};
	colorTracks[] = {0.78,0.66,0.34,1};
	colorRoads[] = {0.69,0.43,0.23,1};
	colorMainRoads[] = {0.53,0.35,0,1};
	colorTracksFill[] = {0.96,0.91,0.6,1};
	colorRoadsFill[] = {0.92,0.73,0.41,1};
	colorMainRoadsFill[] = {0.84,0.61,0.21,1};
	colorGrid[] = {1,1,1,0.6};
	colorGridMap[] = {0.1,0.1,0.1,0.6};
	fontNames = "gui/fonts/sdf_MetronLight24";
	sizeExNames = 0.03;
	colorNames[] = {0,0,0,1};
	fontGrid = "gui/fonts/sdf_MetronLight24";
	sizeExGrid = 0.015;
	fontLevel = "gui/fonts/sdf_MetronLight24";
	sizeExLevel = 0.01;
	colorMountPoint[] = {0.45,0.4,0.25,0};
	mapPointDensity = 0.12;
	text = "";
	fontLabel = "gui/fonts/sdf_MetronLight24";
	fontInfo = "gui/fonts/sdf_MetronLight24";
	class Legend
	{
		x = 0.05;
		y = 0.85;
		w = 0.4;
		h = 0.1;
		font = "gui/fonts/sdf_MetronBook24";
		sizeEx = 0.02;
		colorBackground[] = {1,1,1,0};
		color[] = {0,0,0,0};
	};
	class Bush
	{
		icon = "\dz\gear\navigation\data\map_bush_ca.paa";
		color[] = {0.4,0.8,0,0};
		size = 14;
		importance = "0.2 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class SmallTree
	{
		icon = "\dz\gear\navigation\data\map_smalltree_ca.paa";
		color[] = {0.4,0.8,0,0};
		size = 12;
		importance = "0.6 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Tree
	{
		icon = "\dz\gear\navigation\data\map_tree_ca.paa";
		color[] = {0.4,0.8,0,0};
		size = 12;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Rock
	{
		icon = "\dz\gear\navigation\data\map_rock_ca.paa";
		color[] = {0.1,0.1,0.1,0.8};
		size = 12;
		importance = "0.5 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fuelstation
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\fuelstation.paa";
		size = 16;
		color[] = {1,1,1,1};
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.75;
		coefMax = 2;
	};
	class Lighthouse
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\lighthouse.paa";
		size = 30;
		color[] = {1,1,1,1};
		importance = "0.9 * 16 * 0.05";
		coefMin = 1;
		coefMax = 4;
	};
	class Stack
	{
		icon = "\dz\gear\navigation\data\map_stack_ca.paa";
		size = 16;
		color[] = {1,1,1,0};
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Transmitter
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\radiotower.paa";
		color[] = {1,1,1,1};
		size = 30;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.7;
		coefMax = 4;
	};
	class Watertower
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\watertower.paa";
		color[] = {1,1,1,1};
		size = 30;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.7;
		coefMax = 4;
	};
	class Shipwreck
	{
		icon = "\dz\gear\navigation\data\map_shipwreck_ca.paa";
		color[] = {1,1,1,1};
		size = 16;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Monument
	{
		icon = "\dz\gear\navigation\data\map_monument_ca.paa";
		color[] = {1,1,1,0};
		size = 20;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class BusStop
	{
		icon = "\dz\gear\navigation\data\map_busstop_ca.paa";
		color[] = {1,1,1,0};
		size = 16;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fountain
	{
		icon = "\dz\gear\navigation\data\map_fountain_ca.paa";
		color[] = {1,1,1,0};
		size = 20;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Waterpump
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\waterpump.paa";
		color[] = {1,1,1,1};
		size = 20;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 2;
	};
	class Hospital
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\hospital.paa";
		color[] = {1,1,1,1};
		size = 25;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 2;
	};
	class Store
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\shopping.paa";
		color[] = {1,1,1,1};
		size = 20;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 2;
	};
	class Police
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\police.paa";
		color[] = {1,1,1,1};
		size = 25;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 2;
	};
	class FireDep
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\firestation.paa";
		color[] = {1,1,1,1};
		size = 25;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 2;
	};
	class TouristSign
	{
		icon = "\dz\gear\navigation\data\map_tsign_ca.paa";
		color[] = {1,1,1,0};
		size = 15;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Tourism
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\bar.paa";
		color[] = {1,1,1,1};
		size = 20;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 2;
	};
	class Cross
	{
		icon = "\dz\gear\navigation\data\map_cross_ca.paa";
		size = 20;
		color[] = {1,1,0,0};
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Chapel
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\church.paa";
		color[] = {1,1,1,1};
		size = 25;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 2;
	};
	class Church
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\church.paa";
		color[] = {1,1,1,1};
		size = 35;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 2;
	};
	class ViewTower
	{
		icon = "\VPPAdminTools\GUI\Textures\CustomMapIcons\watchtower.paa";
		color[] = {1,1,1,1};
		size = 22;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 2;
	};
	class TouristShelter
	{
		icon = "\dz\gear\navigation\data\map_tshelter_ca.paa";
		color[] = {1,1,1,1};
		size = 18;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Quay
	{
		icon = "\dz\gear\navigation\data\map_quay_ca.paa";
		size = 16;
		color[] = {1,1,1,1};
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Bunker
	{
		icon = "\dz\gear\navigation\data\map_bunker_ca.paa";
		color[] = {0.6,0.6,0.6,1};
		size = 20;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fortress
	{
		icon = "\dz\gear\navigation\data\map_fortress_ca.paa";
		size = 20;
		color[] = {0.6,0.6,0.6,1};
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Rocks
	{
		icon = "\dz\gear\navigation\data\map_rock_ca.paa";
		color[] = {0.6,0.6,0.6,1};
		size = 12;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Ruin
	{
		icon = "\dz\gear\navigation\data\map_ruin_ca.paa";
		size = 16;
		color[] = {0.6,0.6,0.6,1};
		importance = "1.2 * 16 * 0.05";
		coefMin = 1;
		coefMax = 4;
	};
};
class CfgLocationTypes
{
	class Name
	{
		name = "keypoint";
		drawStyle = "name";
		texture = "#(argb,1,1,1)color(1,1,1,1)";
		color[] = {1,1,1,1};
		size = 0;
		font = "gui/fonts/sdf_MetronBook24";
		textSize = 0.03;
		shadow = 0.1;
		importance = 1;
	};
	class NameIcon
	{
		name = "keypoint";
		drawStyle = "icon";
		texture = "#(argb,1,1,1)color(1,1,1,1)";
		color[] = {1,1,1,1};
		size = 0;
		font = "gui/fonts/sdf_MetronBook24";
		textSize = 0.03;
		shadow = 0;
		importance = 1;
	};
	class Capital: Name
	{
		color[] = {1,1,1,1};
		textSize = 0.06;
		importance = 7;
	};
	class BigMilitary: Name
	{
		color[] = {1,0.1,0.1,1};
		textSize = 0.05;
		importance = 6;
	};
	class City: Name
	{
		textSize = 0.05;
		importance = 6;
	};
	class MediumMilitary: Name
	{
		color[] = {1,0.1,0.1,1};
		textSize = 0.04;
		importance = 5;
	};
	class SmallMilitary: Name
	{
		color[] = {1,0.1,0.1,1};
		textSize = 0.035;
		importance = 5;
	};
	class Village: Name
	{
		textSize = 0.04;
		importance = 3;
	};
	class Local: Name
	{
		color[] = {0.44,0.38,0.3,1};
		textSize = 0.03;
	};
	class Marine: Name
	{
		color[] = {0.05,0.4,0.8,0.8};
		textSize = 0.03;
	};
	class FeedShack: NameIcon
	{
		texture = "\VPPAdminTools\GUI\Textures\CustomMapIcons\feedshack.paa";
		importance = 1;
		size = 10;
	};
	class Deerstand: NameIcon
	{
		texture = "\VPPAdminTools\GUI\Textures\CustomMapIcons\deerstand.paa";
		importance = 1;
		size = 10;
	};
	class Ruin: NameIcon
	{
		texture = "\DZ\gear\navigation\data\map_ruin_ca.paa";
		textSize = 0.03;
		importance = 2;
		size = 7;
	};
	class Camp: NameIcon
	{
		color[] = {0.44,0.38,0.3,1};
		texture = "\DZ\gear\navigation\data\map_camp_ca.paa";
		textSize = 0.02;
		size = 5;
	};
	class Hill: NameIcon
	{
		color[] = {0.7,0.7,0.7,1};
		texture = "\DZ\gear\navigation\data\map_hill_ca.paa";
		textSize = 0.02;
		size = 3;
	};
	class ViewPoint: NameIcon
	{
		color[] = {0.78,0,0.05,0};
		texture = "\DZ\gear\navigation\data\map_viewpoint_ca.paa";
		size = 9;
	};
	class RockArea: NameIcon
	{
		color[] = {0,0,0,1};
		texture = "\DZ\gear\navigation\data\map_rock_ca.paa";
		size = 9;
	};
	class RailroadStation: NameIcon
	{
		color[] = {0,0,0,0};
		texture = "\DZ\gear\navigation\data\map_station_ca.paa";
		size = 9;
	};
	class IndustrialSite: NameIcon
	{
		color[] = {0,0,0,1};
		texture = "\DZ\gear\navigation\data\map_factory_ca.paa";
		size = 9;
	};
	class LocalOffice: NameIcon
	{
		color[] = {0.22,0.21,0.51,0};
		texture = "\DZ\gear\navigation\data\map_govoffice_ca.paa";
		size = 10;
	};
	class BorderCrossing: NameIcon
	{
		color[] = {0.78,0,0.05,1};
		texture = "\DZ\gear\navigation\data\map_border_cross_ca.paa";
		size = 9;
	};
	class VegetationBroadleaf: NameIcon
	{
		color[] = {0.25,0.4,0.2,1};
		texture = "\DZ\gear\navigation\data\map_broadleaf_ca.paa";
		size = 9;
	};
	class VegetationFir: NameIcon
	{
		color[] = {0.25,0.4,0.2,1};
		texture = "\DZ\gear\navigation\data\map_fir_ca.paa";
		size = 9;
	};
	class VegetationPalm: NameIcon
	{
		color[] = {0.25,0.4,0.2,1};
		texture = "\DZ\gear\navigation\data\map_palm_ca.paa";
		size = 9;
	};
	class VegetationVineyard: NameIcon
	{
		color[] = {0.25,0.4,0.2,1};
		texture = "\DZ\gear\navigation\data\map_vineyard_ca.paa";
		size = 9;
	};
};
class VPPMapSettings: RscMapControl
{
	scaleMin = 0.85;
	scaleMax = 0.85;
	scaleDefault = 0.85;
};
class cfgVehicles
{
	class HouseNoDestruct;
	class VPPMarkerObj: HouseNoDestruct
	{
		scope = 1;
		model = "VPPAdminTools\assets\plane.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
	};
};
class CfgWorlds
{
	class CAWorld;
	class ChernarusPlus: CAWorld
	{
		class Names
		{
			class Settlement_Chernogorsk
			{
				name = "Chernogorsk";
				position[] = {6778.619,2321.774};
				type = "Capital";
			};
			class Settlement_Novodmitrovsk
			{
				name = "Novodmitrovsk";
				position[] = {11339.77,14391.05};
				type = "Capital";
			};
			class Settlement_Novoselki
			{
				name = "Novoselki";
				position[] = {6115.91,3256.36};
				type = "City";
			};
			class Settlement_Dubovo
			{
				name = "Dubovo";
				position[] = {6754.51,3595.257};
				type = "City";
			};
			class Settlement_Vysotovo
			{
				name = "Vysotovo";
				position[] = {5701.24,2556.11};
				type = "City";
			};
			class Settlement_Zelenogorsk
			{
				name = "Zelenogorsk";
				position[] = {2796,5166};
				type = "City";
			};
			class Settlement_Berezino
			{
				name = "Berezino";
				position[] = {12372.383,9760.981};
				type = "City";
			};
			class Settlement_Elektrozavodsk
			{
				name = "Elektrozavodsk";
				position[] = {10286.68,1992.77};
				type = "City";
			};
			class Settlement_NovayaPetrovka
			{
				name = "Novaya Petrovka";
				position[] = {3477.169,12931.243};
				type = "City";
			};
			class Settlement_Gorka
			{
				name = "Gorka";
				position[] = {9524,8945};
				type = "City";
			};
			class Settlement_Solnechny
			{
				name = "Solnechny";
				position[] = {13487.724,6225.884};
				type = "City";
			};
			class Settlement_StarySobor
			{
				name = "Stary Sobor";
				position[] = {6114,7849};
				type = "City";
			};
			class Settlement_Vybor
			{
				name = "Vybor";
				position[] = {3909.831,9019.614};
				type = "City";
			};
			class Settlement_Severograd
			{
				name = "Severograd";
				position[] = {8168.484,12573.602};
				type = "City";
			};
			class Settlement_Bor
			{
				name = "Bor";
				position[] = {3316.406,4070.966};
				type = "Village";
			};
			class Settlement_Svetloyarsk
			{
				name = "Svetloyarsk";
				position[] = {13989.74,13263.78};
				type = "City";
			};
			class Settlement_Krasnostav
			{
				name = "Krasnostav";
				position[] = {11203.167,12340.808};
				type = "City";
			};
			class Settlement_ChernayaPolyana
			{
				name = "Chernaya Polyana";
				position[] = {12158.54,13770.22};
				type = "City";
			};
			class Settlement_Polyana
			{
				name = "Polyana";
				position[] = {10794,8160};
				type = "City";
			};
			class Settlement_Tulga
			{
				name = "Tulga";
				position[] = {12768,4384};
				type = "Village";
			};
			class Settlement_Msta
			{
				name = "Msta";
				position[] = {11333.79,5421.4};
				type = "Village";
			};
			class Settlement_Staroye
			{
				name = "Staroye";
				position[] = {10212.52,5385.05};
				type = "Village";
			};
			class Settlement_Shakhovka
			{
				name = "Shakhovka";
				position[] = {9728.64,6567.3};
				type = "Village";
			};
			class Settlement_Dolina
			{
				name = "Dolina";
				position[] = {11285.17,6633.58};
				type = "Village";
			};
			class Settlement_Orlovets
			{
				name = "Orlovets";
				position[] = {12250,7253};
				type = "Village";
			};
			class Settlement_NovySobor
			{
				name = "Novy Sobor";
				position[] = {7123.63,7774.63};
				type = "Village";
			};
			class Settlement_Kabanino
			{
				name = "Kabanino";
				position[] = {5300.71,8645.9};
				type = "Village";
			};
			class Settlement_Mogilevka
			{
				name = "Mogilevka";
				position[] = {7650.41,5096.46};
				type = "Village";
			};
			class Settlement_Nadezhdino
			{
				name = "Nadezhdino";
				position[] = {5894,4780};
				type = "Village";
			};
			class Settlement_Guglovo
			{
				name = "Guglovo";
				position[] = {8445,6579};
				type = "Village";
			};
			class Settlement_Kamyshovo
			{
				name = "Kamyshovo";
				position[] = {12170,3458};
				type = "Village";
			};
			class Settlement_Pusta
			{
				name = "Pusta";
				position[] = {9197,3873};
				type = "Village";
			};
			class Settlement_Dubrovka
			{
				name = "Dubrovka";
				position[] = {10324.299,9888.237};
				type = "Village";
			};
			class Settlement_VyshnayaDubrovka
			{
				name = "Vyshnaya Dubrovka";
				position[] = {9926.823,10468.919};
				type = "Village";
			};
			class Settlement_Khelm
			{
				name = "Khelm";
				position[] = {12329.27,10771.01};
				type = "Village";
			};
			class Settlement_Olsha
			{
				name = "Olsha";
				position[] = {13402,12898};
				type = "Village";
			};
			class Settlement_Gvozdno
			{
				name = "Gvozdno";
				position[] = {8644.751,11934.115};
				type = "Village";
			};
			class Settlement_Grishino
			{
				name = "Grishino";
				position[] = {5980,10257};
				type = "Village";
			};
			class Settlement_Rogovo
			{
				name = "Rogovo";
				position[] = {4802,6748};
				type = "Village";
			};
			class Settlement_Pogorevka
			{
				name = "Pogorevka";
				position[] = {4445,6322};
				type = "Village";
			};
			class Settlement_Pustoshka
			{
				name = "Pustoshka";
				position[] = {3137.944,7890.925};
				type = "Village";
			};
			class Settlement_Kozlovka
			{
				name = "Kozlovka";
				position[] = {4402,4736};
				type = "Village";
			};
			class Settlement_Karmanovka
			{
				name = "Karmanovka";
				position[] = {12700.628,14691.312};
				type = "Village";
			};
			class Settlement_Balota
			{
				name = "Balota";
				position[] = {4527.58,2465.32};
				type = "Village";
			};
			class Settlement_Komarovo
			{
				name = "Komarovo";
				position[] = {3702,2440};
				type = "Village";
			};
			class Settlement_Kamenka
			{
				name = "Kamenka";
				position[] = {1981,2207};
				type = "Village";
			};
			class Settlement_Myshkino
			{
				name = "Myshkino";
				position[] = {2048,7258};
				type = "Village";
			};
			class Settlement_Pavlovo
			{
				name = "Pavlovo";
				position[] = {1693.98,3858.65};
				type = "Village";
			};
			class Settlement_Lopatino
			{
				name = "Lopatino";
				position[] = {2801,10029};
				type = "Village";
			};
			class Settlement_Vyshnoye
			{
				name = "Vyshnoye";
				position[] = {6629,6051};
				type = "Village";
			};
			class Settlement_Prigorodki
			{
				name = "Prigorodki";
				position[] = {7760,3336};
				type = "Village";
			};
			class Settlement_Drozhino
			{
				name = "Drozhino";
				position[] = {3374,4861};
				type = "Village";
			};
			class Settlement_Sosnovka
			{
				name = "Sosnovka";
				position[] = {2556,6307};
				type = "Village";
			};
			class Settlement_Nizhneye
			{
				name = "Nizhneye";
				position[] = {12824.88,8097.7};
				type = "Village";
			};
			class Settlement_Pulkovo
			{
				name = "Pulkovo";
				position[] = {5015,5607};
				type = "Village";
			};
			class Settlement_Berezhki
			{
				name = "Berezhki";
				position[] = {15020,13905};
				type = "Village";
			};
			class Settlement_Turovo
			{
				name = "Turovo";
				position[] = {13630,14146};
				type = "Village";
			};
			class Settlement_BelayaPolyana
			{
				name = "Belaya Polyana";
				position[] = {14166,14968};
				type = "Village";
			};
			class Settlement_Dobroye
			{
				name = "Dobroye";
				position[] = {12996,15066};
				type = "Village";
			};
			class Settlement_Nagornoye
			{
				name = "Nagornoye";
				position[] = {9286,14677};
				type = "Village";
			};
			class Settlement_Svergino
			{
				name = "Svergino";
				position[] = {9493.52,13875.27};
				type = "Village";
			};
			class Settlement_Ratnoye
			{
				name = "Ratnoye";
				position[] = {6195.878,12761.802};
				type = "Village";
			};
			class Settlement_Kamensk
			{
				name = "Kamensk";
				position[] = {6748.741,14430.046};
				type = "Village";
			};
			class Settlement_Krasnoye
			{
				name = "Krasnoye";
				position[] = {6411.374,15029.961};
				type = "Village";
			};
			class Settlement_StaryYar
			{
				name = "StaryYar";
				position[] = {4987.86,14992.976};
				type = "Village";
			};
			class Settlement_Polesovo
			{
				name = "Polesovo";
				position[] = {5955.737,13558.046};
				type = "Village";
			};
			class Settlement_Tisy
			{
				name = "Tisy";
				position[] = {3441.65,14799.55};
				type = "Village";
			};
			class Settlement_Topolniki
			{
				name = "Topolniki";
				position[] = {2913.745,12366.357};
				type = "Village";
			};
			class Settlement_Zaprudnoye
			{
				name = "Zaprudnoye";
				position[] = {5214,12792};
				type = "Village";
			};
			class Settlement_Sinystok
			{
				name = "Sinystok";
				position[] = {1538.278,11904.578};
				type = "Village";
			};
			class Settlement_Vavilovo
			{
				name = "Vavilovo";
				position[] = {2263,11103};
				type = "Village";
			};
			class Settlement_Kumyrna
			{
				name = "Kumyrna";
				position[] = {8300,6054};
				type = "Village";
			};
			class Settlement_Kalinovka
			{
				name = "Kalinovka";
				position[] = {7448,13406};
				type = "Village";
			};
			class Settlement_Bogatyrka
			{
				name = "Bogatyrka";
				position[] = {1453.62,8870.92};
				type = "Village";
			};
			class Settlement_SvyatoyRomanSkiResort
			{
				name = "Ski Resort";
				position[] = {638,11667};
				type = "Local";
			};
			class Settlement_SKVSChBiathlonArena
			{
				name = "Biathlon Arena";
				position[] = {357,11142};
				type = "Local";
			};
			class Settlement_Zvir
			{
				name = "Zvir";
				position[] = {577.33,5317.42};
				type = "Village";
			};
			class Settlement_Zabolotye
			{
				name = "Zabolotye";
				position[] = {1256.859,9993.26};
				type = "Village";
			};
			class Settlement_Galkino
			{
				name = "Galkino";
				position[] = {1102.68,8798.27};
				type = "Local";
			};
			class Camp_Arsenovo
			{
				name = "Arsenovo";
				position[] = {8509.661,13918.628};
				type = "Camp";
			};
			class Camp_Stroytel
			{
				name = "Stroytel";
				position[] = {7017.63,4365.21};
				type = "Camp";
			};
			class Camp_Romashka
			{
				name = "Romashka";
				position[] = {8177.602,10980.289};
				type = "Camp";
			};
			class Camp_Kometa
			{
				name = "Kometa";
				position[] = {10271.697,3558.228};
				type = "Camp";
			};
			class Camp_Druzhba
			{
				name = "Druzhba";
				position[] = {11437,10695};
				type = "Camp";
			};
			class Camp_Nadezhda
			{
				name = "Nadezhda";
				position[] = {7279.968,7014.35};
				type = "Camp";
			};
			class Camp_YouthPioneer
			{
				name = "Youth Pioneer";
				position[] = {11155.825,7074.143};
				type = "Camp";
			};
			class Camp_ProudChernarus
			{
				name = "Proud Chernarus";
				position[] = {3199.617,6174.932};
				type = "Camp";
			};
			class Camp_Shkolnik
			{
				name = "Shkolnik";
				position[] = {14856.503,14571.028};
				type = "Camp";
			};
			class Camp_Pobeda
			{
				name = "Pobeda";
				position[] = {3703.382,14876.384};
				type = "Camp";
			};
			class Camp_Metalurg
			{
				name = "Metalurg";
				position[] = {1035.406,6677.383};
				type = "Camp";
			};
			class Hill_Zelenayagora
			{
				name = "Green Mountain";
				position[] = {3767.17,6010.54};
				type = "Village";
			};
			class Local_Dichina
			{
				name = "Dichina";
				position[] = {4618,7821};
				type = "Local";
			};
			class Local_Novylug
			{
				name = "Novylug";
				position[] = {9251,11360};
				type = "Local";
			};
			class Local_Staryeluga
			{
				name = "Staryeluga";
				position[] = {6919,8995};
				type = "Local";
			};
			class Hill_Vysota
			{
				name = "Vysota";
				position[] = {6591.63,3400};
				type = "Hill";
			};
			class Hill_Kopyto
			{
				name = "Kopyto";
				position[] = {7871.479,3869.102};
				type = "Hill";
			};
			class Local_Grubyeskaly
			{
				name = "Grubyeskaly";
				position[] = {13115.06,11900};
				type = "Local";
			};
			class Local_Chernyles
			{
				name = "Chernyles";
				position[] = {9031,7803};
				type = "Local";
			};
			class Hill_Altar
			{
				name = "Altar";
				position[] = {8143.4,9159.68};
				type = "Hill";
			};
			class Local_RadioZenit
			{
				name = "Radio Zenit";
				position[] = {8080.01,9341.68};
				type = "Local";
			};
			class Hill_PikKozlova
			{
				name = "Pik Kozlova";
				position[] = {8850.17,2880.53};
				type = "Hill";
			};
			class Local_Pustoykhrebet
			{
				name = "Pustoykhrebet";
				position[] = {10890,5665};
				type = "Local";
			};
			class Hill_Bashnya
			{
				name = "Bashnya";
				position[] = {4178.27,11771.22};
				type = "Hill";
			};
			class Hill_Veresnik
			{
				name = "Veresnik";
				position[] = {4440.17,8070.54};
				type = "Hill";
			};
			class Hill_Kurgan
			{
				name = "Kurgan";
				position[] = {3368.52,5296.87};
				type = "Hill";
			};
			class Hill_Kustryk
			{
				name = "Kustryk";
				position[] = {4912.88,5063.45};
				type = "Hill";
			};
			class Hill_Vetryanayagora
			{
				name = "Vetryanayagora";
				position[] = {3892.74,4200.59};
				type = "Hill";
			};
			class Hill_Kalmyk
			{
				name = "Kalmyk";
				position[] = {6903.78,4919.66};
				type = "Hill";
			};
			class Hill_PopIvan
			{
				name = "PopIvan";
				position[] = {6420.26,6570.66};
				type = "Hill";
			};
			class Hill_Erbenka
			{
				name = "Erbenka";
				position[] = {2842.916,4014.811};
				type = "Hill";
			};
			class Local_Lesnoykhrebet
			{
				name = "Lesnoykhrebet";
				position[] = {8122.77,7815.54};
				type = "Local";
			};
			class Hill_Vysokiykamen
			{
				name = "Vysokiykamen";
				position[] = {8940.19,4380.52};
				type = "Hill";
			};
			class Hill_Dobry
			{
				name = "Dobry";
				position[] = {10552.9,3061.03};
				type = "Hill";
			};
			class Hill_Baranchik
			{
				name = "Baranchik";
				position[] = {10153.147,6208.521};
				type = "Hill";
			};
			class Hill_Malinovka
			{
				name = "Malinovka";
				position[] = {10897.7,7575.59};
				type = "Hill";
			};
			class Hill_Dubina
			{
				name = "Dubina";
				position[] = {11107.9,8474.83};
				type = "Hill";
			};
			class Hill_Klen
			{
				name = "Klen";
				position[] = {11473.511,11315.393};
				type = "Hill";
			};
			class Hill_Chernayagora
			{
				name = "Black Mountain";
				position[] = {10280.816,12053.928};
				type = "Hill";
			};
			class Ruin_Zolotar
			{
				name = "Zolotar";
				position[] = {10179,11998};
				type = "Ruin";
			};
			class Hill_Ostry
			{
				name = "Ostry";
				position[] = {10792.747,12829.504};
				type = "Hill";
			};
			class Hill_Olsha
			{
				name = "Olsha";
				position[] = {12975.7,12775.2};
				type = "Hill";
			};
			class Marine_Tikhiyzaliv
			{
				name = "Tikhiyzaliv";
				position[] = {1221.49,2111.89};
				type = "Marine";
			};
			class Marine_Mutnyizaliv
			{
				name = "Mutnyizaliv";
				position[] = {5735.479,1918.92};
				type = "Marine";
			};
			class Marine_Chernyzaliv
			{
				name = "Chernyzaliv";
				position[] = {7599.069,2486.586};
				type = "Marine";
			};
			class Marine_Zelenyzaliv
			{
				name = "Zelenyzaliv";
				position[] = {11227.019,2989.838};
				type = "Marine";
			};
			class Marine_Skalistyproliv
			{
				name = "Skalistyproliv";
				position[] = {13385.92,3613.94};
				type = "Marine";
			};
			class Marine_Nizhniyzaliv
			{
				name = "Nizhniyzaliv";
				position[] = {12989.3,8515.76};
				type = "Marine";
			};
			class Marine_ZalivGuba
			{
				name = "Zaliv Guba";
				position[] = {14328.374,13136.732};
				type = "Marine";
			};
			class Marine_Rify
			{
				name = "Rify";
				position[] = {13931.73,11288.61};
				type = "Local";
			};
			class Marine_Ivovoyeozero
			{
				name = "Ivovoyeozero";
				position[] = {13248,11572};
				type = "Marine";
			};
			class Marine_Chernoyeozero
			{
				name = "Chernoyeozero";
				position[] = {13381,12002};
				type = "Marine";
			};
			class Marine_PlotinaTopolka
			{
				name = "Topolka Dam";
				position[] = {10231.33,3691.15};
				type = "Marine";
			};
			class Marine_PlotinaPobeda
			{
				name = "Plotina Pobeda";
				position[] = {9928.294,13874.643};
				type = "Marine";
			};
			class Marine_PlotinaTishina
			{
				name = "Plotina Tishina";
				position[] = {1150.82,6432.454};
				type = "Marine";
			};
			class Marine_Ozerko
			{
				name = "Ozerko";
				position[] = {6777.63,4492.42};
				type = "Marine";
			};
			class Marine_Prud
			{
				name = "Prud";
				position[] = {6610.98,9308.57};
				type = "Marine";
			};
			class Ruin_Chortovzamok
			{
				name = "Devil's Castle";
				position[] = {6883.239,11501.288};
				type = "Ruin";
			};
			class Ruin_Zub
			{
				name = "Zub";
				position[] = {6574.28,5573.85};
				type = "Ruin";
			};
			class Ruin_Rog
			{
				name = "Rog";
				position[] = {11267.206,4293.036};
				type = "Ruin";
			};
			class Local_Grozovypereval
			{
				name = "Pass Grozovy";
				position[] = {3318.12,15250.55};
				type = "Local";
			};
			class Local_Sosnovypereval
			{
				name = "Pass Sosnovy";
				position[] = {2687.4,6590.28};
				type = "Local";
			};
			class Local_PerevalOreshka
			{
				name = "Pass Oreshka";
				position[] = {9822.191,6088.793};
				type = "Local";
			};
			class Local_Turovskiypereval
			{
				name = "Pass Turovskiy";
				position[] = {14674.241,14089.306};
				type = "Local";
			};
			class Local_Tridoliny
			{
				name = "Tridoliny";
				position[] = {12764.47,5412.21};
				type = "Local";
			};
			class Local_Grozovyedoly
			{
				name = "Grozovyedoly";
				position[] = {10403.982,14793.168};
				type = "Local";
			};
			class Ruin_Klyuch
			{
				name = "Klyuch";
				position[] = {9282.57,13476.67};
				type = "Ruin";
			};
			class Hill_Lysayagora
			{
				name = "Lysayagora";
				position[] = {6722.459,14050.42};
				type = "Hill";
			};
			class Marine_Glubokoyeozero
			{
				name = "Glubokoyeozero";
				position[] = {1692.555,14821.565};
				type = "Marine";
			};
			class Local_Skalka
			{
				name = "Skalka";
				position[] = {5758,14486};
				type = "Local";
			};
			class Local_Vidy
			{
				name = "Vidy";
				position[] = {785.054,14398.815};
				type = "Local";
			};
			class Hill_Tumannyverkh
			{
				name = "Tumannyverkh";
				position[] = {331.224,12982.99};
				type = "Hill";
			};
			class Local_Adamovka
			{
				name = "Adamovka";
				position[] = {5340.66,11380.01};
				type = "Local";
			};
			class Hill_Shishok
			{
				name = "Shishok";
				position[] = {3559.313,9422.27};
				type = "Hill";
			};
			class Settlement_Skalisty
			{
				name = "Skalisty";
				position[] = {13715.454,3118.78};
				type = "Village";
			};
			class Ruin_Storozh
			{
				name = "Storozh";
				position[] = {2816.601,1277.96};
				type = "Ruin";
			};
			class Local_MysGolova
			{
				name = "Mys Golova";
				position[] = {8286.053,2405.598};
				type = "Local";
			};
			class Local_Drakon
			{
				name = "Drakon";
				position[] = {11191,2443};
				type = "Local";
			};
			class Local_Otmel
			{
				name = "Otmel";
				position[] = {11581.25,3213.24};
				type = "Local";
			};
			class Local_MysKrutoy
			{
				name = "Mys Krutoy";
				position[] = {13578.19,3976.82};
				type = "Local";
			};
			class Hill_Tokarnya
			{
				name = "Tokarnya";
				position[] = {8890.478,5672.553};
				type = "Hill";
			};
			class Hill_Ostrog
			{
				name = "Ostrog";
				position[] = {2655.734,2264.632};
				type = "Hill";
			};
			class Local_Maryanka
			{
				name = "Maryanka";
				position[] = {2789,3386};
				type = "Local";
			};
			class Local_Polonina
			{
				name = "Polonina";
				position[] = {1004.486,4242.869};
				type = "Local";
			};
			class Local_Kalinka
			{
				name = "Kalinka";
				position[] = {3346.5,11292.097};
				type = "Local";
			};
			class Hill_Kikimora
			{
				name = "Kikimora";
				position[] = {1812,6200};
				type = "Hill";
			};
			class Hill_BolshoyKotel
			{
				name = "Bolshoy Kotel";
				position[] = {714.649,6520.431};
				type = "Hill";
			};
			class Hill_Simurg
			{
				name = "Simurg";
				position[] = {134,7569.99};
				type = "Hill";
			};
			class Hill_Volchiypik
			{
				name = "Volchiypik";
				position[] = {320.254,2719.269};
				type = "Hill";
			};
			class Ruin_Krona
			{
				name = "Krona";
				position[] = {1493,9270.34};
				type = "Ruin";
			};
			class Local_TriKresta
			{
				name = "Tri Kresta";
				position[] = {301,9478};
				type = "Local";
			};
			class Local_Rostoki
			{
				name = "Rostoki";
				position[] = {744.45,8647.86};
				type = "Local";
			};
			class Marine_OrlyeOzero
			{
				name = "Orlye Ozero";
				position[] = {597,5990};
				type = "Marine";
			};
			class Local_Makosh
			{
				name = "Makosh";
				position[] = {7849.72,6480.19};
				type = "Local";
			};
			class Local_Klenovyipereval
			{
				name = "Klenovyipereval";
				position[] = {10862.702,11585.512};
				type = "Local";
			};
			class Local_Zmeinykhrebet
			{
				name = "Zmeinykhrebet";
				position[] = {11446.17,13606.92};
				type = "Local";
			};
			class Hill_Sokol
			{
				name = "Sokol";
				position[] = {12001,14813};
				type = "Hill";
			};
			class Local_Krutyeskaly
			{
				name = "Krutyeskaly";
				position[] = {14880.63,13671.76};
				type = "Local";
			};
			class Local_Bogat
			{
				name = "Bogat";
				position[] = {7058.011,12023.571};
				type = "Local";
			};
			class Local_Dubnik
			{
				name = "Dubnik";
				position[] = {3298.29,10330.89};
				type = "Local";
			};
			class Hill_Viselitsa
			{
				name = "Viselitsa";
				position[] = {12722.157,7504.05};
				type = "Hill";
			};
			class Local_Dazhbog
			{
				name = "Dazhbog";
				position[] = {6581,8590};
				type = "Hill";
			};
			class Marine_Verbnik
			{
				name = "Verbnik";
				position[] = {4414.879,9103.002};
				type = "Marine";
			};
			class Local_Medvezhilugi
			{
				name = "Medvezhilugi";
				position[] = {9641,13236};
				type = "Local";
			};
			class Ruin_Voron
			{
				name = "Voron";
				position[] = {13517.93,3311.245};
				type = "Ruin";
			};
			class Ruin_Gnomovzamok
			{
				name = "Gnomovzamok";
				position[] = {7446.915,9097.17};
				type = "Ruin";
			};
			class Marine_Glaza
			{
				name = "Glaza";
				position[] = {7383,9320};
				type = "Marine";
			};
			class Local_KarerKrasnayaZarya
			{
				name = "Karer Krasnaya Zarya";
				position[] = {8565.349,13418.684};
				type = "Local";
			};
			class Local_Matveyevo
			{
				name = "Matveyevo";
				position[] = {4281,7380};
				type = "Local";
			};
			class Local_Kotka
			{
				name = "Kotka";
				position[] = {5873.7,6883.24};
				type = "Local";
			};
			class Local_Chernyeskaly
			{
				name = "Chernyeskaly";
				position[] = {3932.572,14599.496};
				type = "Local";
			};
			class Hill_SvyatoyRoman
			{
				name = "Svyatoy Roman";
				position[] = {84.832,11901.246};
				type = "Hill";
			};
			class Hill_Koman
			{
				name = "Koman";
				position[] = {1660.652,7415.661};
				type = "Hill";
			};
			class Hill_Mayak
			{
				name = "Mayak";
				position[] = {12323.813,4553.107};
				type = "Hill";
			};
			class Local_MB_Berezino
			{
				name = "Berezino Military";
				position[] = {11966,9130};
				type = "SmallMilitary";
			};
			class Local_MB_NovyLug
			{
				name = "Novy Lug Military";
				position[] = {9579,11796};
				type = "SmallMilitary";
			};
			class Local_MB_Elektrozavodsk
			{
				name = "Elektrozavodsk Military";
				position[] = {10481,2356};
				type = "SmallMilitary";
			};
			class Local_MB_Turovo
			{
				name = "Turovo Military";
				position[] = {13626,13740};
				type = "SmallMilitary";
			};
			class Local_MB_StarySobor
			{
				name = "Stary Sobor Military";
				position[] = {6351,7790};
				type = "MediumMilitary";
			};
			class Local_MB_Sosnovy
			{
				name = "Sosnovy Military";
				position[] = {2720,6760};
				type = "SmallMilitary";
			};
			class Local_MB_Ostry
			{
				name = "Ostry Military";
				position[] = {10958,13341};
				type = "MediumMilitary";
			};
			class Local_MB_Severograd
			{
				name = "Severograd Military";
				position[] = {7074,12735};
				type = "SmallMilitary";
			};
			class Local_MB_Arsenovo
			{
				name = "Arsenovo Military";
				position[] = {8560,14000};
				type = "SmallMilitary";
			};
			class Local_MB_KamenskSmall
			{
				name = "Kamensk Military";
				position[] = {7075,14520};
				type = "SmallMilitary";
			};
			class Local_MB_Grozovy
			{
				name = "Grozovy Military";
				position[] = {3660,14920};
				type = "SmallMilitary";
			};
			class Local_MB_Zaprudnoye
			{
				name = "Zaprudnoye Military";
				position[] = {4964,12908};
				type = "SmallMilitary";
			};
			class Local_MB_Bashnya
			{
				name = "Bashnya Military";
				position[] = {4107,11660};
				type = "MediumMilitary";
			};
			class Local_MB_TriKresta
			{
				name = "Tri Kresta Military";
				position[] = {324,9324};
				type = "SmallMilitary";
			};
			class Local_MB_Tikhiyzaliv
			{
				name = "Tikhiyzaliv Military";
				position[] = {780,1870};
				type = "MediumMilitary";
			};
			class Local_MB_PrisonIsland
			{
				name = "Prison Island Military";
				position[] = {2706,1355};
				type = "MediumMilitary";
			};
			class Local_MB_Chernogorsk
			{
				name = "Chernogorsk Military";
				position[] = {7260,3024};
				type = "SmallMilitary";
			};
			class Local_MB_Novoselki
			{
				name = "Novoselki Military";
				position[] = {5820,3080};
				type = "SmallMilitary";
			};
			class Local_MB_Topolka
			{
				name = "Topolka Military";
				position[] = {10236,4029};
				type = "SmallMilitary";
			};
			class Local_MB_Staroye
			{
				name = "Staroye Military";
				position[] = {10441,5970};
				type = "MediumMilitary";
			};
			class Local_MB_Gorka
			{
				name = "Gorka Military";
				position[] = {10470,9170};
				type = "SmallMilitary";
			};
			class Local_MB_Myshkino
			{
				name = "Myshkino Military Base";
				position[] = {1190,7240};
				type = "MediumMilitary";
			};
			class Local_MB_VMC
			{
				name = "VMC Military Base";
				position[] = {4600,8291};
				type = "BigMilitary";
			};
			class Local_MB_Tisy
			{
				name = "Tisy Military Base";
				position[] = {1390,13840};
				type = "BigMilitary";
			};
			class Local_MB_Kamensk
			{
				name = "Troitskoe Military Base";
				position[] = {7920,14730};
				type = "BigMilitary";
			};
			class Local_MB_Zeleno
			{
				name = "Zeleno Military";
				position[] = {2415.375,5160.681};
				type = "MediumMilitary";
			};
			class Local_MB_Pavlovo
			{
				name = "Pavlovo Military Base";
				position[] = {2136,3516};
				type = "BigMilitary";
			};
			class Local_AF_Balota
			{
				name = "Airstrip Balota";
				position[] = {5082.031,2376.328};
				type = "BigMilitary";
			};
			class Local_AF_Krasno
			{
				name = "Airstrip Krasnostav";
				position[] = {12100.681,12573.896};
				type = "MediumMilitary";
			};
			class Local_AF_Vybor
			{
				name = "North West Airfield";
				position[] = {4428,10179};
				type = "BigMilitary";
			};
			class RailroadStation_Elektro
			{
				name = "";
				position[] = {10309.912,2092.203};
				type = "RailroadStation";
			};
			class RailroadStation_Prigorodki
			{
				name = "";
				position[] = {8056.034,3264.908};
				type = "RailroadStation";
			};
			class RailroadStation_Cherno
			{
				name = "";
				position[] = {6540.626,2638.775};
				type = "RailroadStation";
			};
			class RailroadStation_Balota
			{
				name = "";
				position[] = {4399.259,2309.397};
				type = "RailroadStation";
			};
			class RailroadStation_Komarovo
			{
				name = "";
				position[] = {3670.667,2397.525};
				type = "RailroadStation";
			};
			class RailroadStation_Kamenka
			{
				name = "";
				position[] = {1877.935,2168.559};
				type = "RailroadStation";
			};
			class RailroadStation_Zeleno
			{
				name = "";
				position[] = {2485.266,5214.664};
				type = "RailroadStation";
			};
			class RailroadStation_Vavilovo
			{
				name = "";
				position[] = {1991.503,11289.488};
				type = "RailroadStation";
			};
			class RailroadStation_Novaya
			{
				name = "";
				position[] = {3534.425,12537.095};
				type = "RailroadStation";
			};
			class RailroadStation_Severograd
			{
				name = "";
				position[] = {7846.581,12401.488};
				type = "RailroadStation";
			};
			class RailroadStation_Novo
			{
				name = "";
				position[] = {11610.908,14133.702};
				type = "RailroadStation";
			};
			class RailroadStation_Svetlo
			{
				name = "";
				position[] = {13970.473,13486.344};
				type = "RailroadStation";
			};
			class RailroadStation_Berezino
			{
				name = "";
				position[] = {12989.844,10200.673};
				type = "RailroadStation";
			};
			class RailroadStation_Solnich
			{
				name = "";
				position[] = {13146.109,7094.472};
				type = "RailroadStation";
			};
			class RailroadStation_Solnich2
			{
				name = "";
				position[] = {13356.109,6154.472};
				type = "RailroadStation";
			};
			class RailroadStation_Kamyshovo
			{
				name = "";
				position[] = {11970.969,3548.723};
				type = "RailroadStation";
			};
			class RailroadStation_Dobroye
			{
				name = "";
				position[] = {12860.658,15050.221};
				type = "RailroadStation";
			};
			class LocalOffice_Novaya
			{
				name = "";
				position[] = {3469.172,13135.165};
				type = "LocalOffice";
			};
			class LocalOffice_Vybor
			{
				name = "";
				position[] = {3857.656,8946.14};
				type = "LocalOffice";
			};
			class LocalOffice_Sinys
			{
				name = "";
				position[] = {1439.08,12011.26};
				type = "LocalOffice";
			};
			class LocalOffice_Vavil
			{
				name = "";
				position[] = {2220.84,11075.83};
				type = "LocalOffice";
			};
			class LocalOffice_Lopat
			{
				name = "";
				position[] = {2720.72,9978.14};
				type = "LocalOffice";
			};
			class LocalOffice_Pustosh
			{
				name = "";
				position[] = {3051.44,7804.68};
				type = "LocalOffice";
			};
			class LocalOffice_Pogorev
			{
				name = "";
				position[] = {4480.71,6462};
				type = "LocalOffice";
			};
			class LocalOffice_Kabanin
			{
				name = "";
				position[] = {5382,8589};
				type = "LocalOffice";
			};
			class LocalOffice_Stary
			{
				name = "";
				position[] = {5971.08,7743.35};
				type = "LocalOffice";
			};
			class LocalOffice_Novy
			{
				name = "";
				position[] = {7166.96,7526.01};
				type = "LocalOffice";
			};
			class LocalOffice_Grishino
			{
				name = "";
				position[] = {5983,10305};
				type = "LocalOffice";
			};
			class LocalOffice_Severo
			{
				name = "";
				position[] = {7986,12732};
				type = "LocalOffice";
			};
			class LocalOffice_Gorka
			{
				name = "";
				position[] = {9503,8805};
				type = "LocalOffice";
			};
			class LocalOffice_Mogi
			{
				name = "";
				position[] = {7562,5149};
				type = "LocalOffice";
			};
			class LocalOffice_Nadez
			{
				name = "";
				position[] = {5906,4844};
				type = "LocalOffice";
			};
			class LocalOffice_Cherno
			{
				name = "";
				position[] = {6607,2418};
				type = "LocalOffice";
			};
			class LocalOffice_Kozlov
			{
				name = "";
				position[] = {4394,4629};
				type = "LocalOffice";
			};
			class LocalOffice_Komar
			{
				name = "";
				position[] = {3676,2501};
				type = "LocalOffice";
			};
			class LocalOffice_Pavlovo
			{
				name = "";
				position[] = {1655,3851};
				type = "LocalOffice";
			};
			class LocalOffice_Zeleno
			{
				name = "";
				position[] = {2854,5282};
				type = "LocalOffice";
			};
			class LocalOffice_Elektro
			{
				name = "";
				position[] = {10212,2295};
				type = "LocalOffice";
			};
			class LocalOffice_Kamys
			{
				name = "";
				position[] = {12155,3514};
				type = "LocalOffice";
			};
			class LocalOffice_Staroye
			{
				name = "";
				position[] = {10106,5457};
				type = "LocalOffice";
			};
			class LocalOffice_Dolina
			{
				name = "";
				position[] = {11217,6564};
				type = "LocalOffice";
			};
			class LocalOffice_Solnich
			{
				name = "";
				position[] = {13383,6225};
				type = "LocalOffice";
			};
			class LocalOffice_Polana
			{
				name = "";
				position[] = {10676,7989};
				type = "LocalOffice";
			};
			class LocalOffice_Berezino
			{
				name = "";
				position[] = {12272,9474};
				type = "LocalOffice";
			};
			class LocalOffice_Krasno
			{
				name = "";
				position[] = {11257,12211};
				type = "LocalOffice";
			};
			class LocalOffice_Svetlo
			{
				name = "";
				position[] = {14013,13335};
				type = "LocalOffice";
			};
			class LocalOffice_Cpol
			{
				name = "";
				position[] = {12110,13779};
				type = "LocalOffice";
			};
			class LocalOffice_Novo
			{
				name = "";
				position[] = {11564,14742};
				type = "LocalOffice";
			};
			class ViewPoint_1
			{
				name = "";
				position[] = {567,6997};
				type = "ViewPoint";
			};
			class ViewPoint_2
			{
				name = "";
				position[] = {687,6874};
				type = "ViewPoint";
			};
			class ViewPoint_3
			{
				name = "";
				position[] = {724,6510};
				type = "ViewPoint";
			};
			class ViewPoint_4
			{
				name = "";
				position[] = {298,3460};
				type = "ViewPoint";
			};
			class ViewPoint_5
			{
				name = "";
				position[] = {172,3412};
				type = "ViewPoint";
			};
			class ViewPoint_6
			{
				name = "";
				position[] = {258,3283};
				type = "ViewPoint";
			};
			class ViewPoint_7
			{
				name = "";
				position[] = {322,2697};
				type = "ViewPoint";
			};
			class ViewPoint_8
			{
				name = "";
				position[] = {1671,2211};
				type = "ViewPoint";
			};
			class ViewPoint_9
			{
				name = "";
				position[] = {2915,3995};
				type = "ViewPoint";
			};
			class ViewPoint_10
			{
				name = "";
				position[] = {3371,4551};
				type = "ViewPoint";
			};
			class ViewPoint_11
			{
				name = "";
				position[] = {414,9574};
				type = "ViewPoint";
			};
			class ViewPoint_12
			{
				name = "";
				position[] = {241,11867};
				type = "ViewPoint";
			};
			class ViewPoint_13
			{
				name = "";
				position[] = {1153,12411};
				type = "ViewPoint";
			};
			class ViewPoint_14
			{
				name = "";
				position[] = {2320,13650};
				type = "ViewPoint";
			};
			class ViewPoint_15
			{
				name = "";
				position[] = {4084,14570};
				type = "ViewPoint";
			};
			class ViewPoint_16
			{
				name = "";
				position[] = {4445,15045};
				type = "ViewPoint";
			};
			class ViewPoint_17
			{
				name = "";
				position[] = {4926,14820};
				type = "ViewPoint";
			};
			class ViewPoint_18
			{
				name = "";
				position[] = {5172,14841};
				type = "ViewPoint";
			};
			class ViewPoint_19
			{
				name = "";
				position[] = {5345,14873};
				type = "ViewPoint";
			};
			class ViewPoint_20
			{
				name = "";
				position[] = {5480,14822};
				type = "ViewPoint";
			};
			class ViewPoint_21
			{
				name = "";
				position[] = {5692,14771};
				type = "ViewPoint";
			};
			class ViewPoint_22
			{
				name = "";
				position[] = {5896,14747};
				type = "ViewPoint";
			};
			class ViewPoint_23
			{
				name = "";
				position[] = {6246,14707};
				type = "ViewPoint";
			};
			class ViewPoint_24
			{
				name = "";
				position[] = {6434,14816};
				type = "ViewPoint";
			};
			class ViewPoint_25
			{
				name = "";
				position[] = {6707,13961};
				type = "ViewPoint";
			};
			class ViewPoint_26
			{
				name = "";
				position[] = {6861,14115};
				type = "ViewPoint";
			};
			class ViewPoint_27
			{
				name = "";
				position[] = {8710,14200};
				type = "ViewPoint";
			};
			class ViewPoint_28
			{
				name = "";
				position[] = {10822,14651};
				type = "ViewPoint";
			};
			class ViewPoint_29
			{
				name = "";
				position[] = {11369,15037};
				type = "ViewPoint";
			};
			class ViewPoint_30
			{
				name = "";
				position[] = {13604,14632};
				type = "ViewPoint";
			};
			class ViewPoint_31
			{
				name = "";
				position[] = {13877,14703};
				type = "ViewPoint";
			};
			class ViewPoint_32
			{
				name = "";
				position[] = {14140,15244};
				type = "ViewPoint";
			};
			class ViewPoint_33
			{
				name = "";
				position[] = {13840,13833};
				type = "ViewPoint";
			};
			class ViewPoint_34
			{
				name = "";
				position[] = {14075,13889};
				type = "ViewPoint";
			};
			class ViewPoint_35
			{
				name = "";
				position[] = {14895,13611};
				type = "ViewPoint";
			};
			class ViewPoint_36
			{
				name = "";
				position[] = {14828,13759};
				type = "ViewPoint";
			};
			class ViewPoint_37
			{
				name = "";
				position[] = {11982,13388};
				type = "ViewPoint";
			};
			class ViewPoint_38
			{
				name = "";
				position[] = {11690,13511};
				type = "ViewPoint";
			};
			class ViewPoint_39
			{
				name = "";
				position[] = {11473,13580};
				type = "ViewPoint";
			};
			class ViewPoint_40
			{
				name = "";
				position[] = {11376,13661};
				type = "ViewPoint";
			};
			class ViewPoint_41
			{
				name = "";
				position[] = {13937,11250};
				type = "ViewPoint";
			};
			class ViewPoint_42
			{
				name = "";
				position[] = {11481,8429};
				type = "ViewPoint";
			};
			class ViewPoint_43
			{
				name = "";
				position[] = {11574,7743};
				type = "ViewPoint";
			};
			class ViewPoint_44
			{
				name = "";
				position[] = {12123,6997};
				type = "ViewPoint";
			};
			class ViewPoint_45
			{
				name = "";
				position[] = {12980,5967};
				type = "ViewPoint";
			};
			class ViewPoint_46
			{
				name = "";
				position[] = {12352,4519};
				type = "ViewPoint";
			};
			class ViewPoint_47
			{
				name = "";
				position[] = {12304,3976};
				type = "ViewPoint";
			};
			class ViewPoint_48
			{
				name = "";
				position[] = {10584,2867};
				type = "ViewPoint";
			};
			class ViewPoint_49
			{
				name = "";
				position[] = {8767,2959};
				type = "ViewPoint";
			};
			class ViewPoint_50
			{
				name = "";
				position[] = {8811,2850};
				type = "ViewPoint";
			};
			class ViewPoint_51
			{
				name = "";
				position[] = {8547,3872};
				type = "ViewPoint";
			};
			class ViewPoint_52
			{
				name = "";
				position[] = {9029,4380};
				type = "ViewPoint";
			};
			class ViewPoint_53
			{
				name = "";
				position[] = {10741,4180};
				type = "ViewPoint";
			};
			class ViewPoint_54
			{
				name = "";
				position[] = {6897,11648};
				type = "ViewPoint";
			};
			class ViewPoint_55
			{
				name = "";
				position[] = {5633,6885};
				type = "ViewPoint";
			};
			class ViewPoint_56
			{
				name = "";
				position[] = {1456,9611};
				type = "ViewPoint";
			};
			class ViewPoint_57
			{
				name = "";
				position[] = {1941,6768};
				type = "ViewPoint";
			};
			class FeedShack_1
			{
				name = "";
				position[] = {80.25541,4422.1587};
				type = "FeedShack";
			};
			class FeedShack_2
			{
				name = "";
				position[] = {80.25059,10449.115};
				type = "FeedShack";
			};
			class FeedShack_3
			{
				name = "";
				position[] = {151.03528,3655.1455};
				type = "FeedShack";
			};
			class FeedShack_4
			{
				name = "";
				position[] = {178.26767,7858.566};
				type = "FeedShack";
			};
			class FeedShack_5
			{
				name = "";
				position[] = {139.80533,14357.006};
				type = "FeedShack";
			};
			class FeedShack_6
			{
				name = "";
				position[] = {209.61076,11768.07};
				type = "FeedShack";
			};
			class DeerStand_1
			{
				name = "";
				position[] = {196.3686,11938.012};
				type = "DeerStand";
			};
			class DeerStand_2
			{
				name = "";
				position[] = {258.46045,4340.961};
				type = "DeerStand";
			};
			class DeerStand_3
			{
				name = "";
				position[] = {275.75815,5026.475};
				type = "DeerStand";
			};
			class FeedShack_7
			{
				name = "";
				position[] = {271.5839,5607.2637};
				type = "FeedShack";
			};
			class DeerStand_4
			{
				name = "";
				position[] = {284.28363,9767.231};
				type = "DeerStand";
			};
			class FeedShack_8
			{
				name = "";
				position[] = {320.44788,12537.249};
				type = "FeedShack";
			};
			class DeerStand_5
			{
				name = "";
				position[] = {348.41824,12972.146};
				type = "DeerStand";
			};
			class DeerStand_6
			{
				name = "";
				position[] = {386.4899,3859.374};
				type = "DeerStand";
			};
			class FeedShack_9
			{
				name = "";
				position[] = {398.8669,4056.4565};
				type = "FeedShack";
			};
			class DeerStand_7
			{
				name = "";
				position[] = {366.037,6427.5757};
				type = "DeerStand";
			};
			class DeerStand_8
			{
				name = "";
				position[] = {469.45618,2043.0906};
				type = "DeerStand";
			};
			class FeedShack_10
			{
				name = "";
				position[] = {422.99664,9848.817};
				type = "FeedShack";
			};
			class FeedShack_11
			{
				name = "";
				position[] = {456.32657,13249.15};
				type = "FeedShack";
			};
			class DeerStand_9
			{
				name = "";
				position[] = {537.17035,9312.601};
				type = "DeerStand";
			};
			class DeerStand_10
			{
				name = "";
				position[] = {532.3788,10757.907};
				type = "DeerStand";
			};
			class FeedShack_12
			{
				name = "";
				position[] = {597.5115,6747.6616};
				type = "FeedShack";
			};
			class DeerStand_11
			{
				name = "";
				position[] = {555.7141,7361.366};
				type = "DeerStand";
			};
			class FeedShack_13
			{
				name = "";
				position[] = {576.44434,8142.4214};
				type = "FeedShack";
			};
			class FeedShack_14
			{
				name = "";
				position[] = {647.7185,2313.1157};
				type = "FeedShack";
			};
			class DeerStand_12
			{
				name = "";
				position[] = {628.0419,7189.3936};
				type = "DeerStand";
			};
			class DeerStand_13
			{
				name = "";
				position[] = {677.39996,2779.0366};
				type = "DeerStand";
			};
			class DeerStand_14
			{
				name = "";
				position[] = {766.84515,6010.1445};
				type = "DeerStand";
			};
			class FeedShack_15
			{
				name = "";
				position[] = {820.72174,3153.1565};
				type = "FeedShack";
			};
			class DeerStand_15
			{
				name = "";
				position[] = {795.3698,4727.42};
				type = "DeerStand";
			};
			class FeedShack_16
			{
				name = "";
				position[] = {798.05524,4781.344};
				type = "FeedShack";
			};
			class DeerStand_16
			{
				name = "";
				position[] = {831.707,6977.1353};
				type = "DeerStand";
			};
			class FeedShack_17
			{
				name = "";
				position[] = {807.1841,7155.584};
				type = "FeedShack";
			};
			class DeerStand_17
			{
				name = "";
				position[] = {786.58374,8676.428};
				type = "DeerStand";
			};
			class DeerStand_18
			{
				name = "";
				position[] = {804.8342,10798.019};
				type = "DeerStand";
			};
			class DeerStand_19
			{
				name = "";
				position[] = {884.0929,4147.766};
				type = "DeerStand";
			};
			class DeerStand_20
			{
				name = "";
				position[] = {873.90405,5302.4067};
				type = "DeerStand";
			};
			class FeedShack_18
			{
				name = "";
				position[] = {877.2627,6184.3823};
				type = "FeedShack";
			};
			class FeedShack_19
			{
				name = "";
				position[] = {962.6038,6855.6343};
				type = "FeedShack";
			};
			class DeerStand_21
			{
				name = "";
				position[] = {1056.5652,11242.221};
				type = "DeerStand";
			};
			class DeerStand_22
			{
				name = "";
				position[] = {1032.9987,12424.235};
				type = "DeerStand";
			};
			class DeerStand_23
			{
				name = "";
				position[] = {1100.016,3585.5544};
				type = "DeerStand";
			};
			class DeerStand_24
			{
				name = "";
				position[] = {1276.8246,7723.996};
				type = "DeerStand";
			};
			class FeedShack_20
			{
				name = "";
				position[] = {1292.369,7988.3013};
				type = "FeedShack";
			};
			class DeerStand_25
			{
				name = "";
				position[] = {1270.7472,10175.732};
				type = "DeerStand";
			};
			class FeedShack_21
			{
				name = "";
				position[] = {1354.8329,2457.8843};
				type = "FeedShack";
			};
			class FeedShack_22
			{
				name = "";
				position[] = {1371.5018,6786.6357};
				type = "FeedShack";
			};
			class DeerStand_26
			{
				name = "";
				position[] = {1350.6836,9858.787};
				type = "DeerStand";
			};
			class FeedShack_23
			{
				name = "";
				position[] = {1386.1371,15012.595};
				type = "FeedShack";
			};
			class DeerStand_27
			{
				name = "";
				position[] = {1491.4777,4759.6895};
				type = "DeerStand";
			};
			class DeerStand_28
			{
				name = "";
				position[] = {1443.8607,6559.9517};
				type = "DeerStand";
			};
			class DeerStand_29
			{
				name = "";
				position[] = {1487.2561,8567.621};
				type = "DeerStand";
			};
			class DeerStand_30
			{
				name = "";
				position[] = {1460.335,14897.563};
				type = "DeerStand";
			};
			class DeerStand_31
			{
				name = "";
				position[] = {1581.8295,10646.833};
				type = "DeerStand";
			};
			class DeerStand_32
			{
				name = "";
				position[] = {1676.6562,4699.4395};
				type = "DeerStand";
			};
			class FeedShack_24
			{
				name = "";
				position[] = {1667.447,4932.4443};
				type = "FeedShack";
			};
			class DeerStand_33
			{
				name = "";
				position[] = {1740.9531,3235.361};
				type = "DeerStand";
			};
			class FeedShack_25
			{
				name = "";
				position[] = {1797.986,8055.3706};
				type = "FeedShack";
			};
			class FeedShack_26
			{
				name = "";
				position[] = {1770.8844,8434.261};
				type = "FeedShack";
			};
			class DeerStand_34
			{
				name = "";
				position[] = {1805.2231,11432.715};
				type = "DeerStand";
			};
			class DeerStand_35
			{
				name = "";
				position[] = {1918.3335,9409.087};
				type = "DeerStand";
			};
			class DeerStand_36
			{
				name = "";
				position[] = {2029.4265,3048.327};
				type = "DeerStand";
			};
			class DeerStand_37
			{
				name = "";
				position[] = {2022.2919,6598.076};
				type = "DeerStand";
			};
			class FeedShack_27
			{
				name = "";
				position[] = {1987.264,12965.86};
				type = "FeedShack";
			};
			class FeedShack_28
			{
				name = "";
				position[] = {2057.731,6277.837};
				type = "FeedShack";
			};
			class DeerStand_38
			{
				name = "";
				position[] = {2092.778,14762.104};
				type = "DeerStand";
			};
			class DeerStand_39
			{
				name = "";
				position[] = {2112.3901,2630.3486};
				type = "DeerStand";
			};
			class DeerStand_40
			{
				name = "";
				position[] = {2192.4531,7547.806};
				type = "DeerStand";
			};
			class DeerStand_41
			{
				name = "";
				position[] = {2166.572,12707.179};
				type = "DeerStand";
			};
			class FeedShack_29
			{
				name = "";
				position[] = {2171.253,13767.172};
				type = "FeedShack";
			};
			class DeerStand_42
			{
				name = "";
				position[] = {2271.8198,4283.4897};
				type = "DeerStand";
			};
			class DeerStand_43
			{
				name = "";
				position[] = {2276.8843,5970.969};
				type = "DeerStand";
			};
			class DeerStand_44
			{
				name = "";
				position[] = {2298.4988,8493.968};
				type = "DeerStand";
			};
			class FeedShack_30
			{
				name = "";
				position[] = {2394.462,14753.762};
				type = "FeedShack";
			};
			class DeerStand_45
			{
				name = "";
				position[] = {2491.1238,6882.457};
				type = "DeerStand";
			};
			class DeerStand_46
			{
				name = "";
				position[] = {2489.63,7680.27};
				type = "DeerStand";
			};
			class FeedShack_31
			{
				name = "";
				position[] = {2501.254,11130.858};
				type = "FeedShack";
			};
			class FeedShack_32
			{
				name = "";
				position[] = {2543.6438,7593.2686};
				type = "FeedShack";
			};
			class FeedShack_33
			{
				name = "";
				position[] = {2563.8984,9221.776};
				type = "FeedShack";
			};
			class DeerStand_47
			{
				name = "";
				position[] = {2538.3708,9381.548};
				type = "DeerStand";
			};
			class DeerStand_48
			{
				name = "";
				position[] = {2577.1372,13904.271};
				type = "DeerStand";
			};
			class DeerStand_49
			{
				name = "";
				position[] = {2626.6638,11336.511};
				type = "DeerStand";
			};
			class DeerStand_50
			{
				name = "";
				position[] = {2737.9558,3598.0142};
				type = "DeerStand";
			};
			class FeedShack_34
			{
				name = "";
				position[] = {2747.5425,4226.2866};
				type = "FeedShack";
			};
			class FeedShack_35
			{
				name = "";
				position[] = {2813.127,2482.8994};
				type = "FeedShack";
			};
			class FeedShack_36
			{
				name = "";
				position[] = {2974.1953,13591.542};
				type = "FeedShack";
			};
			class DeerStand_51
			{
				name = "";
				position[] = {2943.9775,14412.018};
				type = "DeerStand";
			};
			class DeerStand_52
			{
				name = "";
				position[] = {3118.24,2397.1475};
				type = "DeerStand";
			};
			class FeedShack_37
			{
				name = "";
				position[] = {3063.5647,6581.653};
				type = "FeedShack";
			};
			class DeerStand_53
			{
				name = "";
				position[] = {3228.1648,3600.867};
				type = "DeerStand";
			};
			class DeerStand_54
			{
				name = "";
				position[] = {3214.3057,6287.8037};
				type = "DeerStand";
			};
			class DeerStand_55
			{
				name = "";
				position[] = {3199.401,11591.539};
				type = "DeerStand";
			};
			class DeerStand_56
			{
				name = "";
				position[] = {3282.513,5767.6304};
				type = "DeerStand";
			};
			class FeedShack_38
			{
				name = "";
				position[] = {3273.1233,11624.183};
				type = "FeedShack";
			};
			class DeerStand_57
			{
				name = "";
				position[] = {3360.8796,4284.317};
				type = "DeerStand";
			};
			class DeerStand_58
			{
				name = "";
				position[] = {3418.3276,10188.814};
				type = "DeerStand";
			};
			class DeerStand_59
			{
				name = "";
				position[] = {3374.0562,11019.997};
				type = "DeerStand";
			};
			class DeerStand_60
			{
				name = "";
				position[] = {3423.884,8144.595};
				type = "DeerStand";
			};
			class DeerStand_61
			{
				name = "";
				position[] = {3443.3547,12136.321};
				type = "DeerStand";
			};
			class DeerStand_62
			{
				name = "";
				position[] = {3654.3357,6260.98};
				type = "DeerStand";
			};
			class DeerStand_63
			{
				name = "";
				position[] = {3603.959,9367.57};
				type = "DeerStand";
			};
			class FeedShack_39
			{
				name = "";
				position[] = {3614.8123,10572.549};
				type = "FeedShack";
			};
			class DeerStand_64
			{
				name = "";
				position[] = {3746.577,2979.0566};
				type = "DeerStand";
			};
			class DeerStand_65
			{
				name = "";
				position[] = {3818.0735,14120.452};
				type = "DeerStand";
			};
			class DeerStand_66
			{
				name = "";
				position[] = {3871.459,4434.8315};
				type = "DeerStand";
			};
			class DeerStand_67
			{
				name = "";
				position[] = {3965.7505,12130.793};
				type = "DeerStand";
			};
			class DeerStand_68
			{
				name = "";
				position[] = {4079.5762,3865.763};
				type = "DeerStand";
			};
			class DeerStand_69
			{
				name = "";
				position[] = {4081.3357,6016.447};
				type = "DeerStand";
			};
			class DeerStand_70
			{
				name = "";
				position[] = {4111.559,15170.728};
				type = "DeerStand";
			};
			class FeedShack_40
			{
				name = "";
				position[] = {4145.295,3819.48};
				type = "FeedShack";
			};
			class DeerStand_71
			{
				name = "";
				position[] = {4221.7183,7087.9824};
				type = "DeerStand";
			};
			class DeerStand_72
			{
				name = "";
				position[] = {4315.5166,14287.283};
				type = "DeerStand";
			};
			class DeerStand_73
			{
				name = "";
				position[] = {4351.985,4973.55};
				type = "DeerStand";
			};
			class FeedShack_41
			{
				name = "";
				position[] = {4364.224,14671.948};
				type = "FeedShack";
			};
			class DeerStand_74
			{
				name = "";
				position[] = {4393.42,8058.584};
				type = "DeerStand";
			};
			class FeedShack_42
			{
				name = "";
				position[] = {4389.1113,11896.748};
				type = "FeedShack";
			};
			class DeerStand_75
			{
				name = "";
				position[] = {4414.0874,12237.998};
				type = "DeerStand";
			};
			class FeedShack_43
			{
				name = "";
				position[] = {4444.7344,5074.0454};
				type = "FeedShack";
			};
			class FeedShack_44
			{
				name = "";
				position[] = {4544.92,3130.608};
				type = "FeedShack";
			};
			class DeerStand_76
			{
				name = "";
				position[] = {4719.4917,14976.774};
				type = "DeerStand";
			};
			class DeerStand_77
			{
				name = "";
				position[] = {4700.0474,15234.973};
				type = "DeerStand";
			};
			class DeerStand_78
			{
				name = "";
				position[] = {4826.6133,3318.2087};
				type = "DeerStand";
			};
			class FeedShack_45
			{
				name = "";
				position[] = {4839.2275,3845.3948};
				type = "FeedShack";
			};
			class DeerStand_79
			{
				name = "";
				position[] = {4838.2764,4611.082};
				type = "DeerStand";
			};
			class DeerStand_80
			{
				name = "";
				position[] = {4852.2124,13584.429};
				type = "DeerStand";
			};
			class DeerStand_81
			{
				name = "";
				position[] = {4882.743,8150.267};
				type = "DeerStand";
			};
			class DeerStand_82
			{
				name = "";
				position[] = {4880.1216,12475.938};
				type = "DeerStand";
			};
			class DeerStand_83
			{
				name = "";
				position[] = {4951.245,6380.975};
				type = "DeerStand";
			};
			class DeerStand_84
			{
				name = "";
				position[] = {4998.565,5068.7603};
				type = "DeerStand";
			};
			class FeedShack_46
			{
				name = "";
				position[] = {5026.826,11275.82};
				type = "FeedShack";
			};
			class DeerStand_85
			{
				name = "";
				position[] = {5071.2817,6279.514};
				type = "DeerStand";
			};
			class FeedShack_47
			{
				name = "";
				position[] = {5097.836,6386.3994};
				type = "FeedShack";
			};
			class DeerStand_86
			{
				name = "";
				position[] = {5209.119,4085.264};
				type = "DeerStand";
			};
			class FeedShack_48
			{
				name = "";
				position[] = {5263.221,4857.933};
				type = "FeedShack";
			};
			class DeerStand_87
			{
				name = "";
				position[] = {5276.739,11899.777};
				type = "DeerStand";
			};
			class DeerStand_88
			{
				name = "";
				position[] = {5329.6665,5795.322};
				type = "DeerStand";
			};
			class DeerStand_89
			{
				name = "";
				position[] = {5338.4336,7360.755};
				type = "DeerStand";
			};
			class FeedShack_49
			{
				name = "";
				position[] = {5298.088,13590.939};
				type = "FeedShack";
			};
			class FeedShack_50
			{
				name = "";
				position[] = {5346.173,7893.0195};
				type = "FeedShack";
			};
			class DeerStand_90
			{
				name = "";
				position[] = {5466.6196,7888.142};
				type = "DeerStand";
			};
			class DeerStand_91
			{
				name = "";
				position[] = {5543.3306,9563.019};
				type = "DeerStand";
			};
			class DeerStand_92
			{
				name = "";
				position[] = {5535.7593,11251.677};
				type = "DeerStand";
			};
			class DeerStand_93
			{
				name = "";
				position[] = {5520.5664,13834.319};
				type = "DeerStand";
			};
			class DeerStand_94
			{
				name = "";
				position[] = {5564.5864,15084.688};
				type = "DeerStand";
			};
			class DeerStand_95
			{
				name = "";
				position[] = {5669.7515,6843.3364};
				type = "DeerStand";
			};
			class FeedShack_51
			{
				name = "";
				position[] = {5682.5864,14211.78};
				type = "FeedShack";
			};
			class DeerStand_96
			{
				name = "";
				position[] = {5646.1455,14309.629};
				type = "DeerStand";
			};
			class DeerStand_97
			{
				name = "";
				position[] = {5869.3477,4303.3174};
				type = "DeerStand";
			};
			class DeerStand_98
			{
				name = "";
				position[] = {5921.1665,3466.4026};
				type = "DeerStand";
			};
			class DeerStand_99
			{
				name = "";
				position[] = {6085.943,5033.9873};
				type = "DeerStand";
			};
			class DeerStand_100
			{
				name = "";
				position[] = {6115.564,6129.0957};
				type = "DeerStand";
			};
			class FeedShack_52
			{
				name = "";
				position[] = {6155.0483,5688.336};
				type = "FeedShack";
			};
			class DeerStand_101
			{
				name = "";
				position[] = {6144.721,13133.608};
				type = "DeerStand";
			};
			class FeedShack_53
			{
				name = "";
				position[] = {6187.657,4090.8728};
				type = "FeedShack";
			};
			class DeerStand_102
			{
				name = "";
				position[] = {6227.5615,9750.395};
				type = "DeerStand";
			};
			class FeedShack_54
			{
				name = "";
				position[] = {6204.863,11372.897};
				type = "FeedShack";
			};
			class DeerStand_103
			{
				name = "";
				position[] = {6213.1357,11360.18};
				type = "DeerStand";
			};
			class FeedShack_55
			{
				name = "";
				position[] = {6220.2695,15337.155};
				type = "FeedShack";
			};
			class DeerStand_104
			{
				name = "";
				position[] = {6296.6714,7822.173};
				type = "DeerStand";
			};
			class DeerStand_105
			{
				name = "";
				position[] = {6250.132,12220.539};
				type = "DeerStand";
			};
			class DeerStand_106
			{
				name = "";
				position[] = {6290.257,14224.72};
				type = "DeerStand";
			};
			class DeerStand_107
			{
				name = "";
				position[] = {6332.4844,7949.2563};
				type = "DeerStand";
			};
			class DeerStand_108
			{
				name = "";
				position[] = {6376.417,6573.8047};
				type = "DeerStand";
			};
			class DeerStand_109
			{
				name = "";
				position[] = {6375.0435,7788.1357};
				type = "DeerStand";
			};
			class DeerStand_110
			{
				name = "";
				position[] = {6434.4253,8473.619};
				type = "DeerStand";
			};
			class DeerStand_111
			{
				name = "";
				position[] = {6579.567,4391.3916};
				type = "DeerStand";
			};
			class DeerStand_112
			{
				name = "";
				position[] = {6601.2744,15192.606};
				type = "DeerStand";
			};
			class FeedShack_56
			{
				name = "";
				position[] = {6682.371,6772.426};
				type = "FeedShack";
			};
			class DeerStand_113
			{
				name = "";
				position[] = {6696.36,8429.768};
				type = "DeerStand";
			};
			class FeedShack_57
			{
				name = "";
				position[] = {6703.776,13709.309};
				type = "FeedShack";
			};
			class DeerStand_114
			{
				name = "";
				position[] = {6736.159,5409.0234};
				type = "DeerStand";
			};
			class DeerStand_115
			{
				name = "";
				position[] = {6784.2554,7184.1543};
				type = "DeerStand";
			};
			class DeerStand_116
			{
				name = "";
				position[] = {6798.01,12984.001};
				type = "DeerStand";
			};
			class DeerStand_117
			{
				name = "";
				position[] = {6815.091,13603.063};
				type = "DeerStand";
			};
			class DeerStand_118
			{
				name = "";
				position[] = {6856.5483,8004.647};
				type = "DeerStand";
			};
			class FeedShack_58
			{
				name = "";
				position[] = {6889.0293,10862.519};
				type = "FeedShack";
			};
			class FeedShack_59
			{
				name = "";
				position[] = {6860.78,15051.707};
				type = "FeedShack";
			};
			class FeedShack_60
			{
				name = "";
				position[] = {6997.1904,4549.72};
				type = "FeedShack";
			};
			class DeerStand_119
			{
				name = "";
				position[] = {7071.361,9943.95};
				type = "DeerStand";
			};
			class FeedShack_61
			{
				name = "";
				position[] = {7024.9717,13569.238};
				type = "FeedShack";
			};
			class FeedShack_62
			{
				name = "";
				position[] = {7088.2515,9160.887};
				type = "FeedShack";
			};
			class DeerStand_120
			{
				name = "";
				position[] = {7139.669,11959.412};
				type = "DeerStand";
			};
			class FeedShack_63
			{
				name = "";
				position[] = {7101.6167,12359.935};
				type = "FeedShack";
			};
			class DeerStand_121
			{
				name = "";
				position[] = {7180.402,14000.493};
				type = "DeerStand";
			};
			class DeerStand_122
			{
				name = "";
				position[] = {7235.3066,5952.167};
				type = "DeerStand";
			};
			class DeerStand_123
			{
				name = "";
				position[] = {7236.672,10704.551};
				type = "DeerStand";
			};
			class FeedShack_64
			{
				name = "";
				position[] = {7428.102,12732.725};
				type = "FeedShack";
			};
			class DeerStand_124
			{
				name = "";
				position[] = {7463.2983,6770.5938};
				type = "DeerStand";
			};
			class FeedShack_65
			{
				name = "";
				position[] = {7499.933,11747.946};
				type = "FeedShack";
			};
			class DeerStand_125
			{
				name = "";
				position[] = {7619.322,5407.147};
				type = "DeerStand";
			};
			class FeedShack_66
			{
				name = "";
				position[] = {7635.4844,6637.4224};
				type = "FeedShack";
			};
			class FeedShack_67
			{
				name = "";
				position[] = {7652.4995,11186.456};
				type = "FeedShack";
			};
			class DeerStand_126
			{
				name = "";
				position[] = {7626.8687,11781.449};
				type = "DeerStand";
			};
			class DeerStand_127
			{
				name = "";
				position[] = {7696.034,8689.222};
				type = "DeerStand";
			};
			class DeerStand_128
			{
				name = "";
				position[] = {7926.2153,13360.151};
				type = "DeerStand";
			};
			class DeerStand_129
			{
				name = "";
				position[] = {8035.27,14131.938};
				type = "DeerStand";
			};
			class DeerStand_130
			{
				name = "";
				position[] = {8079.4863,4485.9287};
				type = "DeerStand";
			};
			class DeerStand_131
			{
				name = "";
				position[] = {8078.722,15145.27};
				type = "DeerStand";
			};
			class DeerStand_132
			{
				name = "";
				position[] = {8143.494,5039.329};
				type = "DeerStand";
			};
			class DeerStand_133
			{
				name = "";
				position[] = {8115.2188,5753.8027};
				type = "DeerStand";
			};
			class DeerStand_134
			{
				name = "";
				position[] = {8135.918,6808.039};
				type = "DeerStand";
			};
			class FeedShack_68
			{
				name = "";
				position[] = {8118.466,8237.88};
				type = "FeedShack";
			};
			class FeedShack_69
			{
				name = "";
				position[] = {8171.707,5446.848};
				type = "FeedShack";
			};
			class DeerStand_135
			{
				name = "";
				position[] = {8194.227,7708.656};
				type = "DeerStand";
			};
			class FeedShack_70
			{
				name = "";
				position[] = {8209.609,14276.988};
				type = "FeedShack";
			};
			class DeerStand_136
			{
				name = "";
				position[] = {8291.769,9722.355};
				type = "DeerStand";
			};
			class DeerStand_137
			{
				name = "";
				position[] = {8337.324,10673.748};
				type = "DeerStand";
			};
			class DeerStand_138
			{
				name = "";
				position[] = {8368.446,11439.751};
				type = "DeerStand";
			};
			class DeerStand_139
			{
				name = "";
				position[] = {8406.136,3301.347};
				type = "DeerStand";
			};
			class DeerStand_140
			{
				name = "";
				position[] = {8404.897,8159.794};
				type = "DeerStand";
			};
			class FeedShack_71
			{
				name = "";
				position[] = {8414.364,10533.499};
				type = "FeedShack";
			};
			class DeerStand_141
			{
				name = "";
				position[] = {8480.406,6131.102};
				type = "DeerStand";
			};
			class FeedShack_72
			{
				name = "";
				position[] = {8546.1875,4394.577};
				type = "FeedShack";
			};
			class FeedShack_73
			{
				name = "";
				position[] = {8633.569,12096.213};
				type = "FeedShack";
			};
			class DeerStand_142
			{
				name = "";
				position[] = {8676.989,12304.579};
				type = "DeerStand";
			};
			class DeerStand_143
			{
				name = "";
				position[] = {8659.515,14297.824};
				type = "DeerStand";
			};
			class FeedShack_74
			{
				name = "";
				position[] = {8701.784,8780.087};
				type = "FeedShack";
			};
			class DeerStand_144
			{
				name = "";
				position[] = {8805.171,10479.631};
				type = "DeerStand";
			};
			class DeerStand_145
			{
				name = "";
				position[] = {8771.008,15021.982};
				type = "DeerStand";
			};
			class DeerStand_146
			{
				name = "";
				position[] = {8823.19,4197.7144};
				type = "DeerStand";
			};
			class DeerStand_147
			{
				name = "";
				position[] = {8844.287,6457.5527};
				type = "DeerStand";
			};
			class FeedShack_75
			{
				name = "";
				position[] = {8855.451,6983.5767};
				type = "FeedShack";
			};
			class DeerStand_148
			{
				name = "";
				position[] = {8824.827,7566.712};
				type = "DeerStand";
			};
			class DeerStand_149
			{
				name = "";
				position[] = {8826.72,8649.653};
				type = "DeerStand";
			};
			class FeedShack_76
			{
				name = "";
				position[] = {8841.281,13877.817};
				type = "FeedShack";
			};
			class DeerStand_150
			{
				name = "";
				position[] = {8895.173,5322.2866};
				type = "DeerStand";
			};
			class FeedShack_77
			{
				name = "";
				position[] = {9127.64,3101.7483};
				type = "FeedShack";
			};
			class FeedShack_78
			{
				name = "";
				position[] = {9177.203,7769.825};
				type = "FeedShack";
			};
			class DeerStand_151
			{
				name = "";
				position[] = {9163.378,15016.912};
				type = "DeerStand";
			};
			class DeerStand_152
			{
				name = "";
				position[] = {9186.094,8289.342};
				type = "DeerStand";
			};
			class DeerStand_153
			{
				name = "";
				position[] = {9332.737,3373.7546};
				type = "DeerStand";
			};
			class DeerStand_154
			{
				name = "";
				position[] = {9325.957,7220.4424};
				type = "DeerStand";
			};
			class FeedShack_79
			{
				name = "";
				position[] = {9303.293,12043.563};
				type = "FeedShack";
			};
			class FeedShack_80
			{
				name = "";
				position[] = {9311.433,15032.32};
				type = "FeedShack";
			};
			class FeedShack_81
			{
				name = "";
				position[] = {9429.698,5824.3086};
				type = "FeedShack";
			};
			class DeerStand_155
			{
				name = "";
				position[] = {9453.715,7718.0054};
				type = "DeerStand";
			};
			class DeerStand_156
			{
				name = "";
				position[] = {9535.524,2705.5317};
				type = "DeerStand";
			};
			class DeerStand_157
			{
				name = "";
				position[] = {9502.707,9051.148};
				type = "DeerStand";
			};
			class DeerStand_158
			{
				name = "";
				position[] = {9548.324,12634.149};
				type = "DeerStand";
			};
			class DeerStand_159
			{
				name = "";
				position[] = {9626.602,6258.805};
				type = "DeerStand";
			};
			class FeedShack_82
			{
				name = "";
				position[] = {9656.129,9187.786};
				type = "FeedShack";
			};
			class DeerStand_160
			{
				name = "";
				position[] = {9665.512,3669.4807};
				type = "DeerStand";
			};
			class DeerStand_161
			{
				name = "";
				position[] = {9665.866,8331.416};
				type = "DeerStand";
			};
			class DeerStand_162
			{
				name = "";
				position[] = {9689.205,14663.023};
				type = "DeerStand";
			};
			class DeerStand_163
			{
				name = "";
				position[] = {9769.473,2516.2666};
				type = "DeerStand";
			};
			class DeerStand_164
			{
				name = "";
				position[] = {9728.223,4496.684};
				type = "DeerStand";
			};
			class DeerStand_165
			{
				name = "";
				position[] = {9763.422,11714.377};
				type = "DeerStand";
			};
			class DeerStand_166
			{
				name = "";
				position[] = {9832.164,14217.416};
				type = "DeerStand";
			};
			class DeerStand_167
			{
				name = "";
				position[] = {9811.543,15234.364};
				type = "DeerStand";
			};
			class FeedShack_83
			{
				name = "";
				position[] = {9884.574,4360.1616};
				type = "FeedShack";
			};
			class DeerStand_168
			{
				name = "";
				position[] = {9855.335,7239.017};
				type = "DeerStand";
			};
			class DeerStand_169
			{
				name = "";
				position[] = {9864.712,13456.027};
				type = "DeerStand";
			};
			class DeerStand_170
			{
				name = "";
				position[] = {9945.506,3192.2944};
				type = "DeerStand";
			};
			class DeerStand_171
			{
				name = "";
				position[] = {9919.723,5257.3857};
				type = "DeerStand";
			};
			class DeerStand_172
			{
				name = "";
				position[] = {9914.377,9632.334};
				type = "DeerStand";
			};
			class FeedShack_84
			{
				name = "";
				position[] = {9940.593,15282.305};
				type = "FeedShack";
			};
			class DeerStand_173
			{
				name = "";
				position[] = {9979.724,8973.899};
				type = "DeerStand";
			};
			class DeerStand_174
			{
				name = "";
				position[] = {10085.732,6696.1562};
				type = "DeerStand";
			};
			class FeedShack_85
			{
				name = "";
				position[] = {10143.283,6752.4746};
				type = "FeedShack";
			};
			class DeerStand_175
			{
				name = "";
				position[] = {10227.56,8431.296};
				type = "DeerStand";
			};
			class FeedShack_86
			{
				name = "";
				position[] = {10297.117,7458.82};
				type = "FeedShack";
			};
			class DeerStand_176
			{
				name = "";
				position[] = {10333.323,10130.713};
				type = "DeerStand";
			};
			class DeerStand_177
			{
				name = "";
				position[] = {10322.301,14695.112};
				type = "DeerStand";
			};
			class DeerStand_178
			{
				name = "";
				position[] = {10383.368,6011.9727};
				type = "DeerStand";
			};
			class FeedShack_87
			{
				name = "";
				position[] = {10482.508,11750.061};
				type = "FeedShack";
			};
			class DeerStand_179
			{
				name = "";
				position[] = {10443.572,12495.661};
				type = "DeerStand";
			};
			class FeedShack_88
			{
				name = "";
				position[] = {10561.745,12798.186};
				type = "FeedShack";
			};
			class DeerStand_180
			{
				name = "";
				position[] = {10663.933,5224.5317};
				type = "DeerStand";
			};
			class FeedShack_89
			{
				name = "";
				position[] = {10643.495,6059.4976};
				type = "FeedShack";
			};
			class DeerStand_181
			{
				name = "";
				position[] = {10635.291,10921.459};
				type = "DeerStand";
			};
			class DeerStand_182
			{
				name = "";
				position[] = {10704.667,5836.6694};
				type = "DeerStand";
			};
			class FeedShack_90
			{
				name = "";
				position[] = {10783.259,3645.514};
				type = "FeedShack";
			};
			class DeerStand_183
			{
				name = "";
				position[] = {10797.97,13557.957};
				type = "DeerStand";
			};
			class DeerStand_184
			{
				name = "";
				position[] = {10785.374,14904.296};
				type = "DeerStand";
			};
			class DeerStand_185
			{
				name = "";
				position[] = {10855.99,3497.8445};
				type = "DeerStand";
			};
			class DeerStand_186
			{
				name = "";
				position[] = {10858.775,4244.75};
				type = "DeerStand";
			};
			class FeedShack_91
			{
				name = "";
				position[] = {10877.515,4134.331};
				type = "FeedShack";
			};
			class DeerStand_187
			{
				name = "";
				position[] = {10898.419,6443.584};
				type = "DeerStand";
			};
			class FeedShack_92
			{
				name = "";
				position[] = {10873.353,10268.762};
				type = "FeedShack";
			};
			class FeedShack_93
			{
				name = "";
				position[] = {10886.481,14709.837};
				type = "FeedShack";
			};
			class FeedShack_94
			{
				name = "";
				position[] = {10967.703,8591.668};
				type = "FeedShack";
			};
			class DeerStand_188
			{
				name = "";
				position[] = {11201.738,7260.88};
				type = "DeerStand";
			};
			class DeerStand_189
			{
				name = "";
				position[] = {11160.273,9590.684};
				type = "DeerStand";
			};
			class FeedShack_95
			{
				name = "";
				position[] = {11167.938,9848.037};
				type = "FeedShack";
			};
			class DeerStand_190
			{
				name = "";
				position[] = {11237.152,5624.0303};
				type = "DeerStand";
			};
			class FeedShack_96
			{
				name = "";
				position[] = {11234.225,13647.42};
				type = "FeedShack";
			};
			class DeerStand_191
			{
				name = "";
				position[] = {11326.162,8057.801};
				type = "DeerStand";
			};
			class DeerStand_192
			{
				name = "";
				position[] = {11339.577,9193.647};
				type = "DeerStand";
			};
			class DeerStand_193
			{
				name = "";
				position[] = {11358.841,10188.304};
				type = "DeerStand";
			};
			class FeedShack_97
			{
				name = "";
				position[] = {11364.682,11773.546};
				type = "FeedShack";
			};
			class DeerStand_194
			{
				name = "";
				position[] = {11448.269,5127.8374};
				type = "DeerStand";
			};
			class FeedShack_98
			{
				name = "";
				position[] = {11575.989,4676.3047};
				type = "FeedShack";
			};
			class DeerStand_195
			{
				name = "";
				position[] = {11535.92,13324.779};
				type = "DeerStand";
			};
			class DeerStand_196
			{
				name = "";
				position[] = {11609.092,3733.312};
				type = "DeerStand";
			};
			class DeerStand_197
			{
				name = "";
				position[] = {11687.975,6963.618};
				type = "DeerStand";
			};
			class DeerStand_198
			{
				name = "";
				position[] = {11707.245,4435.037};
				type = "DeerStand";
			};
			class FeedShack_99
			{
				name = "";
				position[] = {11756.563,5805.4707};
				type = "FeedShack";
			};
			class DeerStand_199
			{
				name = "";
				position[] = {11750.498,6317.568};
				type = "DeerStand";
			};
			class FeedShack_100
			{
				name = "";
				position[] = {11733.57,7100.3438};
				type = "FeedShack";
			};
			class FeedShack_101
			{
				name = "";
				position[] = {11816.871,4013.4404};
				type = "FeedShack";
			};
			class DeerStand_200
			{
				name = "";
				position[] = {11819.041,8417.521};
				type = "DeerStand";
			};
			class DeerStand_201
			{
				name = "";
				position[] = {11868.572,15252.762};
				type = "DeerStand";
			};
			class DeerStand_202
			{
				name = "";
				position[] = {11887.835,9545.049};
				type = "DeerStand";
			};
			class DeerStand_203
			{
				name = "";
				position[] = {11942.659,10835.888};
				type = "DeerStand";
			};
			class FeedShack_102
			{
				name = "";
				position[] = {12073.034,5111.582};
				type = "FeedShack";
			};
			class FeedShack_103
			{
				name = "";
				position[] = {12130.356,5451.7837};
				type = "FeedShack";
			};
			class FeedShack_104
			{
				name = "";
				position[] = {12128.536,11189.932};
				type = "FeedShack";
			};
			class FeedShack_105
			{
				name = "";
				position[] = {12178.15,14802.256};
				type = "FeedShack";
			};
			class DeerStand_204
			{
				name = "";
				position[] = {12251.652,5433.6763};
				type = "DeerStand";
			};
			class DeerStand_205
			{
				name = "";
				position[] = {12263.446,8735.8125};
				type = "DeerStand";
			};
			class DeerStand_206
			{
				name = "";
				position[] = {12289.344,11441.019};
				type = "DeerStand";
			};
			class DeerStand_207
			{
				name = "";
				position[] = {12345.381,6924.6816};
				type = "DeerStand";
			};
			class FeedShack_106
			{
				name = "";
				position[] = {12378.531,7740.5728};
				type = "FeedShack";
			};
			class DeerStand_208
			{
				name = "";
				position[] = {12372.089,15202.404};
				type = "DeerStand";
			};
			class DeerStand_209
			{
				name = "";
				position[] = {12463.246,4638.8706};
				type = "DeerStand";
			};
			class DeerStand_210
			{
				name = "";
				position[] = {12582.753,7388.1387};
				type = "DeerStand";
			};
			class FeedShack_107
			{
				name = "";
				position[] = {12619.967,6673.755};
				type = "FeedShack";
			};
			class DeerStand_211
			{
				name = "";
				position[] = {12635.896,12804.073};
				type = "DeerStand";
			};
			class FeedShack_108
			{
				name = "";
				position[] = {12624.723,14528.346};
				type = "FeedShack";
			};
			class DeerStand_212
			{
				name = "";
				position[] = {12719.811,6323.478};
				type = "DeerStand";
			};
			class DeerStand_213
			{
				name = "";
				position[] = {12728.171,5133.476};
				type = "DeerStand";
			};
			class DeerStand_214
			{
				name = "";
				position[] = {12761.925,7721.467};
				type = "DeerStand";
			};
			class FeedShack_109
			{
				name = "";
				position[] = {12818.688,13117.197};
				type = "FeedShack";
			};
			class DeerStand_215
			{
				name = "";
				position[] = {12867.194,10430.961};
				type = "DeerStand";
			};
			class FeedShack_110
			{
				name = "";
				position[] = {12890.481,10460.096};
				type = "FeedShack";
			};
			class DeerStand_216
			{
				name = "";
				position[] = {12935.91,12241.822};
				type = "DeerStand";
			};
			class DeerStand_217
			{
				name = "";
				position[] = {13254.438,12791.209};
				type = "DeerStand";
			};
			class DeerStand_218
			{
				name = "";
				position[] = {13200.934,13232.412};
				type = "DeerStand";
			};
			class FeedShack_111
			{
				name = "";
				position[] = {13331.621,5062.052};
				type = "FeedShack";
			};
			class DeerStand_219
			{
				name = "";
				position[] = {13353.468,15078.26};
				type = "DeerStand";
			};
			class FeedShack_112
			{
				name = "";
				position[] = {13381.251,12246.167};
				type = "FeedShack";
			};
			class DeerStand_220
			{
				name = "";
				position[] = {13452.053,11908.127};
				type = "DeerStand";
			};
			class FeedShack_113
			{
				name = "";
				position[] = {13462.885,12455.709};
				type = "FeedShack";
			};
			class DeerStand_221
			{
				name = "";
				position[] = {13616.199,3089.463};
				type = "DeerStand";
			};
			class DeerStand_222
			{
				name = "";
				position[] = {13646.509,14477.601};
				type = "DeerStand";
			};
			class FeedShack_114
			{
				name = "";
				position[] = {13746.811,14415.497};
				type = "FeedShack";
			};
			class DeerStand_223
			{
				name = "";
				position[] = {13953.609,14845.188};
				type = "DeerStand";
			};
			class DeerStand_224
			{
				name = "";
				position[] = {14386.711,15063.619};
				type = "DeerStand";
			};
			class FeedShack_115
			{
				name = "";
				position[] = {14422.507,14289.826};
				type = "FeedShack";
			};
			class FeedShack_116
			{
				name = "";
				position[] = {14645.491,14643.557};
				type = "FeedShack";
			};
			class DeerStand_225
			{
				name = "";
				position[] = {14844.645,14073.151};
				type = "DeerStand";
			};
			class FeedShack_117
			{
				name = "";
				position[] = {14917.346,14257.615};
				type = "FeedShack";
			};
			class DeerStand_226
			{
				name = "";
				position[] = {15134.531,14788.876};
				type = "DeerStand";
			};
		};
	};
};
