class cfgPatches
{
    class RB205_weapons_e11d
	{
		requiredAddons[]=
		{
			"RB205_empire_weapons",
			"WM_Imperial_E11D"
		};
        skipWhenMissingDependencies = 1;
		requiredVersion = 1.0;
		units[] = {};
		weapons[] =
		{
			"RB205_E11D"
		};
	};
};

#include "\RB205_empire\weapons\macros.hpp"

class cfgWeapons
{
	class ImperialRifle_Base;
	class WM_E11D: ImperialRifle_Base
	{
		class Single;
		class FullAuto;
	};
	class RB205_E11D: WM_E11D
	{
		displayName = "$STR_205_E11D_DisplayName";
		displayNameShort = "$STR_205_E11D_DisplayNameShort";
		descriptionShort = "Blasterkarabiner des Imperium";
		mass = MASS_WP_CARBINE;
		magazines[] =
		{
			"RB205_Experimental_Energy_Pack_red"
		};
		cursor = "RB205_CH_default";
		magazineWell[] = {};
		modes[] = {"FullAuto","Single"};
		class Single: Single
		{
			dispersion = 0;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0;
		};
	};
};