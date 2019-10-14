// Manual fixes for things that our automated process didn't catch
#include "script_component.hpp"
    class CfgPatches {
        class ADDON {
            name = QUOTE(COMPONENT);
            units[] = {};
            weapons[] = {};
            requiredVersion = REQUIRED_VERSION;
            requiredAddons[] = {"LSR_patch_contact_in_cup_c"};
            author = "16AA 3LSR";
            authors[] = {"Blanthorn"};
            VERSION_CONFIG;
        };
    };


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
