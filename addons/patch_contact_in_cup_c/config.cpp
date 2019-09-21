#include "script_component.hpp"
class CfgPatches {
    class ADDON {
        name = COMPONENT;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            /* "LSR_vehicle_building_contact_prep_c", */
            "A3_Structures_F_Enoch",
        };
        author = "16AA 3LSR";
        authors[] = {"Blanthorn","Dunwall"};
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
