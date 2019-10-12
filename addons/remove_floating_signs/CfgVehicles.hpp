/*
 * Hide signs that were attached to buildings but now float
 *
 * There are many more signs that inherit from Land_Company3_2;
 * if users report more floating signs then we should look into that
 * and delete them
 */
class CfgVehicles {
    class Land_Company3_2;
    class Land_SignB_Gov: Land_Company3_2 {
        scope = 1;
        delete model;
    };
    class Land_SignB_GovSign: Land_Company3_2 {
        scope = 1;
        delete model;
    };
    class Land_SignB_Pub_CZ2: Land_Company3_2 {
        scope = 1;
        delete model;
    };
    class Land_SignB_Pub_RU1: Land_Company3_2 {
        scope = 1;
        delete model;
    };
};
