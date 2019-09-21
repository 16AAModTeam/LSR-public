class CfgVehicles {
    class  House;
    class  Land_HouseV_1I2;
    class  Land_HouseV2_04;
    class  Land_HouseV2_01A;
    class Land_HouseV_2I:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1B01_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_2L:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_2B01_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV2_02:  Land_HouseV2_01A {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_2B02_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV2_03B:  Land_HouseV2_01A {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_2B03_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV2_04_interier:  Land_HouseV2_04 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_2B04_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_1I1:  House {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W01_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_3I3:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W10_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_3I4:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W11_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_1I2:  House {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W02_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_1I3:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W03_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_1I4:  House {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W04_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_1L1:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W05_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_1L2:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W06_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_1T:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W07_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_3I1:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W08_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV_3I2:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_1W09_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_houseV_2T1:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_2W01_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_houseV_2T2:  Land_HouseV_1I2 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_2W02_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV2_01A:  House {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_2W03_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_HouseV2_01B:  Land_HouseV2_01A {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_House_2W04_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class  House;
    class  Land_Church_02;
    class Land_Church_02a:  Land_Church_02 {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_OrthodoxChurch_02_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_Church_02:  House {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_OrthodoxChurch_02_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };

    class Land_Church_01:  House {
        init = QUOTE(_p = getPosWorld (_this select 0); _up = vectorUp (_this select 0); _dir = vectorDir (_this select 0); deleteVehicle (_this select 0); _new = 'Land_Church_05_F' createVehicle _p; _new setPosWorld _p; _new setVectorUp _up; _new setVectorDir _dir;);
    };
};
