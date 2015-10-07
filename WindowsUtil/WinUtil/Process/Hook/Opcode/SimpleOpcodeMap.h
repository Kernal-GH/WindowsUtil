#pragma once
#include <Windows.h>
#include <WinBase.h>
// 简单记录opcode表，删减了很多东西
namespace Process
{
	namespace Hook
	{
		enum OpcodeType
		{
			OT_None,
			OT_Cmd,
			OT_Grp,// 操作数信息在组表里找的
			OT_Grp_E,// 带有操作数信息(长度)的组
			OT_Table,
			OT_Esc,
			OT_Prefix
		};

		enum OpcodeLenType
		{
			OLT_None,
			// 恒定不变的
			OLT_B,
			OLT_W_D, // 16位时W，32、64时D
			OLT_W,
			//OLT_D,
			//OLT_Q,
			OLT_W_D_D64, // 64默认64不能编32
			OLT_B_D64,
			// 根据前缀确定的
			//OLT_D_Q,
			//OLT_B_W,
			//OLT_D_Q_DQ,
			OLT_W_D_Q,

			// 操作数都是立即数的
			OLT_W_And_B, // 3字节
			// 在64位下强制64位的
			OLT_B_F64,
			OLT_W_F64,
			OLT_W_D_F64,
			OLT_SP_Ap,	//特殊长度不好分类32,48,40
			// 在64位时不需前缀自动扩充成64位长的
			OLT_B_O,
			OLT_W_D_Q_O
		};

		enum OpcodePrefixGroup
		{
			OPG_None,
			OPG_G1,
			OPG_G2,
			OPG_G3,
			OPG_G4
		};
		enum OpcodeTables
		{
			OneByteOpcode,
			TwoByteOpcode,
			ThreeByteOpcode_38,
			ThreeByteOpcode_3A
		};
		/* 组重新排序*/
		enum OpcodeGroups
		{
			Op_grp1,
			Op_grp2,
			Op_grp3_F6,  // 有一个test 在f6时B f7时D
			Op_grp3_F7,
			Op_grp1a,
			Op_grp8,
			Op_grp11_C6, // mov c6 c7不同长度
			Op_grp11_C7,
			// 有具体定义
			Op_grp4,
			Op_grp5,
			Op_grp6,
			Op_grp7,
			Op_grp9,
			Op_grp10,
			Op_grp12,
			Op_grp13,
			Op_grp14,
			Op_grp15,
			Op_grp16,
			Op_grp17
		};
#pragma  pack(push)
#pragma pack(1)
		typedef struct
		{
			BYTE Rm : 3;
			BYTE Reg : 3;
			BYTE Mod : 2;
		}OpcodeModRM, *POpcodeModRM;
		typedef struct
		{
			BYTE LenType : 4; // 指令自身长度-1
			BYTE HasRM : 1;
			BYTE: 3;
		}OpcodeCmd, *POpcodeCmd;
		typedef struct
		{
			BYTE GroupIndex : 3; // 修改相应的到0-7 
			BYTE IbIzNone : 2; // 使用OpcodeLenType
		BYTE: 3;
		}OpcodeGroup_E, *POpcodeGroup_E;
		typedef struct
		{
			union
			{
				BYTE Val;
				struct
				{
					BYTE:5;
					BYTE Type : 3;
				};
				
				OpcodeCmd Cmd;
				struct
				{
					BYTE Index : 5;
					BYTE: 3;
				} Table;
				struct
				{
					BYTE Index : 5;
					BYTE: 3;
				} Group;
				OpcodeGroup_E Group_E;
				struct
				{
					BYTE Index : 5;
					BYTE: 3;
				} Esc;
				struct
				{
					BYTE PrefixGroup : 5;
					BYTE: 3;
				} Prefix;
			};
		}Opcode, *POpcode;
		enum OpcodePrefixCondition
		{
			OPC_None = 1,
			OPC_66 = OPC_None << 1,
			OPC_F3 = OPC_66 << 1,
			OPC_F2 = OPC_F3 << 1
		};
		typedef struct
		{
			Opcode Cmd;
			BYTE PrefixCondition;// 前缀定义条件
		}OpcodeEx, *POpcodeEx;

		enum Mod76
		{
			Mod_mem = 0,
			Mod_11b = 1
		};
		typedef struct
		{
			union
			{
				BYTE Val;
				struct
				{
					BYTE : 1;
					BYTE IbIzNone : 2;
					BYTE Mod : 2;
					BYTE Prefix : 3;
				};
			};
		}OpcodeGrp,*POpcodeGrp;


		typedef struct
		{
			union
			{
				BYTE Val;
				struct
				{
					BYTE B : 1;
					BYTE X : 1;
					BYTE R : 1;
					BYTE W : 1;
					BYTE: 4;					
				};
			};
		}OpcodeRex,*POpcodeRex;
#pragma pack(pop)

#define _HEX_SET_TYPE(type) ((BYTE)((type&0x7)<<5))
#define HEX_CMD(hasRm,len) {((BYTE)(_HEX_SET_TYPE(OT_Cmd)|((hasRm&1)<<4)|(len&0xf)))}
#define HEX_TABLE(index) {((BYTE)(_HEX_SET_TYPE(OT_Table)|(index&0x1f)))}
#define HEX_GRP(index) {((BYTE)(_HEX_SET_TYPE(OT_Grp)|(index&0x1f)))}
#define HEX_GRP_E(ibiz,index) {((BYTE)(_HEX_SET_TYPE(OT_Grp_E)|(ibiz<<3)|(index&0x7)))}
#define HEX_ESC(index) {((BYTE)(_HEX_SET_TYPE(OT_Esc)|(index&0x1f)))}
#define HEX_PREFIX(prefixGroup) {((BYTE)(_HEX_SET_TYPE(OT_Prefix)|(prefixGroup&0x1f)))}
		extern const Opcode OneByteTable[];
		extern const OpcodeEx TwoByteTable[];
#define HEXEX_CMD(hasRm,len,prefix) {HEX_CMD(hasRm,len) ,prefix}
#define HEXEX_TABLE(index,prefix) {HEX_TABLE(index) ,prefix}
#define HEXEX_GRP(index,prefix) {HEX_GRP(index) ,prefix}
#define HEXEX_GRP_E(ibiz,index,prefix) {HEX_GRP_E(ibiz,index) ,prefix}
#define HEXEX_ESC(index,prefix) {HEX_ESC(index) ,prefix}
#define HEXEX_PREFIX(prefixGroup,prefix) {HEX_PREFIX(prefixGroup),prefix}
#define HEXEX_NULL {NULL,NULL}

#define GRP_DEF(prefix,mod,size) {(BYTE)((BYTE)((size&3)<<1)| (BYTE)((mod&3)<<3) | (BYTE)((prefix&3)<<5))}
		extern const OpcodeEx ThreeByteTable_0F38[];
		extern const OpcodeEx ThreeByteTable_0F3A[];
		extern const BYTE EscMap[][8];
		extern const OpcodeGrp GroupTable[][8];
	}
}
