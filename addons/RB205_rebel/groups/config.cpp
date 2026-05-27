class cfgPatches
{
	class RB205_rebel_units_groups
	{
		author = "Putzi";
		requiredAddons[] =
		{
			"RB205_rebel_partisan_units"
		};
		requiredVersion = 1.0;
		units[] = {};
		weapons[] = {};
	};
};
#define ICON_INFANTRY   icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
#define ICON_RECON      icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";
#define ICON_EOD        icon = "\a3\UI_F_Orange\Data\CfgMarkers\o_Ordnance_ca.paa";
#define ICON_HQ         icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";

class CfgGroups
{
    class Indep
	{
		class RB205_rebel_groups
		{
			name = "[205] Rebels";
			class Infantry_Partisans
			{
				name = "Partisans";
				#include "partisans.hpp"
                ls_dispenser_available = 1;
			};
		};
	};
};