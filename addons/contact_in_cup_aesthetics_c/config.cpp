#include "script_component.hpp"
    class CfgPatches {
        class ADDON {
            name = QUOTE(COMPONENT);
            units[] = {};
            weapons[] = {};
            requiredVersion = REQUIRED_VERSION;
            requiredAddons[] = {
                "CABuildings",
                "CAMisc",
                "CAMisc3"
                /* "CUP_A1_EditorObjects", */ // These two have terrain objects but replacing models doesn't seem to work
                /* "CUP_A2_EditorObjects" */
            };
            author = "16AA 3LSR";
            VERSION_CONFIG;
        };
    };


#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
