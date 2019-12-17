class CfgVehicles {
class  House;
class  misc01;
class  Misc_thing;
class  Land_Ind_Timbers;
class  Land_Barn_W_01;
class Vec03:  misc01 {
			author = "Bohemia Interactive";
			mapSize = 1.58;
			class SimpleObject
			{
				eden = 0;
				animate[] = {};
				hide[] = {};
				verticalOffset = 0.672;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_HayBale_01_F.jpg";
			_generalMacro = "Land_HayBale_01_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Hay Bale";
			model = "\A3\Structures_F_Enoch\Industrial\Agriculture\HayBale_01_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_1x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Agricultural";
			vehicleClass = "Structures_Village";
			destrType = "DestructTent";
			cost = 1000;
			class DestructionEffects
			{
			};
		};
class Haystack_small:  Misc_thing {
			author = "Bohemia Interactive";
			mapSize = 1.58;
			class SimpleObject
			{
				eden = 0;
				animate[] = {};
				hide[] = {};
				verticalOffset = 0.672;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_HayBale_01_F.jpg";
			_generalMacro = "Land_HayBale_01_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Hay Bale";
			model = "\A3\Structures_F_Enoch\Industrial\Agriculture\HayBale_01_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_1x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Agricultural";
			vehicleClass = "Structures_Village";
			destrType = "DestructTent";
			cost = 1000;
			class DestructionEffects
			{
			};
		};
class Land_seno_balik:  House {
			author = "Bohemia Interactive";
			mapSize = 1.58;
			class SimpleObject
			{
				eden = 0;
				animate[] = {};
				hide[] = {};
				verticalOffset = 0.672;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_HayBale_01_F.jpg";
			_generalMacro = "Land_HayBale_01_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Hay Bale";
			model = "\A3\Structures_F_Enoch\Industrial\Agriculture\HayBale_01_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_1x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Agricultural";
			vehicleClass = "Structures_Village";
			destrType = "DestructTent";
			cost = 1000;
			class DestructionEffects
			{
			};
		};
class Land_Barn_W_01:  House {
			author = "Bohemia Interactive";
			mapSize = 56.02;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_move", 0}, {"door_1_locked_move", 0}, {"door_2_move", 0}, {"door_2_locked_move", 0}, {"door_3_move", 0}, {"door_3_locked_move", 0}, {"door_4_move", 0}, {"door_4_locked_move", 0}, {"door_5_rot", 0}, {"door_5_locked_rot", 0}, {"door_6_rot", 0}, {"door_6_locked_rot", 0}};
				hide[] = {};
				verticalOffset = 3.164;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_Barn_03_large_F.jpg";
			_generalMacro = "Land_Barn_03_large_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Barn (Wooden, Large)";
			model = "\A3\Structures_F_Enoch\Industrial\Farms\Barn_03_large_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Agricultural";
			vehicleClass = "Structures_Village";
			destrType = "DestructBuilding";
			cost = 50000;
			numberOfDoors = 6;
			numberOfWindows = 0;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Industrial\Farms\Barn_03_large_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
			};
			class Damage
			{
				tex[] = {};
				mat[] = {"A3\Structures_F_Enoch\Industrial\Farms\Data\barn_w_01_001.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_barn_w_01_001.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_barn_w_01_001.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\barn_w_01_002.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_barn_w_01_002.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_barn_w_01_002.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_1_trigger";
				};
				class Door_1_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_1_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_2_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_2_trigger";
				};
				class Door_2_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_2_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_3_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_3_trigger";
				};
				class Door_3_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_3_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_4_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_4_trigger";
				};
				class Door_4_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_4_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_5_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
					soundPosition = "Door_5_trigger";
				};
				class Door_5_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_5_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_6_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
					soundPosition = "Door_6_trigger";
				};
				class Door_6_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_6_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
			};
			class UserActions
			{
				class OpenDoor_1
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_1_trigger";
					priority = 11;
					actionNamedSel = "Door_1_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 1, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_1: OpenDoor_1
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 1, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_2
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_2_trigger";
					priority = 11;
					actionNamedSel = "Door_2_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_2_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 2, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_2: OpenDoor_2
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_2_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 2, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_3
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_3_trigger";
					priority = 11;
					actionNamedSel = "Door_3_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_3_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 3, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_3: OpenDoor_3
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_3_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_3', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 3, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_4
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_4_trigger";
					priority = 11;
					actionNamedSel = "Door_4_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_4_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 4, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_4: OpenDoor_4
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_4_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_4', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 4, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_5
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_5_trigger";
					priority = 11;
					actionNamedSel = "Door_5_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_5_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 5, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_5: OpenDoor_5
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_5_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_5', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 5, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_6
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_6_trigger";
					priority = 11;
					actionNamedSel = "Door_6_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_6_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 6, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_6: OpenDoor_6
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_6_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_6', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 6, 0] call BIS_fnc_Door)";
				};
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
			actionBegin4 = "OpenDoor_4";
			actionEnd4 = "OpenDoor_4";
			actionBegin5 = "OpenDoor_5";
			actionEnd5 = "OpenDoor_5";
			actionBegin6 = "OpenDoor_6";
			actionEnd6 = "OpenDoor_6";
		};
class Land_Barn_W_02:  Land_Barn_W_01 {
			author = "Bohemia Interactive";
			mapSize = 30.04;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_move", 0}, {"door_1_locked_move", 0}, {"door_2_move", 0}, {"door_2_locked_move", 0}, {"door_3_move", 0}, {"door_3_locked_move", 0}, {"door_4_move", 0}, {"door_4_locked_move", 0}, {"door_5_rot", 0}, {"door_5_locked_rot", 0}};
				hide[] = {};
				verticalOffset = 2.952;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_Barn_03_small_F.jpg";
			_generalMacro = "Land_Barn_03_small_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Barn (Wooden, Small)";
			model = "\A3\Structures_F_Enoch\Industrial\Farms\Barn_03_small_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Agricultural";
			vehicleClass = "Structures_Village";
			destrType = "DestructBuilding";
			cost = 50000;
			numberOfDoors = 5;
			numberOfWindows = 0;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Industrial\Farms\Barn_03_small_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
			};
			class Damage
			{
				tex[] = {};
				mat[] = {"A3\Structures_F_Enoch\Industrial\Farms\Data\barn_w_02_001.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_barn_w_02_001.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_barn_w_02_001.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\barn_w_02_002.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_barn_w_02_002.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_barn_w_02_002.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_1_trigger";
				};
				class Door_1_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_1_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_2_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_2_trigger";
				};
				class Door_2_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_2_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_3_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_3_trigger";
				};
				class Door_3_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_3_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_4_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_4_trigger";
				};
				class Door_4_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_4_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_5_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
					soundPosition = "Door_5_trigger";
				};
				class Door_5_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_5_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
			};
			class UserActions
			{
				class OpenDoor_1
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_1_trigger";
					priority = 11;
					actionNamedSel = "Door_1_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 1, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_1: OpenDoor_1
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 1, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_2
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_2_trigger";
					priority = 11;
					actionNamedSel = "Door_2_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_2_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 2, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_2: OpenDoor_2
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_2_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 2, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_3
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_3_trigger";
					priority = 11;
					actionNamedSel = "Door_3_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_3_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 3, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_3: OpenDoor_3
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_3_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_3', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 3, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_4
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_4_trigger";
					priority = 11;
					actionNamedSel = "Door_4_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_4_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 4, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_4: OpenDoor_4
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_4_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_4', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 4, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_5
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_5_trigger";
					priority = 11;
					actionNamedSel = "Door_5_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_5_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 5, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_5: OpenDoor_5
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_5_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_5', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 5, 0] call BIS_fnc_Door)";
				};
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
			actionBegin4 = "OpenDoor_4";
			actionEnd4 = "OpenDoor_4";
			actionBegin5 = "OpenDoor_5";
			actionEnd5 = "OpenDoor_5";
		};
class Land_Stodola_open:  House {
			author = "Bohemia Interactive";
			mapSize = 22.31;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_move", 0}, {"door_1_locked_move", 0}, {"door_2_move", 0}, {"door_2_locked_move", 0}, {"door_3_move", 0}, {"door_3_locked_move", 0}, {"door_4_move", 0}, {"door_4_locked_move", 0}};
				hide[] = {};
				verticalOffset = 4.203;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_Barn_02_F.jpg";
			_generalMacro = "Land_Barn_02_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Barn (Brick)";
			model = "\A3\Structures_F_Enoch\Industrial\Farms\Barn_02_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Agricultural";
			vehicleClass = "Structures_Village";
			destrType = "DestructBuilding";
			cost = 50000;
			numberOfDoors = 4;
			numberOfWindows = 0;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Industrial\Farms\Barn_02_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
			};
			class Damage
			{
				tex[] = {};
				mat[] = {"A3\Structures_F_Enoch\Industrial\Farms\Data\stodola_open_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_stodola_open_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Farms\Data\destruct_stodola_open_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_1_trigger";
				};
				class Door_1_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_1_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_2_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_2_trigger";
				};
				class Door_2_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_2_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_3_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_3_trigger";
				};
				class Door_3_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_3_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_4_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "RollDoorsSound";
					soundPosition = "Door_4_trigger";
				};
				class Door_4_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_4_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
			};
			class UserActions
			{
				class OpenDoor_1
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_1_trigger";
					priority = 11;
					actionNamedSel = "Door_1_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_1_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 1, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_1: OpenDoor_1
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_1_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_1', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 1, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_2
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_2_trigger";
					priority = 11;
					actionNamedSel = "Door_2_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_2_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 2, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_2: OpenDoor_2
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_2_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_2', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 2, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_3
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_3_trigger";
					priority = 11;
					actionNamedSel = "Door_3_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_3_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 3, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_3: OpenDoor_3
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_3_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_3', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 3, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_4
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_4_trigger";
					priority = 11;
					actionNamedSel = "Door_4_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_4_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 4, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_4: OpenDoor_4
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_4_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_4', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 4, 0] call BIS_fnc_Door)";
				};
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
			actionBegin4 = "OpenDoor_4";
			actionEnd4 = "OpenDoor_4";
		};
class Haystack:  Land_Ind_Timbers {
			author = "Bohemia Interactive";
			mapSize = 20.7;
			class SimpleObject
			{
				eden = 0;
				animate[] = {};
				hide[] = {};
				verticalOffset = 1.443;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_StrawStack_01_F.jpg";
			_generalMacro = "Land_StrawStack_01_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Straw Heap";
			model = "\A3\Structures_F_Enoch\Industrial\Farms\StrawStack_01_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Agricultural";
			vehicleClass = "Structures_Village";
			destrType = "DestructNo";
			cost = 50000;
			numberOfDoors = 0;
			numberOfWindows = 0;
			class DestructionEffects
			{
			};
			class HitPoints
			{
			};
			class Damage
			{
				tex[] = {};
				mat[] = {};
			};
			class AnimationSources
			{
			};
			class UserActions
			{
			};
		};
};
