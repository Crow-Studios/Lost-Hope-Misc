class CfgPatches
{
	class Lost_Hope_Clothing_Army_Mask
	{ // ^^ Name of your CfgPatches. The game reads this when the addon loads, making the addon actually work ^^
		units[] = 
		{
			"" // Name of your unit in cfgVehicles, allows the game to understand what this unit is

		};
		weapons[] = 
		{
			"" // pointless in this case
		};
		magazines[] = 
		{
			"" // pointless in this case
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
		name = "Zelo's Army Mask"; // Name that the game reads, only used for config script stuff
		author = "Lost Hope Dev Team"; // your name!
	};
};

class cfgGlasses
{
    class None;
    class lost_hope_mask_army_Base: None
    {
        author = "Lost Hope Dev Team";
        scope = 1;
        weaponPoolAvailable = 0;
        picture="\lost_hope\lost_hope_ca.paa";
        mass = 4;
    };
    class lost_hope_mask_army: lost_hope_mask_army_Base
    {
        displayname = "Balaclava (Camoflauge)";
        model = "lost_hope_clothing_balaclava\lost_hope_mask_army";
        scope = 2;
    };
};