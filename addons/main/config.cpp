#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = QUOTE(REQUIRED_VERSION);
        requiredAddons[] = {"ace_interaction"};
        author = ECSTRING(common,LSR);
        authors[] = {"Glowbal", "ACE Team"};
        authorURL = CSTRING(URL);
        versionDesc = "LSR AddOns";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@16aa";
        name = "16AA Addons";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "Issue Tracker: TBD GitLab";
    };
};

#include "CfgModuleCategories.hpp"
