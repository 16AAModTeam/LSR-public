class CfgVehicles {
    class Land_Housev2_01A;
    class Land_HouseV2_03B: Land_HouseV2_01A {
        // This extra property isn't used by the Contact version
        // and messes up the damage model
        replaceDamagedHitpoints[] = {};
    };
};
