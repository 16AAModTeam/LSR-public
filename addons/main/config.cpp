#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = QUOTE(REQUIRED_VERSION);
        requiredAddons[] = {};
        author = ECSTRING(common,LSR);
        authorURL = CSTRING(URL);
        versionDesc = "16AA public mods";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@16aa_public";
        name = "16AA public mods";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "Issue tracker: https://gitlab.com/16AA/LSR/lsr-public/";
    };
};

#include "CfgModuleCategories.hpp"
