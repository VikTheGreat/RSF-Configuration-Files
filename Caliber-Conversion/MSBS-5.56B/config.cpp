class CfgPatches
{
	class s39_msbs_conversion_rsf
	{
		name = "SHI MSBS Radon Conversion";
		author = "SpartanD39";
		url = "https://steamcommunity.com/sharedfiles/filedetails/?id=1817044629";
		version="0.8.0";
		versionStr="0.8.0";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Enoch",
			"A3_characters_f_enoch",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F",
			"rhsusf_c_weapons",
			"rhsusf_weapon_sounds",
			"ace_ballistics",
			"ace_common",
			"ace_smallarms",
			"ace_realisticnames",
			"ace_compat_rhs_usf3",
			"cba_jr"
		};
		units[] = {};
		weapons[] = {"s39_30Rnd_556x45_msbs_mag","s39_30Rnd_556x45_msbs_mag_TracerG","s39_30Rnd_556x45_msbs_mag_TracerR","s39_30Rnd_556x45_msbs_mag_TracerY","s39_30Rnd_556x45_msbs_mag_m995_ap","s39_30Rnd_556x45_msbs_mag_mk262","s39_30Rnd_556x45_msbs_mag_mk318","s39_30Rnd_556x45_msbs_mag_ir_dim"};
	};
};

#include "ldfconfig.cpp"

class CfgMagazines
{

	class 30Rnd_65x39_caseless_msbs_mag;
	class s39_30Rnd_556x45_msbs_mag: 30Rnd_65x39_caseless_msbs_mag
	{
		ammo = "B_545x39_Ball_Green_F";
		author="Bohemia Interactive, modified by SpartanD39";
		displayName = "5.56 mm 30Rnd MSBS Mag";
		displayNameShort = "5.56mm";
		descriptionShort = "Caliber: 5.56x45mm NATO<br />Rounds: 30<br />Used in: MSBS";
		initSpeed=920;
		lastRoundsTracer=4;
	};

	class s39_30Rnd_556x45_msbs_mag_TracerG: s39_30Rnd_556x45_msbs_mag
	{
		ammo = "B_556x45_Ball_Tracer_Green";
		author="Bohemia Interactive, modified by SpartanD39";
		displayName = "5.56 mm 30Rnd MSBS Tracer (Green) Mag";
		displayNameShort = "5.56mm Tracer";
		descriptionShort = "Caliber: 5.56x45mm NATO green tracer<br />Rounds: 30<br />Used in: MSBS";
		tracersEvery = 1;
	};

	class s39_30Rnd_556x45_msbs_mag_TracerR: s39_30Rnd_556x45_msbs_mag
	{
		ammo = "B_556x45_Ball_Tracer_Red";
		author="Bohemia Interactive, modified by SpartanD39";
		displayName = "5.56 mm 30Rnd MSBS Tracer (Red) Mag";
		displayNameShort = "5.56mm Tracer";
		descriptionShort = "Caliber: 5.56x45mm NATO red tracer<br />Rounds: 30<br />Used in: MSBS";
		tracersEvery = 1;
	};

	class s39_30Rnd_556x45_msbs_mag_TracerY: s39_30Rnd_556x45_msbs_mag
	{
		ammo = "B_556x45_Ball_Tracer_Yellow";
		author="Bohemia Interactive, modified by SpartanD39";
		displayName = "5.56 mm 30Rnd MSBS Tracer (Yellow) Mag";
		displayNameShort = "5.56mm Tracer";
		descriptionShort = "Caliber: 5.56x45mm NATO yellow tracer<br />Rounds: 30<br />Used in: MSBS";
		tracersEvery = 1;
	};
	
	class s39_30Rnd_556x45_msbs_mag_m995_ap: s39_30Rnd_556x45_msbs_mag
	{
		ammo = "ACE_556x45_Ball_M995_AP";
		author="Bohemia Interactive, ACE-Team, hacked together by SpartanD39";
		displayName = "5.5 6mm 30Rnd MSBS M995 AP";
		displayNameShort = "5.56mm M995";
		descriptionShort = "Caliber: 5.56x45mm NATO M995 AP<br />Rounds: 30<br />Used in: MSBS";
		initSpeed = 875;
		lastRoundsTracer=4;
	};

	class s39_30Rnd_556x45_msbs_mag_mk262: s39_30Rnd_556x45_msbs_mag
	{
		ammo = "ACE_556x45_Ball_Mk262";
		author="Bohemia Interactive, ACE-Team, hacked together by SpartanD39";
		displayName = "5.56 mm 30Rnd MSBS Mk262";
		displayNameShort = "5.56mm Mk262";
		descriptionShort = "Caliber: 5.56x45mm NATO Mk262 high-accuracy rounds<br />Rounds: 30<br />Used in: MSBS";
		initSpeed = 832;
		lastRoundsTracer=4;
	};

	class s39_30Rnd_556x45_msbs_mag_mk318: s39_30Rnd_556x45_msbs_mag
	{
		ammo = "ACE_556x45_Ball_Mk318";
		author="Bohemia Interactive, ACE-Team, hacked together by SpartanD39";
		displayName = "5.56 mm 30Rnd MSBS Mk318 SOST";
		displayNameShort = "5.56mm Mk318";
		descriptionShort = "Caliber: 5.56x45mm NATO Mk318 SOST<br />Rounds: 30<br />Used in: MSBS";
		initSpeed = 923;
		lastRoundsTracer=4;
	};

	class s39_30Rnd_556x45_msbs_mag_ir_dim: s39_30Rnd_556x45_msbs_mag
	{
		ammo = "ACE_B_556x45_Ball_Tracer_Dim";
		author="Bohemia Interactive, ACE-Team, hacked together by SpartanD39";
		displayName = "5.56 mm 30Rnd MSBS IR-DIM";
		displayNameShort = "5.56mm IR-DIM";
		descriptionShort = "Caliber: 5.56x45mm NATO Tracer IR-DIM<br />Rounds: 30<br />Used in: MSBS";
		initSpeed = 869;
		tracersEvery = 1;
	};
};

class CfgMagazineWells
{
	class s39_556x45_msbs
	{
		//Custom magazines from above.
		s39_msbs_magazines[] =
		{
			"s39_30Rnd_556x45_msbs_mag",
			"s39_30Rnd_556x45_msbs_mag_TracerG",
			"s39_30Rnd_556x45_msbs_mag_TracerR",
			"s39_30Rnd_556x45_msbs_mag_TracerY",
			"s39_30Rnd_556x45_msbs_mag_m995_ap",
			"s39_30Rnd_556x45_msbs_mag_mk262",
			"s39_30Rnd_556x45_msbs_mag_mk318",
			"s39_30Rnd_556x45_msbs_mag_ir_dim"
		};
		//Normal Magazines.
		BI_Magazines[] =
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		
		RHS_Magazines[] =
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_M200_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_PMAG",
			"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",
			"rhs_mag_30Rnd_556x45_Mk318_PMAG",
			"rhs_mag_30Rnd_556x45_Mk262_PMAG",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",
			"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_PMAG_Tan",
			"rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red",
			"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",
			"rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange"
	   };

		ACE_Magazines[] =
		{
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag"
		};
	};

	class s39_762x51_msbs
	{
		s39_762x51_msbs_mags[] =
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag"
		};
	};

};

class Mode_FullAuto;
class Mode_Burst;
class Mode_SemiAuto;
class WeaponSlotsInfo;
class MuzzleSlot;
class BaseSoundModeType;

class cfgWeapons
{
	class Rifle;

	class Rifle_Base_F: Rifle {
	};

	//Base MSBS rifle definitions.
	class arifle_MSBS65_base_F: Rifle_Base_F
	{
		descriptionShort = "Assault Rifle<br />Caliber: 5.56x45 mm";
		magazines[] = {"s39_30Rnd_556x45_msbs_mag"};
		magazineWell[] = {"s39_556x45_msbs"};
		modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		mass = 75;
		ACE_barrelLength = 406;
		ACE_barrelTwist = 178;
		ACE_twistDirection = 1;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01",
			0.56234133,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02",
			0.56234133,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03",
			0.56234133,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04",
			0.56234133,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01",
			0.56234133,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02",
			0.56234133,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03",
			0.56234133,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.086999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};

		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SPAR01_Shot_SoundSet",
					"SPAR01_Tail_SoundSet",
					"SPAR01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SPAR01_silencerShot_SoundSet",
					"SPAR01_silencerTail_SoundSet",
					"SPAR01_silencerInteriorTail_SoundSet"
				};
			};
		};

		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"Standardsound",
				"SilencedSound"
			};
			class StandardSound: baseSoundModeType
			{
				soundSetShot[]=
				{
					"SPAR01_Shot_SoundSet",
					"SPAR01_Tail_SoundSet",
					"SPAR01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: baseSoundModeType
			{
				soundSetShot[]=
				{
					"SPAR01_silencerShot_SoundSet",
					"SPAR01_silencerTail_SoundSet",
					"SPAR01_silencerInteriorTail_SoundSet"
				};
			};
		};

		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SPAR01_Shot_SoundSet",
					"SPAR01_Tail_SoundSet",
					"SPAR01_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SPAR01_silencerShot_SoundSet",
					"SPAR01_silencerTail_SoundSet",
					"SPAR01_silencerInteriorTail_SoundSet"
				};
			};
		};
	
		class WeaponSlotsInfo: WeaponSlotsInfo //Inheriting from the primitive class we imported above.
		{
			class MuzzleSlot: MuzzleSlot //Suppressors and flashiders.
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE"; //This is needed to be able to display models.
				compatibleItems[] = //our actual list of items, all classnames from in-game.
				{
				"ace_muzzle_mzls_l",
				"ffaa_snds_gt_556",
				"rhsusf_acc_nt4_black",
				"rhsusf_acc_nt4_tan",
				"rhsusf_acc_rotex5_grey",
				"rhsusf_acc_rotex5_tan",
				"muzzle_snds_m_snd_f",
				"muzzle_snds_m_khk_f",
				"muzzle_snds_m",
				"rhsusf_acc_SF3P556",
				"rhsusf_acc_SFMB556",
				};
			};
		};
	};
	
	//More core definitions and inheritances, all gleaned from the config
	//viewer in the editor.
	class arifle_MSBS65_base_black_F: arifle_MSBS65_base_F {};
	class arifle_MSBS65_base_camo_F: arifle_MSBS65_base_F {};
	class arifle_MSBS65_base_sand_F: arifle_MSBS65_base_F {};

	class arifle_MSBS65_GL_base_F: arifle_MSBS65_base_F 
	{
	mass = 100;
	};
	class arifle_MSBS65_GL_base_black_F;
	class arifle_MSBS65_GL_base_camo_F;
	class arifle_MSBS65_GL_base_sand_F;

	class arifle_MSBS65_UBS_base_F: arifle_MSBS65_base_F 
	{
	mass = 115;
	};
	
	class arifle_MSBS65_UBS_base_black_F;
	class arifle_MSBS65_UBS_base_camo_F;
	class arifle_MSBS65_UBS_base_sand_F;
	
	class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F 
	{
		descriptionShort = "Designated Marksman Rifle<br />Caliber: 7.62x51mm NATO";
		magazines[] = {"20Rnd_762x51_Mag"};
		magazineWell[] = {"s39_762x51_msbs"};
		reloadTime = 0.45;
		modes[] = {"Single","single_medium_optics1","single_medium_optics2"};
		mass = 95;
		ACE_barrelLength = 406;
		ACE_barrelTwist = 178;
		ACE_twistDirection = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo //Inheriting from the primitive class we imported above.
		{
		
		class MuzzleSlot: MuzzleSlot //Suppressors and flashiders.
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE"; //This is needed to be able to display models.
			compatibleItems[] = //our actual list of items, all classnames from in-game.
			{
				"ace_muzzle_mzls_b",
				"muzzle_snds_b",
				"muzzle_snds_b_snd_f",
				"muzzle_snds_b_khk_f",
				"muzzle_snds_b_lush_f",
				"muzzle_snds_b_arid_f",
				"rhsusf_acc_aac_762sd_silencer",
				"rhsusf_acc_aac_762sdn6_silencer",	
				"rhsgref_sdn6_suppressor",
				"rhsusf_acc_aac_scarh_silencer",		
			};
		};
		};
		
    class Single: Mode_SemiAuto
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"Mk18_Shot_SoundSet",
				"Mk18_tail_SoundSet",
				"Mk18_InteriorTail_SoundSet"
			};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundsetshot[]=
			{
				"Mk18_silencerShot_SoundSet",
				"Mk18_silencerTail_SoundSet",
				"Mk18_silencerInteriorTail_SoundSet"
			};
		};
	};

		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.39810717,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.39810717,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.39810717,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.39810717,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.2818383,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.2818383,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.2818383,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.2818383,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.2818383,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.2818383,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.2818383,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.2818383,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
	};

	class arifle_MSBS65_Mark_base_black_F;
	class arifle_MSBS65_Mark_base_camo_F;
	class arifle_MSBS65_Mark_base_sand_F;

	//Base MSBS
	class arifle_MSBS65_F: arifle_MSBS65_base_F
	{
		displayName="MSBS-5.56B";
	};


	class arifle_MSBS65_black_F: arifle_MSBS65_base_black_F
	{
		displayName="MSBS-5.56B (Black)";
	};


	class arifle_MSBS65_camo_F: arifle_MSBS65_base_camo_F
	{
		displayName="MSBS-5.56B (Camo)";
	};


	class arifle_MSBS65_sand_F: arifle_MSBS65_base_sand_F
	{
		displayName="MSBS-5.56B (Sand)";
	};

	//MSBS GL
	class arifle_MSBS65_GL_F: arifle_MSBS65_GL_base_F
	{
		displayName="MSBS-5.56B UGL";
	};

	class arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_base_black_F
	{
		displayName="MSBS-5.56B UGL (Black)";
	};

	class arifle_MSBS65_GL_camo_F: arifle_MSBS65_GL_base_camo_F
	{
		displayName="MSBS-5.56B UGL (Camo)";
	};

	class arifle_MSBS65_GL_sand_F: arifle_MSBS65_GL_base_sand_F
	{
		displayName="MSBS-5.56B UGL (Sand)";
	};

	//MSBS Marksman
	class arifle_MSBS65_Mark_F: arifle_MSBS65_Mark_base_F
	{
		displayName="MSBS-7.62N";
	};

	class arifle_MSBS65_Mark_black_F: arifle_MSBS65_Mark_base_black_F
	{
		displayName="MSBS-7.62N (Black)";
	};

	class arifle_MSBS65_Mark_camo_F: arifle_MSBS65_Mark_base_camo_F
	{
		displayName="MSBS-7.62N (Camo)";
	};

	class arifle_MSBS65_Mark_sand_F: arifle_MSBS65_Mark_base_sand_F
	{
		displayName="MSBS-7.62N (Sand)";
	};

	//MSBS Uderbarrel Shotgun
	class arifle_MSBS65_UBS_F: arifle_MSBS65_UBS_base_F
	{
		displayName="MSBS-5.56B SIX12";
	};

	class arifle_MSBS65_UBS_black_F: arifle_MSBS65_UBS_base_black_F
	{
		displayName="MSBS-5.56B SIX12 (Black)";
	};

	class arifle_MSBS65_UBS_camo_F: arifle_MSBS65_UBS_base_camo_F
	{
		displayName="MSBS-5.56B SIX12 (Camo)";
	};

	class arifle_MSBS65_UBS_sand_F: arifle_MSBS65_UBS_base_sand_F
	{
		displayName="MSBS-5.56B SIX12 (Sand)";
	};
};