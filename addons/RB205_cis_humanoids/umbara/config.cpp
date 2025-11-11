class cfgPatches
{
	class RB205_cis_humanoids_umbara
	{
		requiredAddons[] =
        {
            "RB205_core",
			"Poly_SDT_Umbaran"
        };
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {
			"RB205_umbaran"
		};
		weapons[] = {};
	};
};

class CfgEditorSubcategories
{
	class RB205_cis_humanoids_umbara
	{
		displayName = "Umbaran";
	};
};

#include "\RB205_core\macros.hpp"
#define FACTION "RB205_cis_humanoids"
#define SUBCATEGORY "RB205_cis_humanoids_umbara"

class CfgVehicles
{
	class Poly_UmbaranSoldier;
	class RB205_umbaran: Poly_UmbaranSoldier
	{
		ACCESS_TRUE
		displayName = "Umbaran Soldier";
		
		side = 0;
		faction = FACTION;
		editorSubcategory = SUBCATEGORY;
		
		//Inventory:
		linkedItems[] = { "P_SDT_UmbaranHelm","P_SDT_UmbaranVest","RB205_NV_chip","ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		respawnlinkedItems[] = { "P_SDT_UmbaranHelm","P_SDT_UmbaranVest","RB205_NV_chip","ItemMap","ItemGPS","ItemCompass","ls_radios_hush98" };
		items[] = {};
		respawnItems[] = {};
		weapons[] =
		{
			"P_UmbaranRifle",
			"Throw","Put"
		};
		respawnweapons[] =
		{
			"P_UmbaranRifle",
			"Throw","Put"
		};
		magazines[] =
		{
			"Poly_Umbaran_Mag","Poly_Umbaran_Mag","Poly_Umbaran_Mag","Poly_Umbaran_Mag","Poly_Umbaran_Mag",
			"OPTRE_FC_PlasmaGrenade"
		};
		respawnmagazines[] =
		{
			"Poly_Umbaran_Mag","Poly_Umbaran_Mag","Poly_Umbaran_Mag","Poly_Umbaran_Mag","Poly_Umbaran_Mag",
			"OPTRE_FC_PlasmaGrenade"
		};
	};
};

class CfgGroups
{
    class East
	{
		class RB205_cis_humanoids_groups
		{
			name = "[205] CIS - Humanoids";
			class Infantry_Umbara
			{
				name = "Umbaran";
				#include "groups.hpp"
			};
		};
	};
};