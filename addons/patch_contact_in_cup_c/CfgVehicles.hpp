class CfgVehicles {
class  House;
class  Land_HouseV_1I2;
class  Land_HouseV2_04;
class  Land_HouseV2_01A;
class Land_HouseV_2I:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 23.45;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"door_5_rot", 0}, {"door_5_handle_rot_1", 0}, {"door_5_handle_rot_2", 0}, {"door_5_locked_rot", 0}, {"door_5_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}, {"glass_10_hide", 0}, {"glass_10_unhide", 0}, {"glass_11_hide", 0}, {"glass_11_unhide", 0}, {"glass_12_hide", 0}, {"glass_12_unhide", 0}, {"glass_13_hide", 0}, {"glass_13_unhide", 0}};
				hide[] = {};
				verticalOffset = 2.941;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1B01_F.jpg";
			_generalMacro = "Land_House_1B01_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Brick House (Small, v1)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1B01_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 2;
			numberOfWindows = 13;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1B01_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_10_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_10";
					visual = "Glass_10_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_10_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_11_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_11";
					visual = "Glass_11_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_11_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_12_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_12";
					visual = "Glass_12_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_12_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_13_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_13";
					visual = "Glass_13_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_13_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\housev_2i_redold_bricks.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_2i_redold_bricks.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_2i_redold_bricks.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\housev_2i_roof_wood_door_planks.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_2i_roof_wood_door_planks.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_2i_roof_wood_door_planks.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\housev_2i_int_multi.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_2i_int_multi.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_2i_int_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
				};
				class Glass_10_source
				{
					source = "Hit";
					hitpoint = "Glass_10_hitpoint";
					raw = 1;
				};
				class Glass_11_source
				{
					source = "Hit";
					hitpoint = "Glass_11_hitpoint";
					raw = 1;
				};
				class Glass_12_source
				{
					source = "Hit";
					hitpoint = "Glass_12_hitpoint";
					raw = 1;
				};
				class Glass_13_source
				{
					source = "Hit";
					hitpoint = "Glass_13_hitpoint";
					raw = 1;
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
class Land_HouseV_2L:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 17.71;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"door_5_rot", 0}, {"door_5_handle_rot_1", 0}, {"door_5_handle_rot_2", 0}, {"door_5_locked_rot", 0}, {"door_5_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}};
				hide[] = {};
				verticalOffset = 4.294;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_2B01_F.jpg";
			_generalMacro = "Land_House_2B01_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Brick House (v1)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_2B01_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 5;
			numberOfWindows = 8;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_2B01_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_2l_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2l_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2l_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_2l_stucco.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2l_stucco.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2l_stucco.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
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
class Land_HouseV2_02:  Land_HouseV2_01A {
			author = "Bohemia Interactive";
			mapSize = 26.78;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"door_5_rot", 0}, {"door_5_handle_rot_1", 0}, {"door_5_handle_rot_2", 0}, {"door_5_locked_rot", 0}, {"door_5_handle_locked_rot", 0}, {"door_6_rot", 0}, {"door_6_handle_rot_1", 0}, {"door_6_handle_rot_2", 0}, {"door_6_locked_rot", 0}, {"door_6_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}, {"glass_10_hide", 0}, {"glass_10_unhide", 0}};
				hide[] = {};
				verticalOffset = 6.505;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_2B02_F.jpg";
			_generalMacro = "Land_House_2B02_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Brick House (v2)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_2B02_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 6;
			numberOfWindows = 10;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_2B02_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_10_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_10";
					visual = "Glass_10_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_10_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f\data\windows\window_set_ca.paa", "A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_02_interier_multi1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_interier_multi1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_interier_multi1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_02_interier_multi2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_interier_multi2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_interier_multi2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_02_interier_multi3.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_interier_multi3.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_interier_multi3.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_02_multi1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_multi1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_multi1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_02_multi2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_multi2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_02_multi2.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
				};
				class Glass_10_source
				{
					source = "Hit";
					hitpoint = "Glass_10_hitpoint";
					raw = 1;
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
class Land_HouseV2_03B:  Land_HouseV2_01A {
			author = "Bohemia Interactive";
			mapSize = 31.11;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}};
				hide[] = {};
				verticalOffset = 6.03;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_2B03_F.jpg";
			_generalMacro = "Land_House_2B03_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Brick House (v3)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_2B03_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 4;
			numberOfWindows = 6;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_2B03_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_03b_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_03b_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_03b_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_03b_multi_01.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_03b_multi_01.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_03b_multi_01.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_03b_multi_02.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_03b_multi_02.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_03b_multi_02.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
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
class Land_HouseV2_04_interier:  Land_HouseV2_04 {
			author = "Bohemia Interactive";
			mapSize = 26.03;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}};
				hide[] = {};
				verticalOffset = 6.174;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_2B04_F.jpg";
			_generalMacro = "Land_House_2B04_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Brick House (v4)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_2B04_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 4;
			numberOfWindows = 5;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_2B04_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f\data\windows\window_set_ca.paa", "A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_04_1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_04_1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_04_1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_04_2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_04_2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_04_2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_04_interier_multi1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_04_interier_multi1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_04_interier_multi1.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_04_interier_multi2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_04_interier_multi2.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_04_interier_multi2.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
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
class Land_HouseV_1I1:  House {
			author = "Bohemia Interactive";
			mapSize = 13.53;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}};
				hide[] = {};
				verticalOffset = 2.924;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W01_F.jpg";
			_generalMacro = "Land_House_1W01_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v1)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W01_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 2;
			numberOfWindows = "´8";
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W01_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f\data\windows\window_set_ca.paa", "A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\housev_1i1_wood_planks_brick.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i1_wood_planks_brick.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i1_wood_planks_brick.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\housev_1i1_int_multi.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i1_int_multi.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i1_int_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
		};
class Land_HouseV_3I3:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 12.62;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}};
				hide[] = {};
				verticalOffset = 2.044;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W10_F.jpg";
			_generalMacro = "Land_House_1W10_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v10)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W10_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 3;
			numberOfWindows = 6;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W10_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i3_wood_planks_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i3_wood_planks_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i3_wood_planks_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i3_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i3_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i3_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i3_metal.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i3_metal.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i3_metal.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_HouseV_3I4:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 17.26;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}, {"glass_10_hide", 0}, {"glass_10_unhide", 0}, {"glass_11_hide", 0}, {"glass_11_unhide", 0}, {"glass_12_hide", 0}, {"glass_12_unhide", 0}, {"glass_13_hide", 0}, {"glass_13_unhide", 0}, {"glass_14_hide", 0}, {"glass_14_unhide", 0}, {"glass_15_hide", 0}, {"glass_15_unhide", 0}};
				hide[] = {};
				verticalOffset = 3.347;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W11_F.jpg";
			_generalMacro = "Land_House_1W11_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v11)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W11_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 4;
			numberOfWindows = 15;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W11_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_10_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_10";
					visual = "Glass_10_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_10_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_11_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_11";
					visual = "Glass_11_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_11_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_12_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_12";
					visual = "Glass_12_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_12_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_13_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_13";
					visual = "Glass_13_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_13_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_14_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_14";
					visual = "Glass_14_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_14_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_15_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_15";
					visual = "Glass_15_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_15_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i4_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i4_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i4_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i4_metal.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i4_metal.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i4_metal.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i4_wood_concreat_parts.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i4_wood_concreat_parts.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i4_wood_concreat_parts.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
				};
				class Glass_10_source
				{
					source = "Hit";
					hitpoint = "Glass_10_hitpoint";
					raw = 1;
				};
				class Glass_11_source
				{
					source = "Hit";
					hitpoint = "Glass_11_hitpoint";
					raw = 1;
				};
				class Glass_12_source
				{
					source = "Hit";
					hitpoint = "Glass_12_hitpoint";
					raw = 1;
				};
				class Glass_13_source
				{
					source = "Hit";
					hitpoint = "Glass_13_hitpoint";
					raw = 1;
				};
				class Glass_14_source
				{
					source = "Hit";
					hitpoint = "Glass_14_hitpoint";
					raw = 1;
				};
				class Glass_15_source
				{
					source = "Hit";
					hitpoint = "Glass_15_hitpoint";
					raw = 1;
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
class Land_HouseV_1I2:  House {
			author = "Bohemia Interactive";
			mapSize = 14.41;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}, {"glass_10_hide", 0}, {"glass_10_unhide", 0}};
				hide[] = {};
				verticalOffset = 2.172;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W02_F.jpg";
			_generalMacro = "Land_House_1W02_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v2)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W02_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 4;
			numberOfWindows = 10;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W02_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_10_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_10";
					visual = "Glass_10_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_10_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\housev_1i2_doors_bricks.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i2_doors_bricks.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i2_doors_bricks.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\housev_1i2_int_multi.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i2_int_multi.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i2_int_multi.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\housev_1i2_wood_roof.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i2_wood_roof.rvmat", "A3\Structures_F_Enoch\Civilian\Houses\data\destruct_housev_1i2_wood_roof.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
				};
				class Glass_10_source
				{
					source = "Hit";
					hitpoint = "Glass_10_hitpoint";
					raw = 1;
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
class Land_HouseV_1I3:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 18.1;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}};
				hide[] = {};
				verticalOffset = 2.621;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W03_F.jpg";
			_generalMacro = "Land_House_1W03_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v3)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W03_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 800;
			cost = 50000;
			numberOfDoors = 2;
			numberOfWindows = 6;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W03_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1i3_01.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i3_01.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i3_01.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1i3_02.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i3_02.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i3_02.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1i3_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i3_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i3_int_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "OldWoodDoorsSound";
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
					sound = "OldWoodDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
		};
class Land_HouseV_1I4:  House {
			author = "Bohemia Interactive";
			mapSize = 19.45;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}};
				hide[] = {};
				verticalOffset = 2.607;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W04_F.jpg";
			_generalMacro = "Land_House_1W04_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v4)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W04_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 3;
			numberOfWindows = 2;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W04_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f\data\windows\window_set_ca.paa", "A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1i4_01.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i4_01.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i4_01.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1i4_02.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i4_02.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i4_02.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1i4_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i4_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1i4_int_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "OldWoodDoorsSound";
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
					sound = "OldWoodDoorsSound";
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
					sound = "OldWoodDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_HouseV_1L1:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 16.48;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}};
				hide[] = {};
				verticalOffset = 3.01;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W05_F.jpg";
			_generalMacro = "Land_House_1W05_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v5)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W05_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 3;
			numberOfWindows = 5;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W05_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1l1_dayz.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1l1_dayz.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1l1_dayz.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1l1_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1l1_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1l1_int_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_HouseV_1L2:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 16.52;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}};
				hide[] = {};
				verticalOffset = 2.8;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W06_F.jpg";
			_generalMacro = "Land_House_1W06_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v6)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W06_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 3;
			numberOfWindows = 5;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W06_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1l2_dayz.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1l2_dayz.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1l2_dayz.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1l2_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1l2_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1l2_int_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_HouseV_1T:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 19.1;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"door_5_rot", 0}, {"door_5_handle_rot_1", 0}, {"door_5_handle_rot_2", 0}, {"door_5_locked_rot", 0}, {"door_5_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}, {"glass_10_hide", 0}, {"glass_10_unhide", 0}, {"glass_11_hide", 0}, {"glass_11_unhide", 0}, {"glass_12_hide", 0}, {"glass_12_unhide", 0}};
				hide[] = {};
				verticalOffset = 3.228;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W07_F.jpg";
			_generalMacro = "Land_House_1W07_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v7)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W07_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 5;
			numberOfWindows = 12;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W07_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_10_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_10";
					visual = "Glass_10_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_10_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_11_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_11";
					visual = "Glass_11_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_11_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_12_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_12";
					visual = "Glass_12_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_12_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1t_int.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1t_int.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1t_int.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_1t_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1t_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_1t_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
				};
				class Glass_10_source
				{
					source = "Hit";
					hitpoint = "Glass_10_hitpoint";
					raw = 1;
				};
				class Glass_11_source
				{
					source = "Hit";
					hitpoint = "Glass_11_hitpoint";
					raw = 1;
				};
				class Glass_12_source
				{
					source = "Hit";
					hitpoint = "Glass_12_hitpoint";
					raw = 1;
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
		};
class Land_HouseV_3I1:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 15.63;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}, {"glass_10_hide", 0}, {"glass_10_unhide", 0}, {"glass_11_hide", 0}, {"glass_11_unhide", 0}};
				hide[] = {};
				verticalOffset = 2.65;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W08_F.jpg";
			_generalMacro = "Land_House_1W08_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v8)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W08_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 4;
			numberOfWindows = 10;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W08_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_10_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_10";
					visual = "Glass_10_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_10_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_11_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_11";
					visual = "Glass_11_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_11_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i1_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i1_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i1_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i1_wood_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i1_wood_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i1_wood_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i1_wood_02_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i1_wood_02_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i1_wood_02_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
				};
				class Glass_10_source
				{
					source = "Hit";
					hitpoint = "Glass_10_hitpoint";
					raw = 1;
				};
				class Glass_11_source
				{
					source = "Hit";
					hitpoint = "Glass_11_hitpoint";
					raw = 1;
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
class Land_HouseV_3I2:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 15.36;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}};
				hide[] = {};
				verticalOffset = 2.529;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_1W09_F.jpg";
			_generalMacro = "Land_House_1W09_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (Small, v9)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W09_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			destrType = "DestructDefault";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 3;
			numberOfWindows = 5;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_1W09_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i2_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i2_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i2_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i2_wall_brick_asphalt.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i2_wall_brick_asphalt.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i2_wall_brick_asphalt.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_3i2_wood.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i2_wood.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_3i2_wood.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_houseV_2T1:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 19.58;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_locked_rot", 0}, {"door_5_rot", 0}, {"door_5_locked_rot", 0}, {"door_6_rot", 0}, {"door_6_locked_rot", 0}, {"door_7_rot", 0}, {"door_7_locked_rot", 0}, {"door_8_rot", 0}, {"door_8_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}, {"glass_10_hide", 0}, {"glass_10_unhide", 0}, {"glass_11_hide", 0}, {"glass_11_unhide", 0}, {"glass_12_hide", 0}, {"glass_12_unhide", 0}, {"glass_13_hide", 0}, {"glass_13_unhide", 0}, {"glass_14_hide", 0}, {"glass_14_unhide", 0}};
				hide[] = {};
				verticalOffset = 3.232;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_2W01_F.jpg";
			_generalMacro = "Land_House_2W01_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (v1)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_2W01_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 8;
			numberOfWindows = 14;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_2W01_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_10_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_10";
					visual = "Glass_10_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_10_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_11_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_11";
					visual = "Glass_11_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_11_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_12_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_12";
					visual = "Glass_12_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_12_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_13_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_13";
					visual = "Glass_13_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_13_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_14_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_14";
					visual = "Glass_14_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_14_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_2t1_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t1_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t1_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_2t1_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t1_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t1_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Door_7_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
					soundPosition = "Door_7_trigger";
				};
				class Door_7_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_7_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_8_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
					soundPosition = "Door_8_trigger";
				};
				class Door_8_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_8_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
				};
				class Glass_10_source
				{
					source = "Hit";
					hitpoint = "Glass_10_hitpoint";
					raw = 1;
				};
				class Glass_11_source
				{
					source = "Hit";
					hitpoint = "Glass_11_hitpoint";
					raw = 1;
				};
				class Glass_12_source
				{
					source = "Hit";
					hitpoint = "Glass_12_hitpoint";
					raw = 1;
				};
				class Glass_13_source
				{
					source = "Hit";
					hitpoint = "Glass_13_hitpoint";
					raw = 1;
				};
				class Glass_14_source
				{
					source = "Hit";
					hitpoint = "Glass_14_hitpoint";
					raw = 1;
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
				class OpenDoor_7
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_7_trigger";
					priority = 11;
					actionNamedSel = "Door_7_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_7_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 7, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_7: OpenDoor_7
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_7_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_7', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 7, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_8
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_8_trigger";
					priority = 11;
					actionNamedSel = "Door_8_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_8_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 8, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_8: OpenDoor_8
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_8_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_8', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 8, 0] call BIS_fnc_Door)";
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
			actionBegin7 = "OpenDoor_7";
			actionEnd7 = "OpenDoor_7";
			actionBegin8 = "OpenDoor_8";
			actionEnd8 = "OpenDoor_8";
		};
class Land_houseV_2T2:  Land_HouseV_1I2 {
			author = "Bohemia Interactive";
			mapSize = 20.43;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1a_rot", 0}, {"door_1a_handle_rot_1", 0}, {"door_1a_handle_rot_2", 0}, {"door_1a_locked_rot", 0}, {"door_1a_handle_locked_rot", 0}, {"door_1b_rot", 0}, {"door_1b_handle_rot_1", 0}, {"door_1b_handle_rot_2", 0}, {"door_1b_locked_rot", 0}, {"door_1b_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"door_5_rot", 0}, {"door_5_handle_rot_1", 0}, {"door_5_handle_rot_2", 0}, {"door_5_locked_rot", 0}, {"door_5_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}};
				hide[] = {};
				verticalOffset = 4.839;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_2W02_F.jpg";
			_generalMacro = "Land_House_2W02_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (v2)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_2W02_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 5;
			numberOfWindows = 7;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_2W02_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_2t2_int2_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t2_int2_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t2_int2_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_2t2_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t2_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t2_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev_2t2_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t2_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev_2t2_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
				class Door_3_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
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
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
			actionBegin4 = "OpenDoor_4";
			actionEnd4 = "OpenDoor_4";
			actionBegin5 = "OpenDoor_5";
			actionEnd5 = "OpenDoor_5";
		};
class Land_HouseV2_01A:  House {
			author = "Bohemia Interactive";
			mapSize = 21.12;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}};
				hide[] = {};
				verticalOffset = 6.044;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_2W03_F.jpg";
			_generalMacro = "Land_House_2W03_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (v3)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_2W03_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 3;
			numberOfWindows = 9;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_2W03_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_01a_dayz_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_01a_dayz_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_01a_dayz_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_01a_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_01a_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_01a_int_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_HouseV2_01B:  Land_HouseV2_01A {
			author = "Bohemia Interactive";
			mapSize = 23.97;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}, {"glass_10_hide", 0}, {"glass_10_unhide", 0}, {"glass_11_hide", 0}, {"glass_11_unhide", 0}};
				hide[] = {};
				verticalOffset = 6.096;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_House_2W04_F.jpg";
			_generalMacro = "Land_House_2W04_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Wooden House (v4)";
			model = "\A3\Structures_F_Enoch\Civilian\Houses\House_2W04_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Residential_Village";
			vehicleClass = "Structures_Village";
			armor = 1000;
			cost = 50000;
			numberOfDoors = 4;
			numberOfWindows = 11;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Civilian\Houses\House_2W04_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_10_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_10";
					visual = "Glass_10_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_10_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_11_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_11";
					visual = "Glass_11_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_11_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F\Data\Windows\window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat", "A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_01b_dayz_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_01b_dayz_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_01b_dayz_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\housev2_01b_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_01b_int_multi.rvmat", "A3\Structures_f_enoch\civilian\houses\data\destruct_housev2_01b_int_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
				};
				class Glass_10_source
				{
					source = "Hit";
					hitpoint = "Glass_10_hitpoint";
					raw = 1;
				};
				class Glass_11_source
				{
					source = "Hit";
					hitpoint = "Glass_11_hitpoint";
					raw = 1;
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
class Land_HouseV2_03_dam:  House {
			author = "Bohemia Interactive";
			mapSize = 48.83;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"costmap", 3019.25}, {"door_1_rot", 0}, {"door_1_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"door_4_rot", 0}, {"door_4_handle_rot_1", 0}, {"door_4_handle_rot_2", 0}, {"door_4_locked_rot", 0}, {"door_4_handle_locked_rot", 0}, {"door_5_rot", 0}, {"door_5_handle_rot_1", 0}, {"door_5_handle_rot_2", 0}, {"door_5_locked_rot", 0}, {"door_5_handle_locked_rot", 0}, {"door_6_rot", 0}, {"door_6_handle_rot_1", 0}, {"door_6_handle_rot_2", 0}, {"door_6_locked_rot", 0}, {"door_6_handle_locked_rot", 0}, {"door_7_rot", 0}, {"door_7_handle_rot_1", 0}, {"door_7_handle_rot_2", 0}, {"door_7_locked_rot", 0}, {"door_7_handle_locked_rot", 0}, {"door_8_rot", 0}, {"door_8_handle_rot_1", 0}, {"door_8_handle_rot_2", 0}, {"door_8_locked_rot", 0}, {"door_8_handle_locked_rot", 0}, {"door_9_rot", 0}, {"door_9_handle_rot_1", 0}, {"door_9_handle_rot_2", 0}, {"door_9_locked_rot", 0}, {"door_9_handle_locked_rot", 0}, {"door_10_rot", 0}, {"door_10_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}, {"glass_6_hide", 0}, {"glass_6_unhide", 0}, {"glass_7_hide", 0}, {"glass_7_unhide", 0}, {"glass_8_hide", 0}, {"glass_8_unhide", 0}, {"glass_9_hide", 0}, {"glass_9_unhide", 0}, {"glass_10_hide", 0}, {"glass_10_unhide", 0}, {"glass_11_hide", 0}, {"glass_11_unhide", 0}, {"glass_12_hide", 0}, {"glass_12_unhide", 0}, {"glass_13_hide", 0}, {"glass_13_unhide", 0}, {"glass_14_hide", 0}, {"glass_14_unhide", 0}, {"glass_15_hide", 0}, {"glass_15_unhide", 0}};
				hide[] = {};
				verticalOffset = 6.018;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_Factory_02_F.jpg";
			_generalMacro = "Land_Factory_02_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Factory (Lathes)";
			model = "\A3\Structures_F_Enoch\Industrial\Houses\Factory_02_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Industrial";
			vehicleClass = "Structures_Industrial";
			destrType = "DestructDefault";
			keepInEPESceneAfterDeath = 1;
			cost = 50000;
			numberOfDoors = 10;
			numberOfWindows = 15;
			class DestructionEffects
			{
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_6_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_6";
					visual = "Glass_6_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_6_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_6_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_7_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_7";
					visual = "Glass_7_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_7_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_7_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_8_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_8";
					visual = "Glass_8_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_8_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_8_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_9_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_9";
					visual = "Glass_9_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_9_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_9_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_10_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_10";
					visual = "Glass_10_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_10_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_10_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_11_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_11";
					visual = "Glass_11_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_11_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_11_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_12_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_12";
					visual = "Glass_12_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_12_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_12_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_13_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_13";
					visual = "Glass_13_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_13_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_13_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_14_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_14";
					visual = "Glass_14_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_14_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_14_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_15_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_15";
					visual = "Glass_15_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_15_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_15_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F_Enoch\Industrial\Houses\Data\housev2_03_int_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_int_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_int_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\housev2_03_multi_01.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_multi_01.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_multi_01.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\housev2_03_multi_02.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_multi_02.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_multi_02.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\housev2_03_multi_03.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_multi_03.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_multi_03.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\housev2_03_multi_04.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_multi_04.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_housev2_03_multi_04.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Door_7_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
					soundPosition = "Door_7_trigger";
				};
				class Door_7_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_7_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_8_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
					soundPosition = "Door_8_trigger";
				};
				class Door_8_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_8_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_9_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
					soundPosition = "Door_9_trigger";
				};
				class Door_9_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_9_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Door_10_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
					soundPosition = "Door_10_trigger";
				};
				class Door_10_noSound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
				};
				class Door_10_locked_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0.8;
				};
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
				};
				class Glass_6_source
				{
					source = "Hit";
					hitpoint = "Glass_6_hitpoint";
					raw = 1;
				};
				class Glass_7_source
				{
					source = "Hit";
					hitpoint = "Glass_7_hitpoint";
					raw = 1;
				};
				class Glass_8_source
				{
					source = "Hit";
					hitpoint = "Glass_8_hitpoint";
					raw = 1;
				};
				class Glass_9_source
				{
					source = "Hit";
					hitpoint = "Glass_9_hitpoint";
					raw = 1;
				};
				class Glass_10_source
				{
					source = "Hit";
					hitpoint = "Glass_10_hitpoint";
					raw = 1;
				};
				class Glass_11_source
				{
					source = "Hit";
					hitpoint = "Glass_11_hitpoint";
					raw = 1;
				};
				class Glass_12_source
				{
					source = "Hit";
					hitpoint = "Glass_12_hitpoint";
					raw = 1;
				};
				class Glass_13_source
				{
					source = "Hit";
					hitpoint = "Glass_13_hitpoint";
					raw = 1;
				};
				class Glass_14_source
				{
					source = "Hit";
					hitpoint = "Glass_14_hitpoint";
					raw = 1;
				};
				class Glass_15_source
				{
					source = "Hit";
					hitpoint = "Glass_15_hitpoint";
					raw = 1;
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
				class OpenDoor_7
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_7_trigger";
					priority = 11;
					actionNamedSel = "Door_7_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_7_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 7, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_7: OpenDoor_7
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_7_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_7', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 7, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_8
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_8_trigger";
					priority = 11;
					actionNamedSel = "Door_8_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_8_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 8, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_8: OpenDoor_8
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_8_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_8', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 8, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_9
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_9_trigger";
					priority = 11;
					actionNamedSel = "Door_9_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_9_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 9, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_9: OpenDoor_9
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_9_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_9', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 9, 0] call BIS_fnc_Door)";
				};
				class OpenDoor_10
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Open door";
					position = "Door_10_trigger";
					priority = 11;
					actionNamedSel = "Door_10_action";
					radius = 1.75;
					aiMaxRange = 5.25;
					onlyForPlayer = 0;
					condition = "((this animationSourcePhase 'Door_10_sound_source') < 0.5) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 10, 1] call BIS_fnc_Door)";
				};
				class CloseDoor_10: OpenDoor_10
				{
					displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
					displayName = "Close door";
					priority = 11;
					condition = "((this animationSourcePhase 'Door_10_sound_source') >= 0.5) && ((this getVariable ['bis_disabled_Door_10', 0]) != 1) && (cameraOn isKindOf 'CAManBase')";
					statement = "([this, 10, 0] call BIS_fnc_Door)";
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
			actionBegin7 = "OpenDoor_7";
			actionEnd7 = "OpenDoor_7";
			actionBegin8 = "OpenDoor_8";
			actionEnd8 = "OpenDoor_8";
			actionBegin9 = "OpenDoor_9";
			actionEnd9 = "OpenDoor_9";
			actionBegin10 = "OpenDoor_10";
			actionEnd10 = "OpenDoor_10";
		};
class  Land_Church_02;
class Land_Church_02a:  Land_Church_02 {
			author = "Bohemia Interactive";
			mapSize = 28.98;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_locked_rot", 0}};
				hide[] = {};
				verticalOffset = 11.568;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_OrthodoxChurch_02_F.jpg";
			_generalMacro = "Land_OrthodoxChurch_02_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Orthodox Church";
			model = "\a3\Structures_F_Enoch\Cultural\OrthodoxChurches\OrthodoxChurch_02_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_2x3";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Religious";
			vehicleClass = "Structures_Cultural";
			destrType = "DestructNo";
			armor = 400;
			explosionShielding = 0.2;
			cost = 75000;
			numberOfDoors = 3;
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
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "OldWoodDoorsSound";
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
					sound = "OldWoodDoorsSound";
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
					sound = "OldWoodDoorsSound";
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_Church_02:  House {
			author = "Bohemia Interactive";
			mapSize = 28.98;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_locked_rot", 0}};
				hide[] = {};
				verticalOffset = 11.568;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_OrthodoxChurch_02_F.jpg";
			_generalMacro = "Land_OrthodoxChurch_02_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Orthodox Church";
			model = "\a3\Structures_F_Enoch\Cultural\OrthodoxChurches\OrthodoxChurch_02_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_2x3";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Religious";
			vehicleClass = "Structures_Cultural";
			destrType = "DestructNo";
			armor = 400;
			explosionShielding = 0.2;
			cost = 75000;
			numberOfDoors = 3;
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
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "OldWoodDoorsSound";
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
					sound = "OldWoodDoorsSound";
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
					sound = "OldWoodDoorsSound";
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_Church_01:  House {
			author = "Bohemia Interactive";
			mapSize = 17.47;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1a_rot", 0}, {"door_1a_locked_rot", 0}, {"door_1b_rot", 0}, {"door_1b_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_locked_rot", 0}};
				hide[] = {};
				verticalOffset = 6.31;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_Church_05_F.jpg";
			_generalMacro = "Land_Church_05_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Small Church (Yellow)";
			model = "\A3\Structures_F_Enoch\Cultural\Church_05\Church_05_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_2x3";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Religious";
			vehicleClass = "Structures_Cultural";
			destrType = "DestructNo";
			armor = 400;
			explosionShielding = 0.2;
			cost = 75000;
			numberOfDoors = 3;
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
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "OldWoodDoorsSound";
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
					sound = "OldWoodDoorsSound";
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
					sound = "OldWoodDoorsSound";
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class  House_EP1;
class Land_Mil_Guardhouse_no_interior_CUP:  House {
			author = "Bohemia Interactive";
			mapSize = 12.47;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}};
				hide[] = {};
				verticalOffset = 1.905;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_GuardHouse_02_F.jpg";
			_generalMacro = "Land_GuardHouse_02_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Guard House";
			model = "\A3\Structures_F_Enoch\Military\Barracks\GuardHouse_02_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Military";
			vehicleClass = "Structures_Military";
			armor = 1000;
			explosionShielding = 5;
			cost = 50000;
			numberOfDoors = 3;
			numberOfWindows = 5;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Military\Barracks\GuardHouse_02_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F_Enoch\Military\Barracks\Data\mil_guardhouse_i_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_i_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_i_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\mil_guardhouse_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\mil_guardhouse_stair.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_stair.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_stair.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\mil_guardhouse_tile.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_tile.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_tile.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_Mil_Guardhouse_no_interior_EP1_CUP:  House_EP1 {
			author = "Bohemia Interactive";
			mapSize = 12.47;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}, {"door_2_rot", 0}, {"door_2_handle_rot_1", 0}, {"door_2_handle_rot_2", 0}, {"door_2_locked_rot", 0}, {"door_2_handle_locked_rot", 0}, {"door_3_rot", 0}, {"door_3_handle_rot_1", 0}, {"door_3_handle_rot_2", 0}, {"door_3_locked_rot", 0}, {"door_3_handle_locked_rot", 0}, {"glass_1_hide", 0}, {"glass_1_unhide", 0}, {"glass_2_hide", 0}, {"glass_2_unhide", 0}, {"glass_3_hide", 0}, {"glass_3_unhide", 0}, {"glass_4_hide", 0}, {"glass_4_unhide", 0}, {"glass_5_hide", 0}, {"glass_5_unhide", 0}};
				hide[] = {};
				verticalOffset = 1.905;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_GuardHouse_02_F.jpg";
			_generalMacro = "Land_GuardHouse_02_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Guard House";
			model = "\A3\Structures_F_Enoch\Military\Barracks\GuardHouse_02_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_3x2";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Military";
			vehicleClass = "Structures_Military";
			armor = 1000;
			explosionShielding = 5;
			cost = 50000;
			numberOfDoors = 3;
			numberOfWindows = 5;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Military\Barracks\GuardHouse_02_ruins_F.p3d";
					position = "";
					intensity = 1;
					interval = 1;
					lifeTime = 1;
				};
			};
			class HitPoints
			{
				class Glass_1_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_1";
					visual = "Glass_1_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_1_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_1_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_2_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_2";
					visual = "Glass_2_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_2_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_2_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_3_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_3";
					visual = "Glass_3_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_3_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_3_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_4_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_4";
					visual = "Glass_4_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_4_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_4_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
				class Glass_5_hitpoint
				{
					armor = 0.001;
					material = -1;
					name = "Glass_5";
					visual = "Glass_5_hide";
					passThrough = 0;
					radius = 0.4;
					convexComponent = "Glass_5_hide";
					class DestructionEffects
					{
						class BrokenGlass1
						{
							simulation = "particles";
							type = "BrokenGlass1N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2
						{
							simulation = "particles";
							type = "BrokenGlass2N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3
						{
							simulation = "particles";
							type = "BrokenGlass3N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4
						{
							simulation = "particles";
							type = "BrokenGlass4N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5
						{
							simulation = "particles";
							type = "BrokenGlass5N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6
						{
							simulation = "particles";
							type = "BrokenGlass6N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7
						{
							simulation = "particles";
							type = "BrokenGlass7N_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass1S
						{
							simulation = "particles";
							type = "BrokenGlass1S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass2S
						{
							simulation = "particles";
							type = "BrokenGlass2S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass3S
						{
							simulation = "particles";
							type = "BrokenGlass3S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass4S
						{
							simulation = "particles";
							type = "BrokenGlass4S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass5S
						{
							simulation = "particles";
							type = "BrokenGlass5S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass6S
						{
							simulation = "particles";
							type = "BrokenGlass6S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
						class BrokenGlass7S
						{
							simulation = "particles";
							type = "BrokenGlass7S_0900_0950";
							position = "Glass_5_effects";
							intensity = 0.15;
							interval = 1;
							lifeTime = 0.05;
						};
					};
				};
			};
			class Damage
			{
				tex[] = {"a3\structures_f_enoch\data\alpha\glass_int_new_ca.paa", "A3\Structures_F_Enoch\data\Alpha\destruct_half_glass_int_new_ca.paa"};
				mat[] = {"A3\Structures_F_Enoch\Military\Barracks\Data\mil_guardhouse_i_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_i_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_i_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\mil_guardhouse_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_multi.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\mil_guardhouse_stair.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_stair.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_stair.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\mil_guardhouse_tile.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_tile.rvmat", "A3\Structures_F_Enoch\Military\Barracks\Data\destruct_mil_guardhouse_tile.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
					sound = "GenericDoorsSound";
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
				class Glass_1_source
				{
					source = "Hit";
					hitpoint = "Glass_1_hitpoint";
					raw = 1;
				};
				class Glass_2_source
				{
					source = "Hit";
					hitpoint = "Glass_2_hitpoint";
					raw = 1;
				};
				class Glass_3_source
				{
					source = "Hit";
					hitpoint = "Glass_3_hitpoint";
					raw = 1;
				};
				class Glass_4_source
				{
					source = "Hit";
					hitpoint = "Glass_4_hitpoint";
					raw = 1;
				};
				class Glass_5_source
				{
					source = "Hit";
					hitpoint = "Glass_5_hitpoint";
					raw = 1;
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
			actionBegin2 = "OpenDoor_2";
			actionEnd2 = "OpenDoor_2";
			actionBegin3 = "OpenDoor_3";
			actionEnd3 = "OpenDoor_3";
		};
class Land_Misc_WaterStation:  House {
			author = "Bohemia Interactive";
			mapSize = 12.32;
			class SimpleObject
			{
				eden = 0;
				animate[] = {{"door_1_rot", 0}, {"door_1_handle_rot_1", 0}, {"door_1_handle_rot_2", 0}, {"door_1_locked_rot", 0}, {"door_1_handle_locked_rot", 0}};
				hide[] = {};
				verticalOffset = 1.116;
				verticalOffsetWorld = 0;
				init = "''";
			};
			editorPreview = "\A3\EditorPreviews_F_Enoch\Data\CfgVehicles\Land_WaterStation_01_F.jpg";
			_generalMacro = "Land_WaterStation_01_F";
			scope = 2;
			scopeCurator = 2;
			displayName = "Water Station";
			model = "\A3\Structures_F_Enoch\Industrial\Houses\WaterStation_01_F.p3d";
			DLC = "Enoch";
			icon = "iconObject_2x1";
			editorCategory = "EdCat_Structures_Enoch";
			editorSubcategory = "EdSubcat_Utilities";
			vehicleClass = "Structures_Village";
			armor = 4000;
			explosionShielding = 65;
			numberOfDoors = 1;
			numberOfWindows = 0;
			selectionDamage = "DamT_1";
			class DestructionEffects: DestructionEffects
			{
				class Ruin1
				{
					simulation = "ruin";
					type = "\A3\Structures_F_Enoch\Industrial\Houses\WaterStation_01_ruins_F.p3d";
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
				mat[] = {"A3\Structures_F_Enoch\Industrial\Houses\Data\waterstation_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_waterstation_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_waterstation_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\waterstation_i_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_waterstation_i_multi.rvmat", "A3\Structures_F_Enoch\Industrial\Houses\Data\destruct_waterstation_i_multi.rvmat"};
			};
			class AnimationSources
			{
				class Door_1_sound_source
				{
					source = "user";
					initPhase = 0;
					animPeriod = 1;
					sound = "GenericDoorsSound";
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
			};
			actionBegin1 = "OpenDoor_1";
			actionEnd1 = "OpenDoor_1";
		};
};
