class cfgPatches
{
	class Lost_Hope_Music
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
		requiredAddons[] = {"A3_Sounds_F"};
	};
};

class CfgMusic
{
	tracks[] = {};
	class lost_hope_music_box
	{
		name	= "[Lost Hope] Music Box";
		sound[]	= { "\Lost_Hope_Music\sounds\music\lost_hope_music_box.ogg", db + 5, 1.0 }; // filename, volume, pitch
	};
	class lost_hope_music_horn
	{
		name	= "[Lost Hope] Distant Drone";
		sound[]	= { "\Lost_Hope_Music\sounds\music\lost_hope_music_horn.ogg", db + 3, 1.0 }; // filename, volume, pitch
	};
	class lost_hope_music_intro
	{
		name	= "[Lost Hope] Intro";
		sound[]	= { "\Lost_Hope_Music\sounds\music\lost_hope_music_intro.ogg", db + 5, 1.0 }; // filename, volume, pitch
	};
	class lost_hope_music_phonograph
	{
		name	= "[Lost Hope] Phonograph";
		sound[]	= { "\Lost_Hope_Music\sounds\music\lost_hope_music_phonograph.ogg", db + 5, 1.0 }; // filename, volume, pitch
	};
};