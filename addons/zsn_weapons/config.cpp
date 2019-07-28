////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Tue Jul 19 15:42:46 2016 : Created on Tue Jul 19 15:42:46 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class ZSN_Loadouts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Mark","A3_Characters_F_Exp","A3_Characters_F_Jets","A3_Characters_F_Patrol","A3_Characters_F_Orange","A3_Characters_F_Tank_Uniforms","A3_Characters_F_Tank","A3_Armor_F_Tank_AFV_Wheeled_01","A3_Armor_F_Tank_MBT_04","A3_Characters_F_Enoch"};
	};
};
class cfgWeapons
{
	class LMG_Mk200_black_F;
	class ZSN_LMG_Mk200_LP_BI_F: LMG_Mk200_black_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_SPAR_01_snd_F;
	class ZSN_arifle_SPAR_01_snd_Hamr_pointer_F: arifle_SPAR_01_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr_khk_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F: arifle_SPAR_01_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_khk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F: arifle_SPAR_01_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_khk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_SPAR_01_GL_snd_F;
	class ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F: arifle_SPAR_01_GL_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_m_khk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_SPAR_03_snd_F;
	class ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F: arifle_SPAR_03_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_SOS_khk_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_mtp";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_b_khk_F";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_SPAR_01_khk_F;
	class ZSN_arifle_SPAR_01_khk_pointer_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_khk_ACO_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_khk_ACO_pointer_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_khk_Holo_pointer_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_khk_Hamr_pointer_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_SPAR_01_GL_khk_F;
	class ZSN_arifle_SPAR_01_GL_khk_ACO_F: arifle_SPAR_01_GL_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_aco";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F: arifle_SPAR_01_GL_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_SPAR_02_khk_F;
	class ZSN_arifle_SPAR_02_khk_pointer_F: arifle_SPAR_02_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_khk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_SPAR_03_khk_F;
	class ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F: arifle_SPAR_03_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_khk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_SPAR_01_blk_F;
	class ZSN_arifle_SPAR_01_blk_pointer_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_ACO_pointer_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_ACO_FL_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_RCO_FL_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_Hamr_pointer_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_Holo_pointer_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_blk_gend_F: arifle_SPAR_01_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_flashlight";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_SPAR_01_GL_blk_F;
	class ZSN_arifle_SPAR_01_GL_blk_ACO_F: arifle_SPAR_01_GL_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_aco";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_arifle_SPAR_01_GL_blk_Hamr_pointer_F: arifle_SPAR_01_GL_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_SPAR_02_blk_F;
	class ZSN_arifle_SPAR_02_blk_pointer_F: arifle_SPAR_02_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_SPAR_03_blk_F;
	class ZSN_arifle_SPAR_03_blk_Hamr_LP_BI_F: arifle_SPAR_03_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MX_F;
	class ZSN_arifle_MX_ERCO_pointer_F: arifle_MX_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_snd_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_GL_F;
	class ZSN_arifle_MX_GL_ERCO_pointer_F: arifle_MX_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_snd_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_SW_F;
	class ZSN_arifle_MX_SW_ERCO_pointer_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_snd_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_snd";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MXM_F;
	class ZSN_arifle_MXM_ERCO_pointer_F: arifle_MXM_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_snd_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_snd";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MXC_Black_F;
	class ZSN_arifle_MXC_Black_Holo_pointer_F: arifle_MXC_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_Black_F;
	class ZSN_arifle_MX_Black_pointer_F: arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_MX_Black_Holo_pointer_F: arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_MX_Black_ERCO_pointer_F: arifle_MX_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_GL_Black_F;
	class ZSN_arifle_MX_GL_Black_Holo_pointer_F: arifle_MX_GL_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_MX_GL_Black_ERCO_pointer_F: arifle_MX_GL_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_SW_Black_F;
	class ZSN_arifle_MX_SW_Black_pointer_F: arifle_MX_SW_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MXM_Black_F;
	class ZSN_arifle_MXM_Black_SOS_pointer_F: arifle_MXM_Black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_SOS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_DMR_02_F;
	class ZSN_srifle_DMR_02_AMS_LP_BI_F: srifle_DMR_02_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_AMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MX_khk_F;
	class ZSN_arifle_MX_khk_ERCO_pointer_F: arifle_MX_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MXC_khk_F;
	class ZSN_arifle_MXC_khk_ACO_pointer_F: arifle_MXC_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_GL_khk_F;
	class ZSN_arifle_MX_GL_khk_ERCO_pointer_F: arifle_MX_GL_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MX_SW_khk_F;
	class ZSN_arifle_MX_SW_khk_ERCO_pointer_F: arifle_MX_SW_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_khk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_khk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MSBS65_sand_F;
	class ZSN_arifle_MSBS65_sand_ico_F: arifle_MSBS65_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_sand_f";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_sand_ico_pointer_F : arifle_MSBS65_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_sand_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class arifle_MSBS65_Mark_sand_F;
	class ZSN_arifle_MSBS65_Mark_sand_MRCO_LP_BI_F: arifle_MSBS65_Mark_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_mrco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_03_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class arifle_MSBS65_GL_sand_F;
	class ZSN_arifle_MSBS65_GL_sand_ico_pointer_F: arifle_MSBS65_GL_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_sand_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_GL_sand_ico_pointer_snds_F: arifle_MSBS65_GL_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_sand_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class arifle_MSBS65_UBS_sand_f;
	class ZSN_arifle_MSBS65_UBS_sand_ico_pointer_f: arifle_MSBS65_UBS_sand_f
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_black_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_UBS_sand_snds_ico_pointer_f: arifle_MSBS65_UBS_sand_f
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_sand_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_sand_ico_pointer_snds_F: arifle_MSBS65_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ico_01_sand_f";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_sand_MRCO_pointer_snds_F: arifle_MSBS65_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRCO";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class ZSN_arifle_MSBS65_Mark_sand_DMS_LP_BI_snds_F: arifle_MSBS65_Mark_sand_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_DMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_03_F_blk";
				slot = "UnderBarrelSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_65_ti_blk_f";
				slot = "MuzzleSlot";
			};
		};
	};
	class srifle_DMR_03_F;
	class ZSN_srifle_DMR_03_SOS_LP_BI_F: srifle_DMR_03_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_sos";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_DMR_04_Tan_F;
	class srifle_DMR_04_DMS_weathered_Kir_F_F: srifle_DMR_04_Tan_F {};
	class hgun_Pistol_heavy_01_green_F;
	class ZSN_hgun_Pistol_heavy_01_green_MRD_F: hgun_Pistol_heavy_01_green_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRD_black";
				slot = "CowsSlot";
			};
		};
	};
	class hgun_Pistol_heavy_01_snds_F;
	class ZSN_hgun_Pistol_heavy_01_MRD_snds_F: hgun_Pistol_heavy_01_snds_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_MRD";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_acp";
				slot = "MuzzleSlot";
			};
		};
	};
	class MMG_01_tan_F;
	class ZSN_MMG_01_tan_ARCO_LP_F: MMG_01_tan_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Arco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_tan";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class MMG_01_hex_ARCO_LP_F;
	class ZSN_MMG_01_hex_ARCO_LP_F: MMG_01_hex_ARCO_LP_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Arco_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_hex";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class MMG_02_black_F;
	class ZSN_MMG_02_black_ERCO_LP_F: MMG_02_black_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_ERCO_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class LMG_03_F;
	class ZSN_LMG_03_pointer_F: LMG_03_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsOptic
			{
				item = "optic_ACO_grn";
				slot = "CowsSlot";
			};
		};
	};
	class srifle_EBR_F;
	class ZSN_srifle_EBR_AMS_LP_F: srifle_EBR_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_AMS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_01_F_blk";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_DMR_05_tan_f;
	class ZSN_srifle_DMR_05_tan_KHS_LP_F: srifle_DMR_05_tan_f
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_KHS_tan";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_tan";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class srifle_DMR_05_hex_F;
	class ZSN_srifle_DMR_05_hex_LP_F: srifle_DMR_05_hex_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_KHS_blk";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_02_F_hex";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class hgun_ACPC2_F;
	class ZSN_hgun_ACPC2_flight_F: hgun_ACPC2_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				item = "acc_flashlight_pistol";
				slot = "PointerSlot";
			};
		};
	};
	class SMG_03C_TR_hex;
	class ZSN_SMG_03C_TR_hex: SMG_03C_TR_hex
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_blk_F";
				slot = "CowsSlot";
			};
		};
	};
	class SMG_03C_TR_camo;
	class ZSN_SMG_03C_TR_camo: SMG_03C_TR_camo
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_aco_smg";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_camo_PF: SMG_03C_TR_camo
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_mrco";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_570";
			};
		};
	};
	class SMG_03C_TR_khaki;
	class ZSN_SMG_03C_TR_khaki: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_khk_F";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_khaki_ACO: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco_smg";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_khaki_Holo_pointer_F: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_khaki_ACO_LP_snds_F: SMG_03C_TR_khaki
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "muzzle_snds_570";
				slot = "MuzzleSlot";
			};
		};
	};
	class SMG_03C_TR_black;
	class ZSN_SMG_03C_TR_black_ACO: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Aco_smg";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_black: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_blk_F";
				slot = "CowsSlot";
			};
		};
	};
	class ZSN_SMG_03C_TR_black_Holo_pointer_F: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class ZSN_SMG_03C_TR_black_Holo_FL_F: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_Holosight_smg_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight";
			};
		};
	};
	class B_Patrol_Soldier_Operator_weapon_F: SMG_03C_TR_black
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_570";
			};
		};
	};
	class B_Patrol_Soldier_Pistol_F: hgun_ACPC2_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_flashlight_pistol";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_acp";
			};
		};
	};
	class B_Patrol_Soldier_Leader_weapon_F: arifle_SPAR_01_GL_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
	class srifle_DMR_03_multicam_F;
	class B_Patrol_Soldier_Marksman_weapon_F: srifle_DMR_03_multicam_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_mtp";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_B";
			};
		};
	};
	class B_Patrol_Soldier_Medic_weapon_F: arifle_SPAR_01_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
	class arifle_SPAR_02_snd_F;
	class B_Patrol_Soldier_Autorifleman_weapon_F: arifle_SPAR_02_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_khk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
	class B_Patrol_Soldier_MachineGunner_weapon_F: LMG_03_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_H_MG_blk_F";
			};
		};
	};
	class MMG_02_camo_F;
	class B_Patrol_Soldier_HeavyGunner_weapon_F: MMG_02_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Holosight";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_mtp";
			};
		};
	};
	class B_Patrol_Soldier_Carrier_weapon_F: arifle_SPAR_01_snd_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_Arco";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_khk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m_khk_F";
			};
		};
	};
	class B_Patrol_Soldier_Specialist_weapon_F: arifle_SPAR_01_khk_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_khk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_m";
			};
		};
	};
	class arifle_MSBS65_GL_camo_F;
	class ZSN_arifle_MSBS65_GL_camo_F: arifle_MSBS65_GL_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class arifle_MSBS65_Mark_camo_F;
	class ZSN_arifle_MSBS65_Mark_camo_F: arifle_MSBS65_Mark_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_mrco";
			};
		};
	};
	class arifle_MSBS65_UBS_camo_F;
	class ZSN_arifle_MSBS65_UBS_camo_F: arifle_MSBS65_UBS_camo_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class arifle_AK12_F;
	class ZSN_arifle_AK12_ACO_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12_ARCO_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco_blk_f";
			};
		};
	};
	class ZSN_arifle_AK12_pointer_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class ZSN_arifle_AK12_ACO_pointer_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12_ARCO_pointer_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco_blk_f";
			};
		};
	};
	class ZSN_arifle_AK12_ACO_pointer_snds_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
		};
	};
	class ZSN_arifle_AK12_ARCO_pointer_snds_F: arifle_AK12_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco_blk_f";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
		};
	};
	class arifle_AK12U_F;
	class ZSN_arifle_AK12U_ACO_F: arifle_AK12U_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12U_ACO_pointer_F: arifle_AK12U_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12U_ACO_pointer_snds_F: arifle_AK12U_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
		};
	};
	class arifle_RPK12_F;
	class ZSN_arifle_RPK12_pointer_F: arifle_RPK12_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class arifle_AK12_GL_F;
	class ZSN_arifle_AK12_GL_ACO_F: arifle_AK12_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
		};
	};
	class ZSN_arifle_AK12_GL_ARCO_pointer_F: arifle_AK12_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_arco_blk_f";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
		};
	};
	class ZSN_arifle_AK12_GL_ACO_pointer_snds_F: arifle_AK12_GL_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_aco_grn";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_b";
			};
		};
	};
	class arifle_ARX_blk_F;
	class ZSN_arifle_ARX_blk_MRCO_F: arifle_ARX_blk_F
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				item = "optic_mrco";
				slot = "CowsSlot";
			};
		};
	};
};
class CfgVehicles
{
	class ReammoBox_F;
	class B_supplyCrate_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;	
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 6;
			};
			delete _xx_30Rnd_45ACP_Mag_SMG_01;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 6;
			};
			delete _xx_3Rnd_HE_Grenade_shell;
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;	
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
			class arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_F;
			class arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 1;
			};
		};
	};
	class O_supplyCrate_F : B_supplyCrate_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 24;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_ak12_F
			{
				weapon = "arifle_ak12_F";
				count = 2;
			};
			delete _xx_LMG_Zafir_F;
			class _xx_arifle_rpk12_F
			{
				weapon = "arifle_rpk12_F";
				count = 1;
			};
		};
	};
	class I_supplyCrate_F : B_supplyCrate_F
	{
		class TransportMagazines
		{
			delete _xx_9Rnd_45ACP_Mag;
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 6;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine = "30Rnd_45ACP_Mag_SMG_01";
				count = 6;
			};
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 24;
			};
			delete _xx_20Rnd_762x51_Mag;
		};
		class TransportWeapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_sand_F
			{
				weapon = "arifle_MSBS65_sand_F";
				count = 2;
			};
		};
	};
	class FIA_Box_Base_F;
	class Box_FIA_Wps_F : FIA_Box_Base_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 8;	
			};
		};
		class TransportWeapons
		{
			delete _xx_LMG_Mk200_F;
			class _xx_LMG_Zafir_F
			{
				weapon = "LMG_Zafir_F";
				count = 2;
			};
		};
	};
	class Box_FIA_Ammo_F : FIA_Box_Base_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 8;	
			};
		};
	};
	class NATO_Box_Base : ReammoBox_F{};
	class Box_NATO_WpsSpecial_F : NATO_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_arifle_MXM_F;
			class _xx_arifle_SPAR_03_blk_F
			{
				weapon = "arifle_SPAR_03_blk_F";
				count = 1;
			};
			delete _xx_srifle_DMR_03_F;
			class _xx_srifle_EBR_F
			{
				weapon = "srifle_EBR_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 12;	
			};
		};
	};
	class Box_T_NATO_WpsSpecial_F : Box_NATO_WpsSpecial_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_MXM_khk_F;
			class _xx_arifle_MXM_Black_F
			{
				weapon = "arifle_MXM_Black_F";
				count = 1;
			};
			delete _xx_srifle_LRR_tna_F;
			class _xx_srifle_LRR_F
			{
				weapon = "srifle_LRR_F";
				count = 1;
			};
			delete _xx_srifle_DMR_03_woodland_F;
			class _xx_srifle_EBR_F
			{
				weapon = "srifle_EBR_F";
				count = 1;
			};
			delete _xx_srifle_DMR_02_camo_F;
			class _xx_srifle_DMR_02_F
			{
				weapon = "srifle_DMR_02_F";
				count = 1;
			};
			class _xx_arifle_SPAR_03_blk_F
			{
				weapon = "arifle_SPAR_03_blk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_Mag
			{
				magazine = "20Rnd_762x51_Mag";
				count = 12;	
			};
		};
	};
	class Box_NATO_Ammo_F : NATO_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;	
			};
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 6;	
			};
			delete _xx_30Rnd_45ACP_Mag_SMG_01;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 6;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;	
			};
			delete _xx_3Rnd_HE_Grenade_shell;
		};
	};
	class EAST_Box_Base : ReammoBox_F{};
	class Box_East_Wps_F : EAST_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 2;
			};
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 8;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 4;
			};
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
			delete _xx_arifle_Katiba_GL_F;
			class _xx_arifle_AK12_GL_F
			{
				weapon = "arifle_AK12_GL_F";
				count = 2;
			};
			delete _xx_LMG_Zafir_F;
			class _xx_arifle_RPK12_F
			{
				weapon = "arifle_RPK12_F";
				count = 2;
			};
		};
	};
	class Box_East_WpsSpecial_F : EAST_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_srifle_DMR_04_F;
			class _xx_srifle_DMR_04_Tan_F
			{
				weapon = "srifle_DMR_04_Tan_F";
				count = 1;
			};
			delete _xx_srifle_DMR_05_hex_F;
			class _xx_srifle_DMR_05_tan_f
			{
				weapon = "srifle_DMR_05_tan_f";
				count = 1;
			};
			delete _xx_MMG_01_hex_F;
			class _xx_MMG_01_tan_F
			{
				weapon = "MMG_01_tan_F";
				count = 1;
			};
		};
	};
	class Box_T_East_WpsSpecial_F : Box_East_WpsSpecial_F
	{
		class TransportWeapons
		{
			delete _xx_srifle_DMR_05_hex_F;
			class _xx_srifle_DMR_05_blk_F
			{
				weapon = "srifle_DMR_05_blk_F";
				count = 1;
			};
		};
	};
	class Box_East_Ammo_F : EAST_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 24;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class IND_Box_Base : ReammoBox_F{};
	class Box_IND_WpsSpecial_F : IND_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_srifle_EBR_F;
			class _xx_arifle_ARX_blk_F
			{
				weapon = "arifle_ARX_blk_F";
				count = 4;
			};
		};
		class TransportMagazines
		{
			delete _xx_5Rnd_127x108_Mag;
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 16;
			};
			class _xx_10Rnd_50BW_Mag_F
			{
				magazine = "10Rnd_50BW_Mag_F";
				count = 8;
			};
		};
	};
	class Box_EAF_WpsSpecial_F : Box_IND_WpsSpecial_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 4;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag_Tracer;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
		class TransportItems
		{
			delete _xx_optic_ico_01_f;
		};
	};
	class Box_IND_Wps_F : IND_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_9Rnd_45ACP_Mag;
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 1;	
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine = "30Rnd_45ACP_Mag_SMG_01";
				count = 1;
			};
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 8;
			};
		};
		class TransportWeapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_MSBS65_sand_F
			{
				weapon = "arifle_MSBS65_sand_F";
				count = 4;
			};
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_Mark_sand_F
			{
				weapon = "arifle_MSBS65_Mark_sand_F";
				count = 2;
			};
			delete _xx_arifle_Mk20_GL_F;
			class _xx_arifle_MSBS65_GL_sand_F
			{
				weapon = "arifle_MSBS65_GL_sand_F";
				count = 2;
			};
			delete _xx_hgun_ACPC2_F;
			class _xx_hgun_Pistol_heavy_01_F
			{
				weapon = "hgun_Pistol_heavy_01_F";
				count = 1;
			};
			delete _xx_hgun_PDW2000_F;
			class _xx_SMG_01_F
			{
				weapon = "SMG_01_F";
				count = 1;
			};
		};
	};
	class Box_IND_Ammo_F : IND_Box_Base
	{
		class TransportMagazines
		{
			delete _xx_9Rnd_45ACP_Mag;
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 6;
			};
			delete _xx_30Rnd_9x21_Mag;
			class _xx_30Rnd_45ACP_Mag_SMG_01
			{
				magazine = "30Rnd_45ACP_Mag_SMG_01";
				count = 6;
			};
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 24;
			};
			delete _xx_20Rnd_762x51_Mag;
		};
	};
	class Box_Syndicate_Ammo_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_556x45_Box_F;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 4;	
			};
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 6;	
			};
		};
	};
	class Box_Syndicate_Wps_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_556x45_Box_F;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 2;	
			};
			delete _xx_30Rnd_762x39_AK12_Mag_F;
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 6;	
			};
			class _xx_30Rnd_9x21_Mag
			{
				magazine = "30Rnd_9x21_Mag";
				count = 2;	
			};
		};
		class TransportWeapons
		{
			delete _xx_LMG_03_F;
			class _xx_LMG_Mk200_Black_F
			{
				weapon = "LMG_Mk200_Black_F";
				count = 2;
			};
			delete _xx_arifle_AK12_GL_F;
			class _xx_arifle_Katiba_GL_F
			{
				weapon = "arifle_Katiba_GL_F";
				count = 2;
			};
			delete _xx_arifle_AK12_F;
			class _xx_arifle_Katiba_F
			{
				weapon = "arifle_Katiba_F";
				count = 2;
			};
			class _xx_arifle_Katiba_C_F
			{
				weapon = "arifle_Katiba_C_F";
				count = 2;
			};
			class _xx_hgun_PDW2000_F
			{
				weapon = "hgun_PDW2000_F";
				count = 2;
			};
		};
	};
	class Box_NATO_Wps_F : NATO_Box_Base
	{
		class TransportWeapons
		{
			delete _xx_arifle_MX_F;
			class arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
				count = 6;
			};
			delete _xx_arifle_MX_GL_F;
			class arifle_SPAR_01_GL_blk_F
			{
				weapon = "arifle_SPAR_01_GL_blk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_F;
			class arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
				count = 2;
			};
			delete _xx_SMG_01_F;
			class SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 1;
			};
			delete _xx_hgun_Pistol_heavy_01_F;
			class hgun_ACPC2_F
			{
				weapon = "hgun_ACPC2_F";
				count = 1;
			};
			delete _xx_arifle_MXC_F;
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;	
			};
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 1;	
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 2;
			};
			delete _xx_30Rnd_45ACP_Mag_SMG_01;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class Box_T_NATO_Wps_F : Box_NATO_Wps_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_MX_khk_F;
			class arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
				count = 6;
			};
			delete _xx_arifle_MX_GL_khk_F;
			class arifle_SPAR_01_GL_blk_F
			{
				weapon = "arifle_SPAR_01_GL_blk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_khk_F;
			class arifle_SPAR_02_blk_F
			{
				weapon = "arifle_SPAR_02_blk_F";
				count = 2;
			};
			delete _xx_hgun_Pistol_heavy_01_F;
			class hgun_ACPC2_F
			{
				weapon = "hgun_ACPC2_F";
				count = 1;
			};
			delete _xx_SMG_01_F;
			class SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 1;
			};
			delete _xx_arifle_MXC_khk_F;
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;	
			};
			delete _xx_11Rnd_45ACP_Mag;
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 1;	
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 2;
			};
			delete _xx_30Rnd_45ACP_Mag_SMG_01;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 1;
			};
		};
	};
	class IG_supplyCrate_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 6;	
			};
		};
		class TransportWeapons
		{
			delete _xx_LMG_Mk200_F;
			class _xx_LMG_Zafir_F
			{
				weapon = "LMG_Zafir_F";
				count = 2;
			};
		};
		class TransportItems
		{
			delete _xx_bipod_03_F_oli;
		};
	};
	class C_T_supplyCrate_F : ReammoBox_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine = "30Rnd_65x39_caseless_mag";
				count = 32;	
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 6;
			};
			delete _xx_20Rnd_762x51_Mag;
		};
		class TransportWeapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MX_Black_F
			{
				weapon = "arifle_MX_Black_F";
				count = 2;
			};
			delete _xx_arifle_SPAR_01_GL_blk_F;
			class _xx_arifle_MX_GL_Black_F
			{
				weapon = "arifle_MX_GL_Black_F";
				count = 1;
			};
			delete _xx_arifle_SPAR_02_blk_F;
			class _xx_arifle_MX_SW_Black_F
			{
				weapon = "arifle_MX_SW_Black_F";
				count = 1;
			};
			delete _xx_arifle_SPAR_03_blk_F;
			class _xx_arifle_MXM_Black_F
			{
				weapon = "arifle_MXM_Black_F";
				count = 1;
			};
		};
	};
	class Box_East_Support_F : East_Box_Base
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_acp;
		};
	};
	class Box_Ind_Support_F : IND_Box_Base
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_L;
			delete _xx_muzzle_snds_h;
			class _xx_muzzle_snds_H_MG_blk_F
			{
				name = "muzzle_snds_H_MG_blk_F";
				count = 2;
			};
		};
	};
	class Box_EAF_Support_F : Box_IND_Support_F
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_H;
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 8;
			};
		};
	};
	class Box_NATO_Support_F : NATO_Box_Base
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_acp;
			delete _xx_muzzle_snds_H;
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 5;
			};
			class muzzle_snds_570
			{
				name = "muzzle_snds_570";
				count = 5;
			};
		};
	};
	class Box_NATO_Equip_F : ReammoBox_F{};
	class Box_GEN_Equip_F : Box_NATO_Equip_F
	{
		class TransportMagazines
		{
			class _xx_30Rnd_9x21_Mag_SMG_02
			{
				magazine = "30Rnd_9x21_Mag_SMG_02";
				count = 16;	
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;	
			};
		};
		class TransportWeapons
		{
			delete _xx_hgun_P07_F;
			class _xx_hgun_Pistol_heavy_02_F
			{
				weapon = "hgun_Pistol_heavy_02_F";
				count = 6;
			};
			class _xx_SMG_05_F
			{
				weapon = "SMG_05_F";
				count = 4;
			};
			class _xx_arifle_SPAR_01_blk_F
			{
				weapon = "arifle_SPAR_01_blk_F";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_optic_Holosight_blk_F
			{
				name = "optic_Holosight_blk_F";
				count = 2;
			};
			delete _xx_muzzle_snds_L;
			class _xx_muzzle_snds_m
			{
				name = "muzzle_snds_m";
				count = 2;
			};
		};
	};
	class B_TacticalPack_mcamo;
	class B_AssaultPack_mcamo_AAR : B_TacticalPack_mcamo
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 6;
			};
			delete _xx_100Rnd_65x39_caseless_mag_Tracer;
			class _xx_150Rnd_556x45_Drum_Mag_Tracer_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_Tracer_F";
				count = 4;
			};
		};
	};
	class B_Carryall_ghex_F;
	class B_Carryall_ghex_OTAAR_AAR_F : B_Carryall_ghex_F
	{
		class TransportItems
		{
			class _xx_muzzle_snds_58_blk_F
			{
				name = "muzzle_snds_58_blk_F";
				count = 1;
			};
		};
	};
	class B_Carryall_mcamo;
	class B_AssaultPack_mcamo_Ammo : B_Carryall_mcamo
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 1;
			};
			delete _xx_3Rnd_HE_Grenade_shell;
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
		};
	};
	class B_Carryall_wdl_F;
	class B_Carryall_wdl_BWAmmo_F: B_Carryall_wdl_F
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_black_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			delete _xx_100Rnd_65x39_caseless_black_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 1;
			};
			delete _xx_3Rnd_HE_Grenade_shell;
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 3;
			};
		};
	};
	class B_Kitbag_rgr;
	class B_Kitbag_rgr_BWAAR: B_Kitbag_rgr
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_black_mag_Tracer;
			class _xx_150Rnd_556x45_Drum_Mag_Tracer_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_Tracer_F";
				count = 2;
			};
			delete _xx_100Rnd_65x39_caseless_black_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 2;
			};
		};
		class TransportItems
		{
			delete _xx_muzzle_snds_H;
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 1;
			};
		};
	};
	class B_Carryall_oli;
	class zsn_B_AssaultPack_cbr_Ammo : B_Carryall_oli
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_black_mag
			{
				magazine = "30Rnd_65x39_caseless_black_mag";
				count = 7;
			};
			class _xx_100Rnd_65x39_caseless_black_mag
			{
				magazine = "100Rnd_65x39_caseless_black_mag";
				count = 1;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 1;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 2;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_10Rnd_338_Mag
			{
				magazine = "10Rnd_338_Mag";
				count = 2;
			};
		};
	};
	class zsn_B_Kitbag_rgr_AAR : B_Kitbag_rgr
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_130Rnd_338_Mag
			{
				magazine = "130Rnd_338_Mag";
				count = 2;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine = "100Rnd_65x39_caseless_mag";
				count = 2;
			};
			class _xx_100Rnd_65x39_caseless_mag_Tracer
			{
				magazine = "100Rnd_65x39_caseless_mag_Tracer";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_338_sand
			{
				name = "muzzle_snds_338_sand";
				count = 1;
			};
			class _xx_muzzle_snds_H_SW
			{
				name = "muzzle_snds_H_SW";
				count = 1;
			};
			class _xx_bipod_01_F_blk
			{
				name = "bipod_01_F_blk";
				count = 1;
			};
			class _xx_optic_tws_mg
			{
				name = "optic_tws_mg";
				count = 1;
			};
		};
	};
	class B_AssaultPack_blk;
	class ZSN_B_AssaultPack_blk_LAT : B_AssaultPack_blk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class ZSN_B_FieldPack_blk_Medic : B_AssaultPack_blk
	{
		scope = 1;
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 1;
			};
			class _xx_SmokeShellPurple
			{
				magazine = "SmokeShellPurple";
				count = 1;
			};
			class _xx_SmokeShellYellow
			{
				magazine = "SmokeShellYellow";
				count = 1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
	};
	class ZSN_B_FieldPack_blk_Repair : B_AssaultPack_blk
	{
		scope = 1;
		class TransportItems
		{
			class _xx_Toolkit
			{
				name = "Medikit";
				count = 1;
			};
		};
	};
	class B_Kitbag_rgr_AAR : B_Kitbag_rgr
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 2;
			};
			delete _xx_100Rnd_65x39_caseless_mag_Tracer;
			class _xx_150Rnd_556x45_Drum_Mag_Tracer_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_Tracer_F";
				count = 2;
			};
		};
		class TransportItems
		{
			delete _xx_muzzle_snds_H;
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 1;
			};
			delete _xx_bipod_01_F_snd;
			class _xx_bipod_01_F_blk
			{
				name = "bipod_01_F_blk";
				count = 1;
			};
		};
	};
	class B_Carryall_ocamo;
	class B_Carryall_ocamo_AAR : B_Carryall_ocamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 1;
			};
			delete _xx_150Rnd_762x54_Box_Tracer;
			class _xx_75rnd_762x39_AK12_Mag_Tracer_F
			{
				magazine = "75rnd_762x39_AK12_Mag_Tracer_F";
				count = 1;
			};
		};
		class TransportItems
		{
			delete _xx_bipod_02_F_hex;
			class _xx_bipod_02_F_blk
			{
				name = "bipod_02_F_blk";
				count = 1;
			};
			class _xx_muzzle_snds_B
			{
				name = "muzzle_snds_B";
				count = 1;
			};
		};
	};
	class B_FieldPack_cbr_Ammo : B_Carryall_ocamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 1;
			};
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 6;
			};
		};
	};
	class B_Carryall_oucamo;
	class B_Carryall_oucamo_AAR : B_Carryall_oucamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 1;
			};
			delete _xx_150Rnd_762x54_Box_Tracer;
			class _xx_200Rnd_65x39_cased_Box_Tracer
			{
				magazine = "200Rnd_65x39_cased_Box_Tracer";
				count = 1;
			};
		};
		class TransportItems
		{
			delete _xx_bipod_02_F_hex;
			class _xx_bipod_02_F_blk
			{
				name = "bipod_02_F_blk";
				count = 1;
			};
			class _xx_muzzle_snds_H_MG
			{
				name = "muzzle_snds_H_MG";
				count = 1;
			};
		};
	};
	class B_FieldPack_oucamo_Ammo : B_Carryall_oucamo
	{
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine = "200Rnd_65x39_cased_Box";
				count = 1;
			};
		};
	};
	class B_Carryall_oli_BTAmmo_F : B_Carryall_oli
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 1;
			};
			delete _xx_3Rnd_HE_Grenade_shell;
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
		};
	};
	class I_Fieldpack_oli_Ammo : B_Carryall_oli
	{
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 8;
			};
			delete _xx_20Rnd_762x51_Mag;
		};
	};
	class B_AssaultPack_dgtl;
	class ZSN_I_AssaultPack_dgtl_ReconMedic : B_AssaultPack_dgtl
	{
		author = "ZluskeN";
		scope = 1;
		class TransportItems 
		{
			class _xx_FirstAidKit 
			{
				count = 5;
				name = "FirstAidKit";
			};
			class _xx_Medikit 
			{
				count = 1;
				name = "Medikit";
			};
		};
		class TransportMagazines 
		{
			class _xx_SmokeShellBlue 
			{
				count = 1;
				magazine = "SmokeShellBlue";
			};
			class _xx_SmokeShellOrange 
			{
				count = 1;
				magazine = "SmokeShellOrange";
			};
			class _xx_SmokeShellGreen 
			{
				count = 1;
				magazine = "SmokeShellRed";
			};
		};
	};
	class G_Carryall_Ammo : B_Carryall_oli
	{
		class TransportMagazines
		{
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_150Rnd_762x54_Box
			{
				magazine = "150Rnd_762x54_Box";
				count = 1;
			};
		};
	};
	class B_TacticalPack_oli;
	class B_TacticalPack_oli_AAR : B_TacticalPack_oli
	{
		class TransportItems
		{
			delete _xx_muzzle_snds_h;
			class _xx_muzzle_snds_H_MG_blk_F
			{
				name = "muzzle_snds_H_MG_blk_F";
				count = 1;
			};
		};
	};
	class B_Kitbag_mcamo;
	class B_Patrol_Supply_bag_F: B_Kitbag_mcamo
	{
		class TransportMagazines
		{
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 2;
			};
			delete _xx_200Rnd_65x39_cased_Box;
			class _xx_200Rnd_556x45_Box_F
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 1;
			};
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 6;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_130Rnd_338_Mag
			{
				magazine = "130Rnd_338_Mag";
				count = 1;
			};
		};
	};
	class SoldierWB;
	class SoldierEB;
	class SoldierGB;
	class B_Soldier_base_F: SoldierWB
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Soldier_02_f: B_Soldier_base_F{};
	class B_Captain_Jay_F : B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Captain_Pettka_F: B_Soldier_02_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_03_f: B_Soldier_base_F{};
	class B_Soldier_04_f: B_Soldier_base_F{};
	class B_Soldier_05_f : B_Soldier_base_F{};
	class B_Pilot_F : B_Soldier_05_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_hex","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_hex","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShell","SmokeShellBlue","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShell","SmokeShellBlue","Chemlight_green"};
	};
	class B_Soldier_F : B_Soldier_base_F{};
	class B_GEN_Soldier_base_F : B_Soldier_F{};
	class B_GEN_Soldier_F : B_GEN_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_gend_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_gend_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","SmokeShell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","SmokeShell"};
	};
	class B_GEN_Commander_F : B_GEN_Soldier_base_F
	{
		weapons[] = {"SMG_05_F","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"SMG_05_F","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};
	};
	class B_Captain_Dwarden_F : B_GEN_Commander_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_gend_F","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_gend_F","hgun_Pistol_heavy_02_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellYellow"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellYellow"};
	};
	class B_Soldier_lite_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_F : B_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_W_Soldier_F : B_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_W_RadioOperator_F : B_W_Soldier_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_CBRN_F : B_W_Soldier_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_FL_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_Holo_FL_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_GL_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_Soldier_GL_F: B_Soldier_GL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_W_Soldier_GL_F: B_Soldier_GL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_blk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_blk_ACO_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_Soldier_AR_F: B_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_AR_F: B_soldier_AR_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_AR_F: B_soldier_AR_F
	{
		weapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_02_blk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_SL_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_SL_F: B_Soldier_SL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_SL_F: B_Soldier_SL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_TL_F: B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_Soldier_TL_F: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_W_Soldier_TL_F: B_Soldier_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_blk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_blk_Hamr_pointer_F","hgun_P07_khk_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_soldier_M_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_M_F: B_soldier_M_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_khk_Hamr_LP_BI_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_M_F: B_soldier_M_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_blk_Hamr_LP_BI_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_blk_Hamr_LP_BI_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_LAT_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_LAT_F: B_soldier_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_LAT_F: B_soldier_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","launch_NLAW_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_LAT2_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_MRAWS_sand_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_MRAWS_sand_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_LAT2_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_MRAWS_green_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","launch_MRAWS_green_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_LAT2_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","launch_MRAWS_green_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","launch_MRAWS_green_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_medic_F: B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_medic_F: B_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_medic_F: B_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_repair_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_repair_F: B_soldier_repair_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_repair_F: B_soldier_repair_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_exp_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_exp_F: B_soldier_exp_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_exp_F: B_soldier_exp_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_A_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Soldier_A_F: B_Soldier_A_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_A_F: B_Soldier_A_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AT_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AT_F: B_soldier_AT_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_AT_F: B_soldier_AT_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","launch_B_Titan_short_tna_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AA_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_soldier_AA_F: B_soldier_AA_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_soldier_AA_F: B_soldier_AA_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","launch_B_Titan_tna_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_engineer_F : B_Soldier_03_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_engineer_F : B_engineer_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_engineer_F : B_engineer_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_crew_F: B_Soldier_03_f
	{
		weapons[] = {"SMG_03C_TR_khaki","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_khaki","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Crew_F: B_crew_F
	{
		weapons[] = {"SMG_03C_TR_khaki","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_khaki","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Crew_F: B_crew_F
	{
		weapons[] = {"SMG_03C_TR_black","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_black","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Officer_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Officer_F: B_Officer_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_ACO","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Officer_F: B_Officer_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_ACO","hgun_ACPC2_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_ACO","hgun_ACPC2_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Helipilot_F: B_Soldier_04_f
	{
		weapons[] = {"ZSN_SMG_03C_TR_hex","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_hex","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Helipilot_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_hex","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_hex","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_Helipilot_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_hex","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_hex","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Helicrew_F: B_Helipilot_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_Helicrew_F: B_Helicrew_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_W_Helicrew_F: B_Helicrew_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_recon_base: B_Soldier_base_F{};
	class B_recon_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_F: B_recon_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_LAT_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_LAT_F: B_recon_LAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_exp_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_exp_F: B_recon_exp_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_medic_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_ACO_LP_snds_F","hgun_P07_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_ACO_LP_snds_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_medic_F: B_recon_medic_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_ACO_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_TL_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_Tracer_red","30Rnd_556x45_Stanag_Sand_Tracer_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_Tracer_red","30Rnd_556x45_Stanag_Sand_Tracer_Red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_TL_F: B_recon_TL_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_Tracer_red","30Rnd_556x45_Stanag_Sand_Tracer_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_Tracer_red","30Rnd_556x45_Stanag_Sand_Tracer_red","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_recon_M_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_recon_M_F: B_recon_M_F
	{
		weapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_03_snd_MOS_LP_BI_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_recon_JTAC_F: B_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_T_recon_JTAC_F: B_recon_JTAC_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_GL_snd_Holo_pointer_snds_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_Soldier_sniper_base_F : B_Soldier_base_F {};
	class B_ghillie_base_F : B_Soldier_sniper_base_F {};
	class B_ghillie_lsh_F : B_ghillie_base_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_snds_F","Throw","Put","Rangefinder"};
	};
	class B_T_ghillie_tna_F : B_ghillie_base_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
	};
	class B_sniper_F : B_Soldier_sniper_base_F {};
	class B_T_sniper_F : B_sniper_F
	{
		weapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_LRR_tna_LRPS_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
	};
	class B_spotter_F: B_Soldier_sniper_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_T_spotter_F: B_spotter_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_snd_Hamr_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_Story_SF_Captain_F: B_Soldier_base_F
	{
		weapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MXC_ACO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Story_Protagonist_F : B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_SPAR_01_GL_khk_Hamr_pointer_F","hgun_P07_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","Chemlight_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell"};
	};
	class B_CTRG_soldier_GL_LAT_F : B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MX_GL_ERCO_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_ERCO_pointer_F","launch_NLAW_F","hgun_P07_F","Throw","Put"};
	};
	class B_CTRG_soldier_engineer_exp_F : B_Soldier_02_f
	{
		weapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_CTRG_soldier_M_medic_F : B_Soldier_03_f
	{
		weapons[] = {"ZSN_arifle_MXM_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXM_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_soldier_AR_A_F: B_Soldier_base_F
	{

		backpack = "zsn_B_AssaultPack_cbr_Ammo";
		weapons[] = {"ZSN_arifle_MX_SW_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_ERCO_pointer_F","hgun_P07_F","Throw","Put"};
	};
	class B_CTRG_Soldier_base_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
 	};
	class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_TL_tna_F : B_CTRG_Soldier_F
	{
		magazines[] = {"30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
	};
	class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_MXM_khk_MOS_Pointer_Bipod_F","hgun_P07_khk_Snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_NLAW_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_LAT2_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_MRAWS_olive_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_khk_ERCO_pointer_F","launch_MRAWS_olive_F","hgun_P07_khk_Snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MRAWS_HEAT_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_SW_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_khaki_mag","100Rnd_65x39_caseless_mag_Tracer","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F
	{
		weapons[] = {"ZSN_arifle_MX_GL_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_khk_ERCO_pointer_F","hgun_P07_khk_Snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class B_CTRG_Soldier_3_F;
	class B_CTRG_Miller_F: B_CTRG_Soldier_3_F
	{
		weapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","30Rnd_65x39_caseless_khaki_mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_B_Soldier_Urban_base: B_Soldier_base_F
	{
		author = "ZluskeN";
		scope = 0;
		displayName = "Urban";
		vehicleClass = "MenUrban";
		faction = "BLU_CTRG_F";
		editorSubcategory = "EdSubcat_Personnel_Camo_Urban";
		role = "Rifleman";
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		uniformClass = "U_B_CTRG_Soldier_urb_1_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
 		Items[] = {"FirstAidKit","FirstAidKit","muzzle_snds_65_TI_blk_F"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit","muzzle_snds_65_TI_blk_F"};
	};
	class ZSN_B_soldierU_F : ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Rifleman";
		cost = 100000;
	};
	class ZSN_B_SoldierU_Unarmed_F: ZSN_B_soldierU_F
	{
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","G_Balaclava_TI_G_blk_F"};
		role = "Rifleman";
		displayName = "Rifleman (Unarmed)";
		weapons[] = {};
		respawnWeapons[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
 		Items[] = {"FirstAidKit","FirstAidKit"};
 		RespawnItems[] = {"FirstAidKit","FirstAidKit"};
	};
	class ZSN_B_soldierU_AR_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "machinegunner";
		textPlural = "machinegunners";
		nameSound = "veh_infantry_MG_s";
		scope = 2;
		displayName = "Autorifleman";
		weapons[] = {"ZSN_arifle_MX_SW_Black_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_SW_Black_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","100Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 115000;
		threat[] = {1,0.1,0.3};
		icon = "iconManMG";
		role = "MachineGunner";
	};
	class ZSN_B_soldierU_AAR_F : ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Asst. Autorifleman";
		backpack = "zsn_B_Kitbag_rgr_AAR";
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 95000;
		role = "Assistant";
	};
	class ZSN_B_soldierU_LAT_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "AT soldier";
		textPlural = "AT soldiers";
		nameSound = "veh_infantry_AT_s";
		scope = 2;
		displayName = "Rifleman (AT)";
		backpack = "ZSN_B_AssaultPack_blk_LAT";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_NLAW_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_NLAW_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		cost = 180000;
		icon = "iconManAT";
		role = "MissileSpecialist";
		threat[] = {1,0.7,0.3};
		secondaryAmmoCoef = 0.5;
	};
	class ZSN_B_soldierU_AT_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "AT soldier";
		textPlural = "AT soldiers";
		nameSound = "veh_infantry_AT_s";
		scope = 2;
		displayName = "Missile Specialist (AT)";
		backpack = "B_AssaultPack_mcamo_AT";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_B_Titan_short_tna_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_B_Titan_short_tna_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		cost = 190000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
	};
	class ZSN_B_soldierU_AAT_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Asst. Missile Specialist (AT)";
		backpack = "I_Carryall_oli_AAT";
		cost = 93000;
		role = "Assistant";
		camouflage = 1.5;
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
	};
	class ZSN_B_soldierU_AA_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "AT soldier";
		textPlural = "AT soldiers";
		nameSound = "veh_infantry_AT_s";
		scope = 2;
		displayName = "Missile Specialist (AA)";
		backpack = "B_AssaultPack_mcamo_AA";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_Titan_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","launch_Titan_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		cost = 200000;
		threat[] = {1,1,0.8};
		camouflage = 1.5;
		icon = "iconManAT";
		role = "MissileSpecialist";
	};
	class ZSN_B_soldierU_AAA_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Asst. Missile Specialist (AA)";
		backpack = "I_Carryall_oli_AAA";
		cost = 94000;
		role = "Assistant";
		camouflage = 1.5;
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
	};
	class ZSN_B_soldierU_TL_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Team Leader";
		weapons[] = {"ZSN_arifle_MX_GL_Black_ERCO_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_Black_ERCO_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI:G_blk_F"};
		cost = 450000;
		camouflage = 1.6;
		icon = "iconManLeader";
		role = "Grenadier";
	};
	class ZSN_B_soldierU_medic_F : ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "medic";
		textPlural = "medics";
		nameSound = "veh_infantry_medic_s";
		scope = 2;
		displayName = "Combat Life Saver";
		attendant = 1;
		backpack = "ZSN_B_FieldPack_blk_Medic";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		weapons[] = {"ZSN_arifle_MX_Black_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		cost = 300000;
		icon = "iconManMedic";
		role = "CombatLifeSaver";
		picture = "pictureHeal";
	};
	class ZSN_B_SoldierU_SL_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Squad Leader";
		weapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_ERCO_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_mag_Tracer","30Rnd_65x39_caseless_mag_Tracer","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		cost = 500000;
		camouflage = 1.6;
		icon = "iconManLeader";
		role = "Rifleman";
	};
	class ZSN_B_soldierU_repair_F : ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Repair Specialist";
		cost = 220000;
		camouflage = 1.6;
		backpack = "ZSN_B_FieldPack_blk_Repair";
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		engineer = 1;
		detectSkill = 40;
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class ZSN_B_soldierU_exp_F : ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Explosive Specialist";
		cost = 115000;
		camouflage = 1.6;
		backpack = "B_Kitbag_rgr_Exp";
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		canDeactivateMines = 1;
		detectSkill = 80;
		threat[] = {1,0.5,0.1};
		icon = "iconManExplosive";
		role = "Sapper";
		picture = "pictureExplosive";
	};
	class ZSN_B_engineer_U_F : ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Engineer";
		cost = 220000;
		camouflage = 1.6;
		backpack = "I_Carryall_oli_Eng";
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		weapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MXC_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellYellow","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		canDeactivateMines = 1;
		engineer = 1;
		detectSkill = 60;
		threat[] = {1,0.5,0.1};
		icon = "iconManEngineer";
		role = "Sapper";
		picture = "pictureRepair";
	};
	class ZSN_B_soldierU_M_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "sniper";
		textPlural = "snipers";
		nameSound = "veh_infantry_sniper_s";
		scope = 2;
		displayName = "Marksman";
		weapons[] = {"ZSN_arifle_MXM_Black_SOS_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MXM_Black_SOS_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		cost = 150000;
		role = "Marksman";
	};
	class ZSN_B_soldierU_A_F : ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Ammo Bearer";
		cost = 105000;
		role = "Rifleman";
		camouflage = 1.5;
		backpack = "zsn_B_AssaultPack_cbr_Ammo";
		uniformClass = "U_B_CTRG_Soldier_urb_2_F";
		weapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F"};
	};
	class ZSN_B_SoldierU_GL_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Grenadier";
		backpack = "B_AssaultPack_blk";
		weapons[] = {"ZSN_arifle_MX_GL_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MX_GL_Black_Holo_pointer_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","30Rnd_65x39_caseless_black_mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		cost = 130000;
		role = "Grenadier";
		threat[] = {1,0.3,0.1};
		uniformClass = "U_B_CTRG_Soldier_urb_3_F";
		linkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_blk_F"};
		vehicleClass = "MenUrban";
	};
	class ZSN_B_Urban_Sharpshooter_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "sniper";
		textPlural = "snipers";
		nameSound = "veh_infantry_sniper_s";
		scope = 2;
		displayName = "Sharpshooter";
		role = "Marksman";
		weapons[] = {"ZSN_srifle_DMR_02_AMS_LP_BI_F","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_02_AMS_LP_BI_F","ZSN_hgun_ACPC2_flight_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","10Rnd_338_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		linkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		respawnLinkedItems[] = {"V_PlateCarrier2_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGogglesB_blk_F","G_Balaclava_TI_G_blk_F"};
		DLC = "Mark";
	};
	class ZSN_B_Urban_HeavyGunner_F: ZSN_B_Soldier_Urban_base
	{
		author = "ZluskeN";
		textSingular = "machinegunner";
		textPlural = "machinegunners";
		nameSound = "veh_infantry_MG_s";
		scope = 2;
		displayName = "Heavy Gunner";
		icon = "iconManMG";
		role = "MachineGunner";
		weapons[] = {"ZSN_MMG_02_black_ERCO_LP_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_MMG_02_black_ERCO_LP_F","ZSN_hgun_ACPC2_flight_F","Throw","Put"};
		magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		DLC = "Mark";
	};
	class B_Soldier_support_base_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_MG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_Support_MG_F: B_support_MG_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Support_MG_F: B_support_MG_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_GMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_GMG_F: B_support_GMG_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_GMG_F: B_support_GMG_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_Mort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_Mort_F: B_support_Mort_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_Mort_F: B_support_Mort_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Soldier_AAR_F;
	class B_T_Soldier_AAR_F : B_soldier_AAR_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_AAR_F : B_soldier_AAR_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_AMG_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_AMG_F: B_support_AMG_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_AMG_F: B_support_AMG_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_support_AMort_F: B_Soldier_support_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_T_support_AMort_F: B_support_AMort_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_khaki_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_support_AMort_F: B_support_AMort_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnweapons[] = {"ZSN_SMG_03C_TR_black_Holo_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_Sharpshooter_F: B_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_EBR_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_EBR_AMS_LP_F","hgun_P07_F","Throw","Put","Binocular"};
	};
	class B_soldier_AAT_F : B_Soldier_support_base_F{};
	class B_T_Soldier_AAT_F : B_soldier_AAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_AAT_F : B_soldier_AAT_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_AAA_F : B_soldier_AAT_F{};
	class B_T_Soldier_AAA_F : B_soldier_AAA_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_W_Soldier_AAA_F : B_soldier_AAA_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","B_IR_Grenade","B_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class B_soldier_PG_F : B_Soldier_base_F{};
	class B_T_Soldier_PG_F : B_soldier_PG_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_soldier_UAV_F : B_Soldier_base_F{};
	class B_T_Soldier_UAV_F : B_soldier_UAV_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_khk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_W_Soldier_UAV_F : B_soldier_UAV_F
	{
		weapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_SPAR_01_blk_ACO_pointer_F","hgun_P07_khk_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class B_Patrol_Soldier_TL_F: B_Soldier_TL_F
	{
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_Tracer_Red","30Rnd_556x45_Stanag_Sand_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand_Tracer_Red","30Rnd_556x45_Stanag_Sand_Tracer_Red","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellGreen","SmokeShellBlue","SmokeShellBlue"};
	};
	class B_Patrol_Soldier_UAV_F: B_soldier_UAV_F
	{
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_M_F: B_soldier_M_F
	{
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Medic_F: B_medic_F
	{
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade"};
	};
	class B_Patrol_Soldier_AR_F: B_soldier_AR_F
	{
		magazines[] = {"150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Sand_Mag_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F","150Rnd_556x45_Drum_Green_Mag_Tracer_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_MG_F: B_soldier_AR_F
	{
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_Tracer_Red_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_Tracer_Red_F","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_HeavyGunner_F;
	class B_Patrol_HeavyGunner_F: B_HeavyGunner_F
	{
		magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_A_F: B_Soldier_A_F
	{
		magazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","30Rnd_556x45_Stanag_Sand","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Soldier_AT_F: B_soldier_AT_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AP","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","Titan_AP","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class B_Patrol_Engineer_F: B_engineer_F
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","9Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class I_Soldier_Base_F: SoldierGB
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_E_Soldier_base_F;
	class I_E_Soldier_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_lite_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_A_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_GL_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_GL_ACO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_GL_ACO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_E_Soldier_AR_F: I_E_Soldier_base_F
	{
		weapons[] = {"ZSN_LMG_03_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_03_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","200Rnd_556x45_Box_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AAR_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AAA_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AAT_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_UAV_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_SL_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_MRCO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Mk20_MRCO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_TL_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_GL_MRCO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Mk20_GL_MRCO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokePurple_Grenade_shell"};
	};
	class I_E_Soldier_M_F: I_E_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_DMR_03_SOS_LP_BI_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_srifle_DMR_03_SOS_LP_BI_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_LAT_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","launch_NLAW_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","launch_NLAW_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_LAT2_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","launch_MRAWS_green_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","launch_MRAWS_green_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT55_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT55_F","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AT_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_short_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_short_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_AA_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_eaf_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","launch_I_Titan_eaf_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_medic_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_repair_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_exp_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_engineer_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_crew_F: I_E_Soldier_base_F
	{
		weapons[] = {"SMG_03C_TR_camo","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_camo","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Helipilot_F: I_E_Soldier_base_F
	{
		weapons[] = {"SMG_03C_camo","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_camo","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_helicrew_F: I_E_Helipilot_F
	{
		weapons[] = {"SMG_03C_camo","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_camo","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_officer_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_F","ZSN_hgun_Pistol_heavy_01_green_MRD_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_F","ZSN_hgun_Pistol_heavy_01_green_MRD_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellBlue","SmokeShellOrange","SmokeShellPurple","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_support_base_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_MG_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_GMG_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_Mort_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_AMG_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_support_AMort_F: I_E_Soldier_support_base_F
	{
		weapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnweapons[] = {"arifle_Mk20C_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_Pathfinder_F: I_E_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_camo_PF","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","laserdesignator_02"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_camo_PF","hgun_Pistol_heavy_01_green_snds_F","Throw","Put","laserdesignator_02"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellBlue","Chemlight_blue","Chemlight_blue","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellBlue","Chemlight_blue","Chemlight_blue","MiniGrenade","MiniGrenade","MiniGrenade","Laserbatteries"};
	};
	class I_E_RadioOperator_F: I_E_Soldier_base_F
	{
		weapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Mk20_ACO_pointer_F","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_CBRN_F: I_E_Soldier_base_F
	{
		weapons[] = {"SMG_03C_camo","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_camo","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Soldier_MP_F: I_E_Soldier_base_F
	{
		weapons[] = {"ZSN_SMG_03C_TR_camo","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_SMG_03C_TR_camo","hgun_Pistol_heavy_01_green_F","Throw","Put","Binocular"};
		magazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
		respawnMagazines[] = {"50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","50Rnd_570x28_SMG_03","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","SmokeShell","SmokeShellBlue","Chemlight_Blue","Chemlight_Blue"};
	};
	class I_E_Scientist_F: I_E_Soldier_base_F
	{
		weapons[] = {"SMG_03C_TR_camo","hgun_Pistol_heavy_01_green_F","Throw","Put"};
		respawnWeapons[] = {"SMG_03C_TR_camo","hgun_Pistol_heavy_01_green_F","Throw","Put"};
	};
	class I_Soldier_02_F : I_Soldier_base_F{};
	class I_Soldier_03_F : I_Soldier_base_F{};
	class I_Soldier_04_F : I_Soldier_base_F{};
	class I_pilot_F : I_Soldier_04_F
	{
		weapons[] = {"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShell","SmokeShellGreen","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShell","SmokeShellGreen","Chemlight_green"};
	};
	class I_Fighter_Pilot_F : I_pilot_F
	{
		weapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_lite_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_A_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_GL_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AR_F: I_Soldier_02_F
	{
		weapons[] = {"LMG_Mk200_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_SL_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_TL_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_UBS_sand_ico_pointer_f","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_UBS_sand_ico_pointer_f","hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_M_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_Mark_sand_MRCO_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_Mark_sand_MRCO_LP_BI_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_LAT_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_NLAW_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_NLAW_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_LAT2_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_MRAWS_olive_rail_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_MRAWS_olive_rail_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MRAWS_HEAT_F","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AT_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_I_Titan_short_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_I_Titan_short_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AT","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_AA_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_I_Titan_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","launch_I_Titan_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","Titan_AA","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_medic_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_repair_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_exp_F: I_Soldier_02_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_engineer_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_crew_F: I_Soldier_base_F
	{
		uniformClass = "U_Tank_green_F";
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Story_Crew_F: I_crew_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellGreen","SmokeShellGreen"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","SmokeShellGreen","SmokeShellGreen"};
	};
	class I_Helipilot_F: I_Soldier_03_F
	{
		weapons[] = {"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_helicrew_F: I_Helipilot_F
	{
		weapons[] = {"SMG_01_Holo_F","Throw","Put"};
		respawnWeapons[] = {"SMG_01_Holo_F","Throw","Put"};
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_officer_F: I_Soldier_base_F
	{
		weapons[] = {"arifle_MSBS65_sand_f","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		respawnweapons[] = {"arifle_MSBS65_sand_f","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_Story_Officer_01_F: I_Officer_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_F","hgun_Pistol_heavy_01_MRD_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","SmokeShell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","APERSMineDispenser_Mag","SmokeShell"};
	};
	class I_Captain_Hladas_F: I_Officer_F
	{
		magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		weapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
		respawnweapons[] = {"hgun_Pistol_heavy_01_F","Throw","Put","Binocular"};
	};
	class I_Soldier_diver_base_F: I_Soldier_base_F
	{
		weapons[] = {"arifle_SDAR_F","hgun_Pistol_heavy_01_snds_F","Throw","Put"};
		respawnWeapons[] = {"arifle_SDAR_F","hgun_Pistol_heavy_01_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","20Rnd_556x45_UW_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","SmokeShellGreen","SmokeShellGreen","Chemlight_green","Chemlight_green","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_sniper_base_F: I_Soldier_base_F
	{
		weapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
	};
	class I_spotter_F: I_Soldier_sniper_base_F
	{
		weapons[] = {"ZSN_arifle_ARX_blk_MRCO_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator_03"};
		respawnWeapons[] = {"ZSN_arifle_ARX_blk_MRCO_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Laserdesignator_03"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","10Rnd_50BW_Mag_F","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_sniper_F: I_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_ghillie_base_F: I_Soldier_sniper_base_F
	{
		weapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_GM6_LRPS_F","hgun_Pistol_heavy_01_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_Soldier_support_base_F: I_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_IR_Grenade","I_IR_Grenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class I_support_MG_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_GMG_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_Mort_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_AMG_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class I_support_AMort_F: I_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
		respawnweapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_F","hgun_Pistol_heavy_01_F","Throw","Put"};
	};
	class ZSN_I_Soldier_recon_base: I_Soldier_base_F
	{
		textSingular = "specop";
		textPlural = "specops";
		nameSound = "veh_infantry_SF_s";
		editorSubcategory = "EdSubcat_Personnel_SpecialForces";
		author = "ZluskeN";
		scope = 0;
		displayName = "Recon";
		vehicleClass = "MenRecon";
		camouflage = 0.6;
		detectSkill = 30;
	};
	class ZSN_I_recon_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Scout";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		cost = 100000;
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_LAT_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Scout (AT)";
		uniformClass = "U_IG_Guerilla1_1";
		backpack = "I_Fieldpack_oli_LAT";
		threat[] = {1,0.6,0.1};
		cost = 150000;
		icon = "iconManAT";
		linkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_snds_F","launch_NLAW_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_snds_F","launch_NLAW_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","NLAW_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_exp_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Demo Specialist";
		uniformClass = "U_IG_Guerilla1_1";
		backpack = "I_Carryall_oli_Exp";
		canDeactivateMines = 1;
		detectSkill = 80;
		cost = 115000;
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		icon = "iconManExplosive";
		picture = "pictureExplosive";
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_medic_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Paramedic";
		uniformClass = "U_IG_Guerilla1_1";
		attendant = 1;
		cost = 290000;
		backpack = "ZSN_I_AssaultPack_dgtl_ReconMedic";
		icon = "iconManMedic";
		linkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_HelmetIA","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		picture = "pictureHeal";
		weapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_ico_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_TL_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Team Leader";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		cost = 440000;
		icon = "iconManLeader";
		linkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","G_Shades_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_MilCap_dgtl","G_Shades_Black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_MSBS65_sand_MRCO_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_sand_MRCO_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellBlue","SmokeShellOrange","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_M_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Marksman";
		uniformClass = "U_I_CombatUniform";
		cost = 140000;
		linkedItems[] = {"V_Chestrig_oli","H_Booniehat_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Booniehat_dgtl","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		primaryAmmoCoef = 0.2;
		secondaryAmmoCoef = 0.05;
		handgunAmmoCoef = 0.1;
		weapons[] = {"ZSN_arifle_MSBS65_Mark_sand_DMS_LP_BI_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_Mark_sand_DMS_LP_BI_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
	};
	class ZSN_I_recon_JTAC_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon JTAC";
		uniformClass = "U_I_CombatUniform";
		cost = 200000;
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Laserdesignator"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_GL_sand_ico_pointer_snds_F","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put","Laserdesignator"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","MiniGrenade","MiniGrenade","B_IR_Grenade","B_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
	class ZSN_I_Pathfinder_F: ZSN_I_Soldier_recon_base
	{
		author = "ZluskeN";
		scope = 2;
		displayName = "Recon Pathfinder";
		uniformClass = "U_I_CombatUniform";
		textSingular = "sniper";
		textPlural = "snipers";
		nameSound = "veh_infantry_sniper_s";
		linkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli","H_Shemag_olive_hs","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		weapons[] = {"ZSN_arifle_MSBS65_UBS_sand_snds_ico_pointer_f","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_UBS_sand_snds_ico_pointer_f","ZSN_hgun_Pistol_heavy_01_MRD_snds_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","11Rnd_45ACP_Mag","HandGrenade","HandGrenade","I_E_IR_Grenade","I_E_IR_Grenade","SmokeShell","SmokeShellGreen","SmokeShellOrange","SmokeShellPurple","Chemlight_green","Chemlight_green"};
	};
	class I_G_Soldier_base_F: SoldierGB{};
	class I_G_Soldier_F: I_G_Soldier_base_F{};
	class I_G_Soldier_SL_F : I_G_Soldier_base_F
	{
		weapons[] = {"arifle_TRG20_ACO_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_TRG20_ACO_F","hgun_Pistol_01_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_Tracer_Yellow","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_TL_F : I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_GL_camo_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_GL_camo_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag_Tracer","30Rnd_65x39_caseless_msbs_mag_Tracer","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class I_G_Soldier_AR_F: I_G_Soldier_base_F
	{
		weapons[] = {"LMG_Zafir_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Zafir_F","Throw","Put"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box","150Rnd_762x54_Box","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Medic_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_MSBS65_camo_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"arifle_MSBS65_camo_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","MiniGrenade","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Soldier_M_F : I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_Mark_camo_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_Mark_camo_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","HandGrenade","MiniGrenade","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		
	};
	class I_G_Soldier_exp_F : I_G_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_MSBS65_UBS_camo_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_MSBS65_UBS_camo_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","30Rnd_65x39_caseless_msbs_mag","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Pellets","6Rnd_12Gauge_Slug","6Rnd_12Gauge_Slug","HandGrenade","MiniGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue"};
	};
	class I_G_Officer_F: I_G_Soldier_base_F
	{
		weapons[] = {"arifle_TRG21_MRCO_F","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_MRCO_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","SmokeShellRed","SmokeShellBlue","Chemlight_blue","Chemlight_blue"};
	};
	class B_G_Soldier_F;
	class I_G_Story_Protagonist_F : B_G_Soldier_F
	{
		weapons[] = {"arifle_TRG21_GL_MRCO_F","hgun_Pistol_01_F","Throw","Put"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellGreen","Chemlight_blue","Chemlight_blue","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell"};
	};
	class I_C_Soldier_base_F : I_G_Soldier_base_F{};
	class I_C_Pilot_F : I_C_Soldier_base_F
	{
		weapons[] = {"hgun_PDW2000_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};
	class I_C_Helipilot_F : I_C_Soldier_base_F
	{
		weapons[] = {"hgun_PDW2000_F","Throw","Put"};
		respawnWeapons[] = {"hgun_PDW2000_F","Throw","Put"};
		magazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[] = {"30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};
	class I_C_Soldier_Para_1_F : I_C_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade"};
	};
	class I_C_Soldier_Para_2_F : I_C_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag","HandGrenade","HandGrenade"};
	};
	class I_C_Soldier_Bandit_3_F : I_C_Soldier_base_F
	{
		weapons[] = {"LMG_Mk200_black_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_black_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
	};
	class I_C_Soldier_Para_4_F : I_C_Soldier_base_F
	{
		weapons[] = {"LMG_Mk200_black_F","hgun_Pistol_01_F","Throw","Put"};
		respawnWeapons[] = {"LMG_Mk200_black_F","hgun_Pistol_01_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","10Rnd_9x21_Mag","10Rnd_9x21_Mag","10Rnd_9x21_Mag"};
	};
	class I_C_Soldier_Para_6_F : I_C_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_GL_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class I_C_Soldier_Bandit_6_F : I_C_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_GL_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class I_C_Soldier_Bandit_7_F : I_C_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_C_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","MiniGrenade","MiniGrenade"};
	};
	class I_C_Soldier_Para_7_F : I_C_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_C_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","HandGrenade","HandGrenade"};
	};
	class O_Soldier_base_F: SoldierEB
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_lite_F: SoldierEB
	{
		faction = "OPF_F";
		weapons[] = {"ZSN_arifle_AK12_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_AR_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_RPK12_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_RPK12_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","75rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_A_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Officer_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_T_Officer_F: O_Officer_F
	{
		weapons[] = {"arifle_CTAR_blk_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
		respawnWeapons[] = {"arifle_CTAR_blk_ACO_F","hgun_Pistol_heavy_02_F","Throw","Put"};
	};
	class O_medic_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_crew_F: O_Soldier_base_F
	{
		weapons[] = {"arifle_AK12U_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12U_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_helipilot_F;
	class O_helicrew_F: O_helipilot_F
	{
		weapons[] = {"arifle_AK12U_F","Throw","Put"};
		respawnWeapons[] = {"arifle_AK12U_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_engineer_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldier_exp_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldier_repair_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldier_UAV_F: O_Soldier_base_F
	{
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_GL_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_GL_ACO_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
	};
	class O_Soldier_AA_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","launch_O_Titan_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AA","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_AT_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","launch_O_Titan_short_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Titan_AT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_LAT_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_F","launch_RPG32_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_HAT_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_F","launch_O_Vorona_brown_F","hgun_Rook40_F","Throw","Put"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","Vorona_HEAT","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_SL_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_TL_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_AK12_GL_ARCO_pointer_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
	};
	class O_Sharpshooter_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_srifle_DMR_05_hex_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_05_hex_LP_F","hgun_Rook40_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
	};
	class O_HeavyGunner_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_MMG_01_hex_ARCO_LP_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_Soldier_support_base_F: O_Soldier_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_support_AMG_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_support_AMort_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_support_GMG_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_support_Mort_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_support_MG_F: O_Soldier_support_base_F
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_F","hgun_Rook40_F","Throw","Put"};
	};
	class O_Soldier_sniper_base_F;
	class O_spotter_F: O_Soldier_sniper_base_F
	{
		weapons[] = {"ZSN_arifle_AK12_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ARCO_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","ClaymoreDirectionalMine_Remote_Mag","APERSTripMine_Wire_Mag","Laserbatteries","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_recon_base;
	class O_recon_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_recon_exp_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_recon_JTAC_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_GL_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		respawnWeapons[] = {"ZSN_arifle_AK12_GL_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Laserdesignator_02"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","O_IR_Grenade","O_IR_Grenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","Laserbatteries","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell"};
	};
	class O_recon_medic_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12U_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12U_ACO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_recon_TL_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ARCO_pointer_snds_F","hgun_Rook40_snds_F","Throw","Put","Rangefinder"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_Tracer_F","30Rnd_762x39_AK12_Mag_Tracer_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_recon_LAT_F: O_Soldier_recon_base
	{
		weapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_arifle_AK12_ACO_pointer_snds_F","launch_RPG32_F","hgun_Rook40_snds_F","Throw","Put"};
		magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","30Rnd_762x39_AK12_Mag_F","RPG32_F","MiniGrenade","MiniGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Soldier_Urban_base: O_Soldier_base_F
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AR_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_LMG_Mk200_LP_BI_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_LMG_Mk200_LP_BI_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AAR_F : O_Soldier_Urban_base
	{
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_LAT_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_RPG32_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","RPG32_F","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AT_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_short_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_short_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","Titan_AT","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AAT_F: O_Soldier_Urban_base
	{
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AA_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","launch_O_Titan_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","Titan_AA","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_AAA_F: O_Soldier_Urban_base
	{
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_TL_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_ARCO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_medic_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_SoldierU_SL_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"arifle_Katiba_ARCO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","30Rnd_65x39_caseless_green_mag_Tracer","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","O_IR_Grenade","O_IR_Grenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_repair_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_exp_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_engineer_U_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_C_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellOrange","SmokeShellYellow","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_M_F: O_Soldier_Urban_base
	{
		weapons[] = {"srifle_DMR_01_DMS_BI_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Rangefinder"};
		respawnWeapons[] = {"srifle_DMR_01_DMS_BI_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Rangefinder"};
		magazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","10Rnd_762x54_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_soldierU_A_F : O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_ACO_pointer_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_SoldierU_GL_F: O_Soldier_Urban_base
	{
		weapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"arifle_Katiba_GL_ACO_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","HandGrenade","HandGrenade","MiniGrenade","MiniGrenade","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class O_Urban_Sharpshooter_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_srifle_DMR_05_tan_KHS_LP_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
		respawnWeapons[] = {"ZSN_srifle_DMR_05_tan_KHS_LP_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put","Binocular"};
		magazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
		respawnMagazines[] = {"10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","10Rnd_93x64_DMR_05_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red","HandGrenade","HandGrenade"};
	};
	class O_Urban_HeavyGunner_F: O_Soldier_Urban_base
	{
		weapons[] = {"ZSN_MMG_01_tan_ARCO_LP_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		respawnWeapons[] = {"ZSN_MMG_01_tan_ARCO_LP_F","hgun_Pistol_heavy_02_Yorris_F","Throw","Put"};
		magazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
		respawnMagazines[] = {"150Rnd_93x64_Mag","150Rnd_93x64_Mag","150Rnd_93x64_Mag","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","6Rnd_45ACP_Cylinder","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
	};
	class Car_F;
	class Offroad_01_military_base_F;
	class I_E_Offroad_01_F: Offroad_01_military_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;
			};
		};
	};
	class Offroad_01_military_covered_base_F;
	class I_E_Offroad_01_covered_F: Offroad_01_military_covered_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;
			};
		};
	};
	class Offroad_01_military_comms_base_F;
	class I_E_Offroad_01_comms_F: Offroad_01_military_comms_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 8;
			};
		};
	};
	class MRAP_01_base_F : Car_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
		};
	};
	class B_MRAP_01_F;
	class B_T_MRAP_01_F : B_MRAP_01_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_MRAP_01_gmg_F;
	class B_T_MRAP_01_gmg_F : B_MRAP_01_gmg_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_MRAP_01_hmg_F;
	class B_T_MRAP_01_hmg_F : B_MRAP_01_hmg_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class MRAP_02_base_F : Car_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30rnd_762x39_AK12_Mag_F
			{
				magazine = "30rnd_762x39_AK12_Mag_F";
				count = 16;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class LSV_01_base_F : Car_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon = "arifle_SPAR_01_snd_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class LSV_01_light_base_F;
	class B_CTRG_LSV_01_light_F : LSV_01_light_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag_red;
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_khaki_mag
			{
				magazine = "100Rnd_65x39_caseless_khaki_mag";
				count = 9;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class LSV_01_armed_base_F;
	class B_T_LSV_01_armed_F : LSV_01_armed_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon = "arifle_SPAR_01_snd_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_T_LSV_01_armed_CTRG_F : B_T_LSV_01_armed_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_khaki_mag
			{
				magazine = "100Rnd_65x39_caseless_khaki_mag";
				count = 9;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class LSV_01_unarmed_base_F;
	class B_T_LSV_01_unarmed_F : LSV_01_unarmed_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_snd_F
			{
				weapon = "arifle_SPAR_01_snd_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 16;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class B_T_LSV_01_unarmed_CTRG_F : B_T_LSV_01_unarmed_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_Black_F
			{
				weapon = "arifle_MXC_Black_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 16;
			};
			delete _xx_150Rnd_556x45_Drum_Mag_F;
			class _xx_100Rnd_65x39_caseless_khaki_mag
			{
				magazine = "100Rnd_65x39_caseless_khaki_mag";
				count = 9;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 4;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 4;
			};
			class _xx_16Rnd_9x21_Mag
			{
				magazine = "16Rnd_9x21_Mag";
				count = 12;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 4;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 4;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 2;
			};
		};
	};
	class LSV_02_base_F : Car_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30rnd_762x39_AK12_Mag_F
			{
				magazine = "30rnd_762x39_AK12_Mag_F";
				count = 16;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class MRAP_03_base_F : Car_F
	{
		class TransportWeapons 
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_sand_f
			{
				count = 2;
				weapon = "arifle_MSBS65_sand_f";
			};
		};
		class TransportMagazines
		{
			delete _xx_9Rnd_45ACP_Mag;
			class _xx_11Rnd_45ACP_Mag
			{
				magazine = "11Rnd_45ACP_Mag";
				count = 12;
			};
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 16;
			};
		};
	};
	class Wheeled_APC_F;
	class AFV_Wheeled_01_base_F : Wheeled_APC_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class APC_Wheeled_01_base_F : Wheeled_APC_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
		};
	};
	class B_APC_Wheeled_01_cannon_F;
	class B_T_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_cannon_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 12;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 4;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class APC_Wheeled_02_base_F : Wheeled_APC_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class APC_Wheeled_03_base_F : Wheeled_APC_F
	{
		class TransportWeapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_sand_f
			{
				count = 2;
				weapon = "arifle_MSBS65_sand_f";
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 12;
			};
		};
	};
	class Tank_F;
	class APC_Tracked_01_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			delete _xx_100Rnd_65x39_caseless_mag;
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class B_APC_Tracked_01_AA_F;
	class B_T_APC_Tracked_01_AA_F : B_APC_Tracked_01_AA_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_khk_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class B_APC_Tracked_01_CRV_F;
	class B_T_APC_Tracked_01_CRV_F : B_APC_Tracked_01_CRV_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_khk_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class B_APC_Tracked_01_rcws_F;
	class B_T_APC_Tracked_01_rcws_F : B_APC_Tracked_01_rcws_F
	{
		class transportweapons
		{
			delete _xx_arifle_MX_khk_F;
			class _xx_arifle_SPAR_01_khk_F
			{
				weapon = "arifle_SPAR_01_khk_F";
				count = 2;
			};
			delete _xx_arifle_MX_SW_khk_F;
			class _xx_arifle_SPAR_02_khk_F
			{
				weapon = "arifle_SPAR_02_khk_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine = "150Rnd_556x45_Drum_Mag_F";
				count = 8;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 6;
			};
			class _xx_MiniGrenade
			{
				magazine = "MiniGrenade";
				count = 6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "1Rnd_SmokeGreen_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine = "1Rnd_SmokeOrange_Grenade_shell";
				count = 3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
				count = 3;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 8;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 8;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 8;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 8;
			};
			class _xx_NLAW_F
			{
				magazine = "NLAW_F";
				count = 5;
			};
			class _xx_Titan_AT
			{
				magazine = "Titan_AT";
				count = 2;
			};
			class _xx_Titan_AP
			{
				magazine = "Titan_AP";
				count = 2;
			};
			class _xx_Titan_AA
			{
				magazine = "Titan_AA";
				count = 2;
			};
		};
	};
	class APC_Tracked_02_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_F;
			class _xx_arifle_AK12_F
			{
				weapon = "arifle_AK12_F";
				count = 2;
			};
			delete _xx_LMG_Zafir_F;
			class _xx_arifle_RPK12_F
			{
				weapon = "arifle_RPK12_F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 24;
			};
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 8;
			};
		};
	};
	class APC_Tracked_03_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20_F;
			class _xx_arifle_MSBS65_sand_f
			{
				weapon = "arifle_MSBS65_sand_f";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 24;
			};
		};
	};
	class I_E_APC_tracked_03_base_F;
	class I_E_APC_tracked_03_cannon_F : I_E_APC_tracked_03_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20_F
			{
				weapon = "arifle_Mk20_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 24;
			};
		};
	};
	class MBT_01_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_arty_F;
	class B_T_MBT_01_arty_F : B_MBT_01_arty_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_mlrs_F;
	class B_T_MBT_01_mlrs_F : B_MBT_01_mlrs_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_cannon_F;
	class B_T_MBT_01_cannon_F : B_MBT_01_cannon_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_MBT_01_TUSK_F;
	class B_T_MBT_01_TUSK_F : B_MBT_01_TUSK_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_khk_F;
			class _xx_SMG_03C_TR_khaki
			{
				weapon = "SMG_03C_TR_khaki";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 2;
			};
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class MBT_02_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class MBT_03_base_F : Tank_F
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_MSBS65_sand_f
			{
				weapon = "arifle_MSBS65_sand_f";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 4;
			};
		};
	};
	class MBT_04_cannon_base_F;
	class O_MBT_04_cannon_F : MBT_04_cannon_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class MBT_04_command_base_F;
	class O_MBT_04_command_F : MBT_04_command_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class Air;
	class Helicopter;
	class Helicopter_Base_F;
	class Helicopter_Base_H;
	class Heli_Light_01_base_F: Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Heli_Attack_01_base_F : Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class Heli_Attack_02_base_F : Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class Heli_Transport_01_base_F : Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_MXC_F;
			class _xx_SMG_03C_TR_black
			{
				weapon = "SMG_03C_TR_black";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_50Rnd_570x28_SMG_03
			{
				magazine = "50Rnd_570x28_SMG_03";
				count = 4;
			};
		};
	};
	class B_CTRG_Heli_Transport_01_sand_F : Heli_Transport_01_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_F
			{
				weapon = "arifle_MXC_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 4;
			};
		};
	};
	class B_CTRG_Heli_Transport_01_tropic_F : Heli_Transport_01_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_SPAR_01_blk_F;
			class _xx_arifle_MXC_khk_F
			{
				weapon = "arifle_MXC_khk_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_khaki_mag
			{
				magazine = "30Rnd_65x39_caseless_khaki_mag";
				count = 4;
			};
		};
	};
	class Heli_Transport_02_base_F : Helicopter_Base_H
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_MSBS65_sand_f
			{
				weapon = "arifle_MSBS65_sand_f";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 4;
			};
		};
	};
	class Heli_light_02_base_F : Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Katiba_C_F;
			class _xx_arifle_AK12U_F
			{
				weapon = "arifle_AK12U_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_green;
			class _xx_30Rnd_762x39_AK12_Mag_F
			{
				magazine = "30Rnd_762x39_AK12_Mag_F";
				count = 4;
			};
		};
	};
	class Heli_light_03_base_F : Helicopter_Base_F
	{
		class transportweapons
		{
			delete _xx_arifle_Mk20C_F;
			class _xx_arifle_MSBS65_sand_f
			{
				weapon = "arifle_MSBS65_sand_f";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_556x45_Stanag;
			class _xx_30Rnd_65x39_caseless_msbs_mag
			{
				magazine = "30Rnd_65x39_caseless_msbs_mag";
				count = 4;
			};
		};
	};
	class Heli_light_03_unarmed_base_F;
	class I_E_Heli_light_03_unarmed_F : Heli_light_03_unarmed_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class Heli_light_03_dynamicLoadout_base_F;
	class I_E_Heli_light_03_dynamicLoadout_F : Heli_light_03_dynamicLoadout_base_F
	{
		class transportweapons
		{
			delete _xx_arifle_MSBS65_F;
			class _xx_arifle_Mk20C_F
			{
				weapon = "arifle_Mk20C_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_msbs_mag;
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 4;
			};
		};
	};
	class  Heli_Transport_04_base_F;
	class O_Heli_Transport_04_box_F : Heli_Transport_04_base_F
	{
		class transportweapons
		{
			delete _xx_LMG_Zafir_F;
			class _xx_arifle_RPK12_F
			{
				weapon = "arifle_RPK12_F";
				count = 2;
			};
		};
		class TransportMagazines
		{
			delete _xx_150Rnd_762x54_Box;
			class _xx_75rnd_762x39_AK12_Mag_F
			{
				magazine = "75rnd_762x39_AK12_Mag_F";
				count = 8;
			};
		};
	};
};
class cfggroups
{
	class West
	{
		class BLU_CTRG_F
		{
			class UInfantry
			{
				name = "Urban Infantry";
				class ZSN_BIA_GuardSquad
				{
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_LAT_F";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_M_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_TL_F";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_AR_F";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_A_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "ZSN_B_soldierU_medic_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					name = "CQB Squad";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
				};
				class ZSN_BIA_GuardTeam
				{
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_GL_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_LAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					name = "CQB Patrol";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
				};
				class ZSN_BIA_GuardSentry
				{
					class Unit0
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ZSN_B_soldierU_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					name = "CQB Sentry";
					side = 1;
					faction = "BLU_CTRG_F";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
				};
			};
		};
	};
	class Indep
	{
		class IND_F
		{
			class Infantry
			{
				class ZSN_HAF_ReconTeam
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_I_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_I_recon_LAT_F";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_I_recon_JTAC_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_I_recon_exp_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					name = "Recon Team";
					side = 2;
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
				class ZSN_HAF_ReconPatrol
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_I_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_I_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					name = "Recon Patrol";
					side = 2;
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
				class ZSN_HAF_ReconSentry
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_recon_M_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_recon_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					name = "Recon Sentry";
					side = 2;
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
				class ZSN_HAF_ReconSquad
				{
					class Unit0
					{
						side = 2;
						vehicle = "ZSN_I_recon_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ZSN_I_recon_M_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ZSN_I_recon_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "ZSN_I_recon_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "ZSN_I_recon_LAT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "ZSN_I_recon_JTAC_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "ZSN_I_recon_exp_F";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "ZSN_I_Pathfinder_F";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					name = "Recon Squad";
					side = 2;
					faction = "IND_F";
					icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
				};
			};
		};
	};
};
