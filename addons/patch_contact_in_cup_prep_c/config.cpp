#include "script_component.hpp"
class CfgPatches {
    class CUP_Church_01 {
        units[] = {};
    };
    class Church_01 {
        units[] = {};
    };
    class ADDON {
        name = COMPONENT;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            /* "CUP_Worlds", */
            "Church_01",
            /* "CAStructuresHouse_Church_02", */
            /* "CAStructuresHouse_HouseV", */
            /* "CAStructuresHouse_HouseV2", */
            /* "CUP_CAStructuresHouse_Church_02", */
            /* "CUP_CAStructuresHouse_HouseV", */
            /* "CUP_CAStructuresHouse_HouseV2", */
            /* "CUP_Buildings2_Config", */
            /* "CUP_Structures_Config", */
            /* "CUP_New_Buildings", */
            "CUP_Church_01",
        };
        author = "16AA 3LSR";
        authors[] = {"Blanthorn","Dunwall"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
