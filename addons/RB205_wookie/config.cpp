class cfgPatches
{
	class RB205_factions_wookie
	{
		requiredAddons[] = {
			"RB205_core"
		};
		requiredVersion = 1.0;
		units[] = {
			"RB205_wookie",
			"RB205_wookie_soldier",
			"RB205_wookie_soldier_light",
			"RB205_wookie_chieftain"
		};
		weapons[] = {
			"RB205_U_wookie",
			"RB205_U_wookie_black",
			"RB205_U_wookie_dirty",

			"RB205_H_wookie",
			"RB205_H_wookie_chieftain",
			"RB205_V_wookie_belt",
			"RB205_V_wookie_armor",
			"RB205_V_wookie_armor_light",
			"RB205_V_wookie_armor_chieftain"
		};
	};
};

#include "\RB205_core\macros.hpp"

class CfgFactionClasses
{
	class RB205_wookie
	{
		displayName = "[205] Wookies";
		priority = 999;
		side = 1;
	};
};
class CfgEditorSubcategories
{
	class RB205_wookie_soldier
	{
		displayName = "Wookie Soldiers";
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	class RB205_unit_base: B_Soldier_base_F{
		class HitPoints {
            class HitFace;
            class HitNeck;
            class HitHead;
            class HitPelvis;
            class HitAbdomen;
            class HitDiaphragm;
            class HitChest;
            class HitBody;
            class HitArms;
            class HitHands;
            class HitLegs;
        };
	};
	class RB205_wookie: RB205_unit_base
	{
		ACCESS_TRUE
		displayName = "Wookie";
		uniformClass = "RB205_U_wookie";

		side = 1;
		faction = "RB205_wookie";
		editorSubcategory = "RB205_wookie_soldier";

		model = "\SWOP_wookie\body.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"SWOP_wookie\data\wookiee1\hair_co.paa","SWOP_wookie\data\wookiee1\hairface_co.paa"};

		//Inventory:
		backpack = "";
		weapons[] = {"JMSLLTE_f78","Throw","Put"};
		respawnweapons[] = {"JMSLLTE_f78","Throw","Put"};
		magazines[] = {"JMSLLTE_F78_50Rnd_Mag","JMSLLTE_F78_50Rnd_Mag","JMSLLTE_F78_50Rnd_Mag","JMSLLTE_F78_50Rnd_Mag","JMSLLTE_F78_50Rnd_Mag"};
		respawnMagazines[] = {"JMSLLTE_F78_50Rnd_Mag","JMSLLTE_F78_50Rnd_Mag","JMSLLTE_F78_50Rnd_Mag","JMSLLTE_F78_50Rnd_Mag","JMSLLTE_F78_50Rnd_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};

		//Armor		
        armor = 8;
        armorStructural = 20;
        explosionShielding = 0.1;
        class HitPoints: HitPoints {
            class HitFace: HitFace {
                armor = 2;
                passThrough = 0.5;
            };
            class HitNeck: HitNeck {
                armor = 5;
                passThrough = 0.5;
            };
            class HitHead: HitHead {
                armor = 2;
                passThrough = 0.5;
            };
            class HitPelvis: HitPelvis {
                armor = 20;
                passThrough = 0.25;
            };
            class HitAbdomen: HitAbdomen {
                armor = 20;
                passThrough = 0.5;
            };
            class HitDiaphragm: HitDiaphragm {
                armor = 15;
                passThrough = 0.5;
            };
            class HitChest: HitChest {
                armor = 15;
                passThrough = 0.5;
            };
            class HitBody: HitBody {
                armor = 1000;
                passThrough = 0.5;
            };
            class HitArms: HitArms {
                armor = 20;
                passThrough = 1;
            };
            class HitHands: HitHands {
                armor = 25;
                passThrough = 1;
            };
            class HitLegs: HitLegs {
                armor = 20;
                passThrough = 1;
            };
        };
	};
	class RB205_wookie_black: RB205_wookie
	{
		scope = 1;
		uniformClass = "RB205_U_wookie_black";

		hiddenSelectionsTextures[] = {"SWOP_wookie\data\wookiee3\hair_co.paa","SWOP_wookie\data\wookiee3\hairface_co.paa"};
	};
	class RB205_wookie_dirty: RB205_wookie
	{
		scope = 1;
		uniformClass = "RB205_U_wookie_dirty";

		hiddenSelectionsTextures[] = {"SWOP_wookie\data\wookiee5\hair_co.paa","SWOP_wookie\data\wookiee5\hairface_co.paa"};
	};
	class RB205_wookie_soldier: RB205_wookie
	{
		ACCESS_TRUE
		displayName = "Wookie Soldier";

		linkedItems[] = 		{"RB205_H_wookie","RB205_V_wookie_armor","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = 	{"RB205_H_wookie","RB205_V_wookie_armor","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class RB205_wookie_soldier_light: RB205_wookie
	{
		ACCESS_TRUE
		displayName = "Wookie Soldier (Light)";

		linkedItems[] = 		{"RB205_H_wookie","RB205_V_wookie_armor_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = 	{"RB205_H_wookie","RB205_V_wookie_armor_light","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class RB205_wookie_chieftain: RB205_wookie
	{
		ACCESS_TRUE
		displayName = "Wookie Chieftain";

		linkedItems[] = 		{"RB205_H_wookie_chieftain","RB205_V_wookie_armor_chieftain","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = 	{"RB205_H_wookie_chieftain","RB205_V_wookie_armor_chieftain","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
};
class CfgWeapons
{
	class help_uniform_base;
	class RB205_uniform_base: help_uniform_base
	{
		class ItemInfo;
	};
	class RB205_U_wookie: RB205_uniform_base
	{
		ACCESS_TRUE
		displayName = "Wookie";
		picture = "\SWOP_wookie\data\wookie.paa";

		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_wookie";
		};
	};
	class RB205_U_wookie_black: RB205_U_wookie
	{
		ACCESS_TRUE
		displayName = "Wookie (Black)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_wookie_black";
		};
	};
	class RB205_U_wookie_dirty: RB205_U_wookie
	{
		ACCESS_TRUE
		displayName = "Wookie (Dirty)";

		class ItemInfo: ItemInfo
		{
			uniformClass = "RB205_wookie_dirty";
		};
	};

	class help_helmet_base;
	class RB205_helmet_base: help_helmet_base
	{
		class ItemInfo;
	};
	class RB205_H_wookie: RB205_helmet_base
	{
		ACCESS_TRUE
        displayName = "Wookie Helmet";
        picture = "\SWOP_wookie\data\wookiee1\Ico_helm.paa";
        model = "\SWOP_wookie\Helmet.p3d";
		class ItemInfo: ItemInfo {
            uniformModel = "\SWOP_wookie\Helmet.p3d";
			
            armor = 30;
            explosionShielding = 3.4;
            minimalHit = 0.01;
            passThrough = 0.01;
            class HitpointsProtectionInfo {
                class Head {
                    hitpointName = "HitHead";
                    armor = 300;
                    passThrough = 0.1;
                };
            };
        };
	};
	class RB205_H_wookie_chieftain: RB205_H_wookie
	{
		ACCESS_TRUE
        displayName = "Wookie Helmet (Chieftain)";
        picture = "\SWOP_wookie\data\wookiee1\Ico_helm.paa";
        model = "\SWOP_wookie\HelmS.p3d";
		class ItemInfo: ItemInfo {
            uniformModel = "\SWOP_wookie\HelmS.p3d";
        };
	};

	class help_vest_base;
	class RB205_vest_base: help_vest_base
	{
		class ItemInfo;
	};
	class RB205_V_wookie_belt: RB205_vest_base
	{
		ACCESS_TRUE
        displayName = "Wookie Belt";
		picture = "\SWOP_wookie\data\wookiee1\Ico_bag.paa";
        model = "\SWOP_wookie\vest1.p3d";
		class ItemInfo: ItemInfo {
            uniformModel = "\SWOP_wookie\vest1.p3d";
        };
	};
	class RB205_V_wookie_armor: RB205_vest_base
	{
		ACCESS_TRUE
        displayName = "Wookie Armor";
        picture = "\SWOP_wookie\data\wookiee1\Ico_armor.paa";
        model = "\SWOP_wookie\vest2.p3d";
		class ItemInfo: ItemInfo {
            uniformModel = "\SWOP_wookie\vest2.p3d";

			armor = 500;
            class HitpointsProtectionInfo {
                class Neck {
                    hitpointName = "HitNeck";
                    armor = 50;
                    passThrough = 0.2;
                };
                class Arms {
                    hitpointName = "HitArms";
                    armor = 50;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 80;
                    passThrough = 0.2;
                };
            };
        };
	};
	class RB205_V_wookie_armor_light: RB205_V_wookie_armor
	{
		ACCESS_TRUE
        displayName = "Wookie Armor (Light)";
        picture = "\SWOP_wookie\data\wookiee1\Ico_armor.paa";
        model = "\SWOP_wookie\vest3.p3d";
		class ItemInfo: ItemInfo {
            uniformModel = "\SWOP_wookie\vest3.p3d";
        };
	};
	class RB205_V_wookie_armor_chieftain: RB205_V_wookie_armor
	{
		ACCESS_TRUE
        displayName = "Wookie Armor (Chieftain)";
        picture = "\SWOP_wookie\data\wookiee1\Ico_armor.paa";
        model = "\SWOP_wookie\vest9.p3d";
		class ItemInfo: ItemInfo {
            uniformModel = "\SWOP_wookie\vest9.p3d";
        };
	};
};