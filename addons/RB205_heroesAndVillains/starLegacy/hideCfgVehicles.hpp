class B_Soldier_A_F;
class O_Soldier_F;
class B_Kitbag_rgr;



class Anakin_base: B_Soldier_A_F { ACCESS_FALSE };
class Obi_Wan_base: Anakin_base { ACCESS_FALSE };
class Ki_Adi_Mundi_base: Anakin_base { ACCESS_FALSE };
class Kit_Fisto_base: Anakin_base { ACCESS_FALSE };
class Mace_Windu_base: Anakin_base { ACCESS_FALSE };
class Plo_Koon_base: Anakin_base { ACCESS_FALSE };
class Shaak_Ti_base: Anakin_base { ACCESS_FALSE };

class Asajj_Ventress: O_Soldier_F { ACCESS_FALSE };
class Graf_Dooku: Asajj_Ventress { ACCESS_FALSE };
class Darth_Sidious: O_Soldier_F { ACCESS_FALSE };
class General_Grievous: O_Soldier_F { ACCESS_FALSE };
class Droid_Tactical: O_Soldier_F { ACCESS_FALSE };
class Droid_Tactical_Kalani: Droid_Tactical { ACCESS_FALSE };
class Droid_Tactical_Kraken: Droid_Tactical { ACCESS_FALSE };

class Jedi_base_robe: Anakin_base { ACCESS_FALSE };
class Jedi_base_master: Anakin_base { ACCESS_FALSE };
class Jedi_base_knight: Anakin_base { ACCESS_FALSE };
class Jedi_base_Consular: Anakin_base { ACCESS_FALSE };



class Jedi_base: Anakin_base { ACCESS_FALSE };
class Jedi_base_master_v2: Jedi_base { ACCESS_FALSE };
class Jedi_base_Dark: Anakin_base { ACCESS_FALSE };
class Jedi_base_White: Jedi_base { ACCESS_FALSE };

class Droid_B1: O_Soldier_F { ACCESS_FALSE };
class Droid_B1_GD: Droid_B1 { ACCESS_FALSE };
class Droid_B1_HG: Droid_B1 { ACCESS_FALSE };
class Droid_B1_Officer: Droid_B1 { ACCESS_FALSE };
class Droid_B1_Sniper:Droid_B1 { ACCESS_FALSE };
class Droid_B2: O_Soldier_F { ACCESS_FALSE };
class Droid_B2RT: Droid_B2 { ACCESS_FALSE };
class Droid_BX: O_Soldier_F { ACCESS_FALSE };
class Droid_TX20: Droid_Tactical { ACCESS_FALSE };
class Darth_Sirax: Asajj_Ventress { ACCESS_FALSE };

class Droid_B1_backpack: B_Kitbag_rgr { ACCESS_FALSE };
class Droid_B1_backpack_officer: Droid_B1_backpack { ACCESS_FALSE };