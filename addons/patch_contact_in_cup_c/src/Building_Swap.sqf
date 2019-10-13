// Don't actually run this
// Dunwall just gave it to us so we could use his replacement arrays
// Use ./sqf2classhims.fish instead to generate the classnames to go under CfgVehicles{}

params ["_location","_radius"];
_debug = false; 

if (!isServer) exitWith {}; //get the fuck out nonservers

///////Parallel Arrays to make shit easier
_oldBuildingsVillage = ["Land_HouseV_2I","Land_HouseV_2L","Land_HouseV2_02","Land_HouseV2_03B","Land_HouseV2_04_interier","Land_HouseV_1I1","Land_HouseV_3I3","Land_HouseV_3I4","Land_HouseV_1I2","Land_HouseV_1I3","Land_HouseV_1I4","Land_HouseV_1L1","Land_HouseV_1L2","Land_HouseV_1T","Land_HouseV_3I1","Land_HouseV_3I2","Land_houseV_2T1","Land_houseV_2T2","Land_HouseV2_01A","Land_HouseV2_01B"];
_newBuildingsVillage = ["Land_House_1B01_F","Land_House_2B01_F","Land_House_2B02_F","Land_House_2B03_F","Land_House_2B04_F","Land_House_1W01_F","Land_House_1W10_F","Land_House_1W11_F","Land_House_1W02_F","Land_House_1W03_F","Land_House_1W04_F","Land_House_1W05_F","Land_House_1W06_F","Land_House_1W07_F","Land_House_1W08_F","Land_House_1W09_F","Land_House_2W01_F","Land_House_2W02_F","Land_House_2W03_F","Land_House_2W04_F"];

_oldBuildingsReligious = ["Land_Church_02a", "Land_Church_02", "Land_Church_01"];
_newBuildingsReligious = ["Land_OrthodoxChurch_02_F", "Land_OrthodoxChurch_02_F", "Land_Church_05_F"];

_oldBuildingsMilitary = ["Land_Mil_Guardhouse_no_interior_CUP","Land_Mil_Guardhouse_no_interior_EP1_CUP"];
_newBuildingsMilitary = ["Land_GuardHouse_02_F","Land_GuardHouse_02_F"];

_oldBuildingsOther = ["Land_Misc_WaterStation"];
_newBuildingsOther = ["Land_WaterStation_01_F"];

_oldAesthetic = ["Vec03","Haystack_small","Land_seno_balik","Land_Barn_W_01","Land_Barn_W_02","Land_Stodola_open","Land_Barn_Metal","Haystack"];

/* ,"CUP_A2_x_strawheap","CUP_A1_Stoh"]; */ // These last two replacements don't work :(
/* ,"Land_StrawStack_01_F","Land_StrawStack_01_F"]; */
_newAesthetic = ["Land_HayBale_01_F","Land_HayBale_01_F","Land_HayBale_01_F","Land_Barn_03_large_F","Land_Barn_03_small_F","Land_Barn_02_F","Land_Barn_04_F","Land_StrawStack_01_F"];

_oldBuildings = _oldBuildingsVillage + _oldBuildingsReligious + _oldBuildingsMilitary + _oldBuildingsOther;
_newBuildings = _newBuildingsVillage + _newBuildingsReligious + _newBuildingsMilitary + _newBuildingsOther;


///////Grab all buildings within radius
_mapObjects = _location nearObjects ["BUILDING", _radius];

if (_debug) then
{
	_objClassnames = [];
	{
		_objClassnames = _objClassnames + [typeOf _x];
	} forEach _mapObjects;
	hint format ["%1", _objClassnames];
};

{
	_obj = typeOf _x;
	_index = _oldBuildings find _obj;
	
	if (_index > -1) then
	{
		//if Object found replace object
		_pos = getPosWorld _x;
		_dir = getDir _x;
		_pitchBank = _x call BIS_fnc_getPitchBank;
		_x hideObjectGlobal true;

		_new = (_newBuildings select _index) createVehicle _pos;
		_new setPosWorld _pos;
		_new setDir _dir;
		[_new, _pitchBank select 0, _pitchBank select 1] call BIS_fnc_setPitchBank;
	};
} forEach _mapObjects;
