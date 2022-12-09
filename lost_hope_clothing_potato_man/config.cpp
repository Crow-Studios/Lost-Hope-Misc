class CfgPatches
{
	class Lost_Hope_Clothing_Potato_Man
	{ // ^^ Name of your CfgPatches. The game reads this when the addon loads, making the addon actually work ^^
		units[] = 
		{
			"Lost_Hope_Clothing_Potato_Man_Unit" // Name of your unit in cfgVehicles, allows the game to understand what this unit is

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
		name = "Zelo's Potato Man Outfit"; // Name that the game reads, only used for config script stuff
		author = "Lost Hope Dev Team"; // your name!
	};
};

/* - Opening of a comment 

   - Closing of a comment (down)
*/ 

/*

	DICTIONARY! READ UP!

	{ - Opening Bracket. Can be a (, [, {

	} - Closing Bracket. Can be a ), ], }

	"" - String. Usually is like this: "Hello, World!"

	// - Comment. Anything after the // will not be read by the config/script
	
	class my_class
	{
		author = "Zelo!"; // - config value
	} - Creates a new class with given name (my_class) and has the config value of author, which is equal to "Zelo!"

	class my_new_class : my_class
	{
		scope = 2; // - config value
		// author = "Zelo!"; - Inherited config value 
	} - Creates a new class with given name (my_new_class), and takes whatever config values my_class had (that's what the : my_class does). That is why author "Zelo!" is now in my_new_class
	
	^ This is called inheritance. https://community.bistudio.com/wiki/Class_Inheritance

*/

class CfgFactionClasses
{
	class Lost_Hope_Units_Hidden
	{// ^^ Name of your faction. This can be used in a cfgVehicles class
		displayName = "Hidden Units"; // What it's called ingame (in editor)
		author = "Lost Hope Dev Team";
		picture="\lost_hope\lost_hope_ca.paa"; // path to your picture, make sure it starts with a \My_Mod
		priority = 2; // priority that this takes in the editor
		side = 0; // OPFOR
	};
};

#define AUTHOR "Lost Hope Dev Team"

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
		type=801; // gonna be honest, not got a fucking clue
	};
	class Uniform_Base: ItemCore
	{
		scope=0; // is this visible in the editor? (0 means no, 1 means no, 2 means yes)
		allowedSlots[]={901}; // which slots this goes in (uniform, vest, backpack)
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Soldier_F";
			containerClass="Supply0";
			mass=0;
		};
	};
	// ^^ You can safely ignore all of that ^^
	class Lost_Hope_Clothing_Potato_Man : Uniform_Base
	{// ^^ Name of my new clothes, copy this and go down to cfgVehicles after you've done the rest of this class
		scope = 2; // Is this visible in the editor? Yes!
		author = AUTHOR;
		displayName = "Potato Man";
		model="A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		picture="\lost_hope\lost_hope_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass = "Lost_Hope_Clothing_Potato_Man_Unit"; // Name of your uniform class (done above), + _Unit at the end. You should now have your uniform class (done above) copied. Go down to cfgVehicles
			uniformModel = "-";
			containerClass = "Supply20";
			mass = 20;
			armor = 0.1;
		};
	};
};

class cfgVehicles
{
	class B_Soldier_F;
	class Lost_Hope_Clothing_Potato_Man_Unit: B_Soldier_F
	{// ^^ Name of my new clothes, + _Unit. You can paste the uniform class you had copied above and add _Unit to the end of it, just like is done here
		side=0; // which side should this go on? (0 = OPFOR, 1 = BLUFOR, 2 = GREENFOR, 3 = Civ)
		author= AUTHOR;
		_generalMacro="Lost_Hope_Clothing_Potato_Man_Unit"; // Literally just the name of this class
		faction = "Lost_Hope_Units_Hidden"; // faction name done above, can use the same faction class multiple times
		scope=2; // Is this visible? Yes!
		displayName="Potato Man";
		icon="iconManLeader";
		model = "lost_hope_clothing_potato_man\lost_hope_potato_man"; // My_Mod\My_Model
		uniformClass="potato_man"; // mate, you broke this. It still worked. I'm stumped
		camouflage=1; // errr, nike jumper is camoflauge? idk
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; // you practically never need to edit these
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; // you practically never need to edit these
		weapons[]=
		{
			"Throw",
			"Put",
			"Binocular"
		}; // you practically never need to edit these
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"Binocular"
		}; // you practically never need to edit these
		magazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		}; // you practically never need to edit these
		respawnMagazines[]=
		{
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		}; // you practically never need to edit these
		hiddenSelections[] = 
		{
			""
		}; // you practically never need to edit these, unless you want to retexture (we haven't covered that yet)
		hiddenSelectionsTextures[]=
		{
			""
		}; // you practically never need to edit these, unless you want to retexture (we haven't covered that yet)
	};
};