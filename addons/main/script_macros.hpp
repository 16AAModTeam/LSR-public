#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2

#define DGVAR(varName)    if(isNil "LSR_DEBUG_namespace") then { LSR_DEBUG_namespace = []; }; if(!(QUOTE(GVAR(varName)) in LSR_DEBUG_namespace)) then { PUSH(LSR_DEBUG_namespace, QUOTE(GVAR(varName))); }; GVAR(varName)
#define DVAR(varName)     if(isNil "LSR_DEBUG_namespace") then { LSR_DEBUG_namespace = []; }; if(!(QUOTE(varName) in LSR_DEBUG_namespace)) then { PUSH(LSR_DEBUG_namespace, QUOTE(varName)); }; varName
#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#undef QFUNC
#undef QEFUNC
#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#undef GETVAR
#define GETVAR(var1,var2,var3) var1 GETVAR_SYS(var2,var3)
#define GETMVAR(var1,var2) missionnamespace GETVAR_SYS(var1,var2)
#define GETUVAR(var1,var2) uinamespace GETVAR_SYS(var1,var2)
#define GETPRVAR(var1,var2) profilenamespace GETVAR_SYS(var1,var2)
#define GETPAVAR(var1,var2) parsingnamespace GETVAR_SYS(var1,var2)

#undef SETVAR
#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionnamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uinamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profilenamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingnamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT}

#define WEIGHT_DECIMAL_PLACES 2
#define KG_TO_MASS(WEIGHT_IN_KILOS)  ( round (((WEIGHT_IN_KILOS * 0.1) * (1*2.2046) * 100) * (10 ^ WEIGHT_DECIMAL_PLACES) ) / (10 ^ WEIGHT_DECIMAL_PLACES) )

#define MACRO_ADDWEAPON(WEAPON,COUNT) class _xx_##WEAPON { \
  weapon = #WEAPON; \
  count = COUNT; \
}

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
  name = #ITEM; \
  count = COUNT; \
}

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
  magazine = #MAGAZINE; \
  count = COUNT; \
}

#define MACRO_ADDBACKPACK(BACKPACK,COUNT) class _xx_##BACKPACK { \
  backpack = #BACKPACK; \
  count = COUNT; \
}
#define MACRO_ADDATTACHMENT_MUZZLE(RAIL,ITEM) class LinkedItemsMuzzle { \
                slot = #RAIL; \
                item = #ITEM; \
}
#define MACRO_ADDATTACHMENT_SIDE(RAIL,ITEM) class LinkedItemsAcc { \
                slot = #RAIL; \
                item = #ITEM; \
}
#define MACRO_ADDATTACHMENT_TOP(RAIL,ITEM) class LinkedItemsOptic { \
                slot = #RAIL; \
                item = #ITEM; \
}
#define MACRO_GROUNDHOLDER_HEADGEAR(NAME,CLASS) class 16aa_Item_Groundholder_Helmet_##CLASS##: Headgear_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Equipment_Headgear"; \
    class TransportItems { \
      class 16aa_Helmet_##CLASS { \
            name = QUOTE(16aa_Helmet_##CLASS); \
            count = 1; \
      }; \
    }; \
}

#define MACRO_GROUNDHOLDER_GOGGLE(NAME,CLASS) class 16aa_Item_Groundholder_Goggle_##CLASS##: Headgear_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Equipment_Headgear"; \
    class TransportItems { \
      class 16aa_Goggle_##CLASS { \
          name = QUOTE(16aa_Goggle_##CLASS); \
          count = 1; \
      }; \
    }; \
}

#define MACRO_GROUNDHOLDER_VEST(NAME,CLASS) class 16aa_Item_Groundholder_Vest_##CLASS##: Vest_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Equipment_Vest"; \
    class TransportItems { \
        class 16aa_Vest_##CLASS { \
            name = QUOTE(16aa_Vest_##CLASS); \
            count = 1; \
        }; \
    }; \
}

#define MACRO_GROUNDHOLDER_UNIFORM(NAME,CLASS) class 16aa_Item_Groundholder_Uniform_##CLASS: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Equipment_Uniform"; \
    model = "\A3\Weapons_f\dummyweapon.p3d"; \
    class TransportItems { \
        class 16aa_Uniform_##CLASS { \
            name = QUOTE(16aa_Uniform_##CLASS); \
            count = 1; \
         }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_PISTOL(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Pistol_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Pistol"; \
    class TransportWeapons { \
        class 16aa_Wweapon_Pistol_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Pistol_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_RIFLE(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Rifle_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Rifle"; \
    class TransportWeapons { \
        class 16aa_Wweapon_Rifle_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Rifle_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_RIFLE_BLANK(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Rifle_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Rifle_Blank"; \
    class TransportWeapons { \
        class 16aa_Weapon_Rifle_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Rifle_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_SHOTGUN(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Shotgun_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Shotgun"; \
    class TransportWeapons { \
        class 16aa_Weapon_Shotgun_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Shotgun_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_SHOTGUN_BLANK(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Shotgun_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Shotgun_Blank"; \
    class TransportWeapons { \
        class 16aa_Weapon_Shotgun_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Shotgun_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_LMG(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_LMG_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_LMG"; \
    class TransportWeapons { \
        class 16aa_Weapon_LMG_##CLASS { \
            weapon = QUOTE(16aa_Weapon_LMG_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_LMG_BLANK(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_LMG_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_LMG_Blank"; \
    class TransportWeapons { \
        class 16aa_Weapon_LMG_##CLASS { \
            weapon = QUOTE(16aa_Weapon_LMG_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_LAUNCHER(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Launcher_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Launcher"; \
    class TransportWeapons { \
        class 16aa_Weapon_Launcher_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Launcher_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_LAUNCHER_BLANK(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Launcher_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Launcher_Blank"; \
    class TransportWeapons { \
        class 16aa_Weapon_Launcher_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Launcher_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_SNIPER(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Sniper_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Sniper"; \
    class TransportWeapons { \
        class 16aa_Weapon_Sniper_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Sniper_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_SNIPER_BLANK(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Sniper_##CLASS: GroundWeaponHolder { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Sniper_Blank"; \
    class TransportWeapons { \
        class 16aa_Weapon_Sniper_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Sniper_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_ITEM(NAME,CLASS) class 16aa_Item_Groundholder_Item_##CLASS: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Item"; \
    class TransportWeapons { \
        class 16aa_Weapon_Item_##CLASS { \
            weapon = QUOTE(16aa_Weapon_Item_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_ITEM_ATTACHMENT(NAME,CLASS) class 16aa_Item_Groundholder_Weapon_Attachment_##CLASS: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Attachment"; \
    class TransportWeapons { \
        class 16aa_Attachment_##CLASS { \
            weapon = QUOTE(16aa_Attachment_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_WEAPON_MAGAZINE(NAME,CLASS) class 16aa_Item_Groundholder_Magazine_##CLASS: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Weapon_Magazine"; \
    class TransportMagazines { \
        class 16aa_Magazine_##CLASS { \
            magazine = QUOTE(16aa_Magazine_##CLASS); \
            count = 1; \
        }; \
    }; \
}
#define MACRO_GROUNDHOLDER_SIGN(NAME,CLASS) class 16aa_Item_Groundholder_Sign_##CLASS: Item_Base_F { \
    scope = 2; \
    scopeCurator = 2; \
    displayName = ##NAME; \
    author = ECSTRING(common,LSR); \
    editorCategory = "16aa_Eden_Category"; \
    editorSubcategory = "16aa_Eden_Subcategory_Object_Signs"; \
    class TransportItems { \
        class 16aa_Weapon_Item_Sign_##CLASS { \
            name = QUOTE(16aa_Weapon_Item_Sign_##CLASS); \
            count = 1; \
        }; \
    }; \
}
// item types
#define TYPE_DEFAULT 0
#define TYPE_MUZZLE 101
#define TYPE_OPTICS 201
#define TYPE_FLASHLIGHT 301
#define TYPE_BIPOD 302
#define TYPE_FIRST_AID_KIT 401
#define TYPE_FINS 501 // not implemented
#define TYPE_BREATHING_BOMB 601 // not implemented
#define TYPE_NVG 602
#define TYPE_GOGGLE 603
#define TYPE_SCUBA 604 // not implemented
#define TYPE_HEADGEAR 605
#define TYPE_FACTOR 607
#define TYPE_RADIO 611
#define TYPE_HMD 616
#define TYPE_BINOCULAR 617
#define TYPE_MEDIKIT 619
#define TYPE_TOOLKIT 620
#define TYPE_UAV_TERMINAL 621
#define TYPE_VEST 701
#define TYPE_UNIFORM 801
#define TYPE_BACKPACK 901

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf))
#else
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = QUOTE(PATHTOF(functions\DOUBLES(fnc,fncName).sqf)) call SLX_XEH_COMPILE
#endif

#define PREP_MODULE(folder) [] call compile preprocessFileLineNumbers QUOTE(PATHTOF(folder\__PREP__.sqf))

#define HASH_CREATE                    ([] call EFUNC(common,hashCreate))
#define HASH_SET(hash, key, val)    ([hash, key, val, __FILE__, __LINE__] call EFUNC(common,hashSet))
#define HASH_GET(hash, key)            ([hash, key, __FILE__, __LINE__] call EFUNC(common,hashGet))
#define HASH_REM(hash, key)            ([hash, key, __FILE__, __LINE__] call EFUNC(common,hashRem))
#define HASH_HASKEY(hash, key)        ([hash, key, __FILE__, __LINE__] call EFUNC(common,hashHasKey))

#define HASHLIST_CREATELIST(keys)                ([keys] call EFUNC(common,hashListCreateList))
#define HASHLIST_CREATEHASH(hashList)            ([hashList] call EFUNC(common,hashListCreateHash))
#define HASHLIST_SELECT(hashList, index)        ([hashList, index, __FILE__, __LINE__] call EFUNC(common,hashListSelect))
#define HASHLIST_SET(hashList, index, value)    ([hashList, index, value, __FILE__, __LINE__] call EFUNC(common,hashListSet))
#define HASHLIST_PUSH(hashList, value)            ([hashList, value, __FILE__, __LINE__] call EFUNC(common,hashListPush))



//By default CBA's TRACE/LOG/WARNING spawn a buffer, which can cause messages to be logged out of order:
#ifdef CBA_DEBUG_SYNCHRONOUS
    #define CBA_fnc_log { params ["_file","_lineNum","_message"]; diag_log [diag_frameNo, diag_tickTime, time,  _file + ":"+str(_lineNum + 1), _message]; }
#endif

#define LSR_LOG(module,level,message) diag_log text LSR_LOGFORMAT(module,level,message)
#define LSR_LOGFORMAT(module,level,message) FORMAT_2(QUOTE([ACE] (module) %1: %2),level,message)

#define LSR_LOGERROR(message) LSR_LOG(COMPONENT,"ERROR",message)
#define LSR_LOGERROR_1(message,arg1) LSR_LOGERROR(FORMAT_1(message,arg1))
#define LSR_LOGERROR_2(message,arg1,arg2) LSR_LOGERROR(FORMAT_2(message,arg1,arg2))
#define LSR_LOGERROR_3(message,arg1,arg2,arg3) LSR_LOGERROR(FORMAT_3(message,arg1,arg2,arg3))
#define LSR_LOGERROR_4(message,arg1,arg2,arg3,arg4) LSR_LOGERROR(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define LSR_LOGERROR_5(message,arg1,arg2,arg3,arg4,arg5) LSR_LOGERROR(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define LSR_LOGERROR_6(message,arg1,arg2,arg3,arg4,arg5,arg6) LSR_LOGERROR(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define LSR_LOGERROR_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) LSR_LOGERROR(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define LSR_LOGERROR_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) LSR_LOGERROR(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define LSR_ERRORFORMAT(message) LSR_LOGFORMAT(COMPONENT,"ERROR",message)
#define LSR_ERRORFORMAT_1(message,arg1) LSR_ERRORFORMAT(FORMAT_1(message,arg1))
#define LSR_ERRORFORMAT_2(message,arg1,arg2) LSR_ERRORFORMAT(FORMAT_2(message,arg1,arg2))
#define LSR_ERRORFORMAT_3(message,arg1,arg2,arg3) LSR_ERRORFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define LSR_ERRORFORMAT_4(message,arg1,arg2,arg3,arg4) LSR_ERRORFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define LSR_ERRORFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) LSR_ERRORFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define LSR_ERRORFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) LSR_ERRORFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define LSR_ERRORFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) LSR_ERRORFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define LSR_ERRORFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) LSR_ERRORFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define LSR_LOGWARNING(message) LSR_LOG(COMPONENT,"WARNING",message)
#define LSR_LOGWARNING_1(message,arg1) LSR_LOGWARNING(FORMAT_1(message,arg1))
#define LSR_LOGWARNING_2(message,arg1,arg2) LSR_LOGWARNING(FORMAT_2(message,arg1,arg2))
#define LSR_LOGWARNING_3(message,arg1,arg2,arg3) LSR_LOGWARNING(FORMAT_3(message,arg1,arg2,arg3))
#define LSR_LOGWARNING_4(message,arg1,arg2,arg3,arg4) LSR_LOGWARNING(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define LSR_LOGWARNING_5(message,arg1,arg2,arg3,arg4,arg5) LSR_LOGWARNING(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define LSR_LOGWARNING_6(message,arg1,arg2,arg3,arg4,arg5,arg6) LSR_LOGWARNING(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define LSR_LOGWARNING_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) LSR_LOGWARNING(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define LSR_LOGWARNING_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) LSR_LOGWARNING(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define LSR_WARNINGFORMAT(message) LSR_LOGFORMAT(COMPONENT,"WARNING",message)
#define LSR_WARNINGFORMAT_1(message,arg1) LSR_WARNINGFORMAT(FORMAT_1(message,arg1))
#define LSR_WARNINGFORMAT_2(message,arg1,arg2) LSR_WARNINGFORMAT(FORMAT_2(message,arg1,arg2))
#define LSR_WARNINGFORMAT_3(message,arg1,arg2,arg3) LSR_WARNINGFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define LSR_WARNINGFORMAT_4(message,arg1,arg2,arg3,arg4) LSR_WARNINGFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define LSR_WARNINGFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) LSR_WARNINGFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define LSR_WARNINGFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) LSR_WARNINGFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define LSR_WARNINGFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) LSR_WARNINGFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define LSR_WARNINGFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) LSR_WARNINGFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define LSR_LOGINFO(message) LSR_LOG(COMPONENT,"INFO",message)
#define LSR_LOGINFO_1(message,arg1) LSR_LOGINFO(FORMAT_1(message,arg1))
#define LSR_LOGINFO_2(message,arg1,arg2) LSR_LOGINFO(FORMAT_2(message,arg1,arg2))
#define LSR_LOGINFO_3(message,arg1,arg2,arg3) LSR_LOGINFO(FORMAT_3(message,arg1,arg2,arg3))
#define LSR_LOGINFO_4(message,arg1,arg2,arg3,arg4) LSR_LOGINFO(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define LSR_LOGINFO_5(message,arg1,arg2,arg3,arg4,arg5) LSR_LOGINFO(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define LSR_LOGINFO_6(message,arg1,arg2,arg3,arg4,arg5,arg6) LSR_LOGINFO(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define LSR_LOGINFO_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) LSR_LOGINFO(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define LSR_LOGINFO_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) LSR_LOGINFO(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define LSR_INFOFORMAT(message) LSR_LOGFORMAT(COMPONENT,"INFO",message)
#define LSR_INFOFORMAT_1(message,arg1) LSR_INFOFORMAT(FORMAT_1(message,arg1))
#define LSR_INFOFORMAT_2(message,arg1,arg2) LSR_INFOFORMAT(FORMAT_2(message,arg1,arg2))
#define LSR_INFOFORMAT_3(message,arg1,arg2,arg3) LSR_INFOFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define LSR_INFOFORMAT_4(message,arg1,arg2,arg3,arg4) LSR_INFOFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define LSR_INFOFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) LSR_INFOFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define LSR_INFOFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) LSR_INFOFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define LSR_INFOFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) LSR_INFOFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define LSR_INFOFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) LSR_INFOFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define LSR_LOGDEBUG(message) LSR_LOG(COMPONENT,"DEBUG",message)
#define LSR_LOGDEBUG_1(message,arg1) LSR_LOGDEBUG(FORMAT_1(message,arg1))
#define LSR_LOGDEBUG_2(message,arg1,arg2) LSR_LOGDEBUG(FORMAT_2(message,arg1,arg2))
#define LSR_LOGDEBUG_3(message,arg1,arg2,arg3) LSR_LOGDEBUG(FORMAT_3(message,arg1,arg2,arg3))
#define LSR_LOGDEBUG_4(message,arg1,arg2,arg3,arg4) LSR_LOGDEBUG(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define LSR_LOGDEBUG_5(message,arg1,arg2,arg3,arg4,arg5) LSR_LOGDEBUG(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define LSR_LOGDEBUG_6(message,arg1,arg2,arg3,arg4,arg5,arg6) LSR_LOGDEBUG(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define LSR_LOGDEBUG_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) LSR_LOGDEBUG(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define LSR_LOGDEBUG_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) LSR_LOGDEBUG(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define LSR_DEBUGFORMAT(message) LSR_LOGFORMAT(COMPONENT,"DEBUG",message)
#define LSR_DEBUGFORMAT_1(message,arg1) LSR_DEBUGFORMAT(FORMAT_1(message,arg1))
#define LSR_DEBUGFORMAT_2(message,arg1,arg2) LSR_DEBUGFORMAT(FORMAT_2(message,arg1,arg2))
#define LSR_DEBUGFORMAT_3(message,arg1,arg2,arg3) LSR_DEBUGFORMAT(FORMAT_3(message,arg1,arg2,arg3))
#define LSR_DEBUGFORMAT_4(message,arg1,arg2,arg3,arg4) LSR_DEBUGFORMAT(FORMAT_4(message,arg1,arg2,arg3,arg4))
#define LSR_DEBUGFORMAT_5(message,arg1,arg2,arg3,arg4,arg5) LSR_DEBUGFORMAT(FORMAT_5(message,arg1,arg2,arg3,arg4,arg5))
#define LSR_DEBUGFORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6) LSR_DEBUGFORMAT(FORMAT_6(message,arg1,arg2,arg3,arg4,arg5,arg6))
#define LSR_DEBUGFORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7) LSR_DEBUGFORMAT(FORMAT_7(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7))
#define LSR_DEBUGFORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8) LSR_DEBUGFORMAT(FORMAT_8(message,arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8))

#define LSR_DEPRECATED(arg1,arg2,arg3) LSR_LOGWARNING_3("%1 is deprecated. Support will be dropped in version %2. Replaced by: %3",arg1,arg2,arg3)

#include "script_debug.hpp"
