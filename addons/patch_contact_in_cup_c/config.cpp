#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Structures_F_Enoch",
            "CABuildings", /* CUP core or any CUP-equivalent addon */
        };
        author = "16AA 3LSR";
        authors[] = {"Blanthorn","Dunwall"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
