class CfgPatches
{
	class rsf_reskin_EBR
	{
		name="RSF Reskins Mk14 Mod 1 EBR";
		units[]=
		{
			"item_srifle_EBR_grey_F"
		};
		weapons[]=
		{
			"srifle_EBR_grey_F",
		};
		requiredVersion=;
		requiredAddons[]=
		{
		};
		author="NeroTheHero111";
		authors[]=
		{
			"NeroTheHero111"
		};
		url="";
		version="0.0.1";
		versionStr="0.0.1";
	};

};
	
class CfgVehicles
{
	class Weapon_Base_F;
	class item_srifle_EBR_grey_F: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		vehicleClass="WeaponsPrimary";
		author="NeroTheHero111";
		displayName="Mk14 Mod 1 EBR (Black)";
		class TransportItems
		{
			class _xx_srifle_EBR_grey_F
			{
				name="srifle_EBR_grey_F";
				count=1;
			};
		};
	};
};

class CfgWeapons
{
	class srifle_EBR_F;
	class srifle_EBR_grey_F: srifle_EBR_F
	{
		scope=2;
		author="NeroTheHero111";
		displayName="Mk14 Mod 1 EBR (Black)";
		picture="\Weapon-Reskins\MK-14-EBR\Black\UI\icon_M14_EBR_grey.paa";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
	
		hiddenSelectionsTextures[]=
		{
			"\Weapon-Reskins\MK-14-EBR\Black\Data\M14_EBR01_grey_2_CO.paa",
			"\Weapon-Reskins\MK-14-EBR\Black\Data\M14_EBR02_CO_grey_2.paa",
		};
		baseWeapon="srifle_EBR_grey_F";
	};
};