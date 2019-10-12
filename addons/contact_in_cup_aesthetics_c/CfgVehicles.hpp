class CfgVehicles {
    class  misc01;
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
};
