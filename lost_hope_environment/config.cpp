class cfgPatches
{
	class Lost_Hope_Environment
	{
		units[] = 
		{
			""
		};
		weapons[] = 
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Sounds_F", "A3_Data_F_Curator_Misc"};
	};
};

class CfgSounds 
{
	sounds[] = {};
	class lost_hope_environment_creak_1 {
		name = "lost_hope_environment_creak_1";
		sound[] = {"\Lost_Hope_Environment\sounds\environment\lost_hope_environment_creak_1.ogg", 1000, 1.0};
		titles[] = {0, ""};
	};
	class lost_hope_environment_creak_2 {
		name = "lost_hope_environment_creak_2";
		sound[] = {"\Lost_Hope_Environment\sounds\environment\lost_hope_environment_creak_2.ogg", 1000, 1.0};
		titles[] = {0, ""};
	};
	class lost_hope_environment_door_close {
		name = "lost_hope_environment_door_close";
		sound[] = {"\Lost_Hope_Environment\sounds\environment\lost_hope_environment_door_close.ogg", 1000, 1.0};
		titles[] = {0, ""};
	};
	class lost_hope_environment_door_open {
		name = "lost_hope_environment_door_open";
		sound[] = {"\Lost_Hope_Environment\sounds\environment\lost_hope_environment_door_open.ogg", 1000, 1.0};
		titles[] = {0, ""};
	};
	class lost_hope_environment_thunder {
		name = "lost_hope_environment_thunder";
		sound[] = {"\Lost_Hope_Environment\sounds\environment\lost_hope_environment_thunder.ogg", 500, 1.0};
		titles[] = {0, ""};
	};
};

class CfgAnimationSourceSounds
{
    class GenericDoorsSound
    {
        class OpenTheDoor
        {
            loop = 0;
            sound[] = {"sound0",1};
            sound0[] = {"lost_hope_environment\sounds\environment\lost_hope_environment_door_open.ogg",900,1,20};
            sound1[] = {"lost_hope_environment\sounds\environment\lost_hope_environment_creak_2.ogg",800,1,20};
            terminate = 0;
            trigger = "direction * (phase factor[0.01,0.02])";
        };
        class DoorMovement
        {
            loop = 0;
            sound[] = {"sound0",1};
            sound0[] = {"lost_hope_environment\sounds\environment\lost_hope_environment_creak_1.ogg",800,1,20};
            terminate = 1;
            trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
        };
        class SlamTheDoor
        {
            loop = 0;
            sound[] = {"sound0",1};
            sound0[] = {"lost_hope_environment\sounds\environment\lost_hope_environment_door_close.ogg",750,1,20};
            terminate = 0;
            trigger = "(1 - direction) * (phase factor[0.1,0.09])";
        };
    };
};

class cfgAmmo
{
	class ShellBase;
	class LightningBolt: ShellBase
	{
		model="\A3\Weapons_f\empty";
		hit=10000;
		indirectHit=10000;
		indirectHitRange=0.1;
		explosive=0.80000001;
		explosionEffects="ExploAmmoExplosion";
		craterEffects="ExploAmmoCrater";
		class CamShakeHit
		{
			power=125;
			duration=1;
			frequency=25;
		};
		multiSoundHit[]={"soundHit1",1};
		soundHit1[] = {"\Lost_Hope_Environment\sounds\environment\lost_hope_environment_thunder.ogg",1000,1,3000};
		soundHit[]=
		{
			"",
			1,
			1
		};
		simulation="shotMine";
		mineTrigger="RemoteTrigger";
		triggerWhenDestroyed=1;
	};
};