#include "SimpleOpcodeMap.h"


namespace Process
{
	namespace Hook
	{
		// TODO:添加32位非法，64位非法表(只记录可能被错误解析项
		const Opcode OneByteTable[] =
		{
			HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_W_D),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),
			HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_W_D),HEX_CMD(false,OLT_None),HEX_TABLE(TwoByteOpcode),

			HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_W_D),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),
			HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_W_D),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),

			HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_W_D),HEX_PREFIX(OPG_G2),HEX_CMD(false,OLT_None),
			HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_W_D),HEX_PREFIX(OPG_G2),HEX_CMD(false,OLT_None),

			HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_W_D),HEX_PREFIX(OPG_G2),HEX_CMD(false,OLT_None),
			HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_W_D),HEX_PREFIX(OPG_G2),HEX_CMD(false,OLT_None),

			HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),
			HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),

			HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),
			HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),

			HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_PREFIX(OPG_G2),HEX_PREFIX(OPG_G2),HEX_PREFIX(OPG_G3),HEX_PREFIX(OPG_G4),
			HEX_CMD(false,OLT_W_D_D64),HEX_CMD(true,OLT_W_D),HEX_CMD(false,OLT_B_D64),HEX_CMD(true,OLT_B),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),

			HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),
			HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),
			//8
			HEX_GRP_E(OLT_B,Op_grp1),HEX_GRP_E(OLT_W_D,Op_grp1),HEX_GRP_E(OLT_B,Op_grp1),HEX_GRP_E(OLT_B,Op_grp1),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),
			HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_GRP_E(OLT_None,Op_grp1a),

			HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),
			HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_SP_Ap),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),

			HEX_CMD(false,OLT_B_O),HEX_CMD(false,OLT_W_D_Q_O),HEX_CMD(false,OLT_B_O),HEX_CMD(false,OLT_W_D_Q_O),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),
			HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_W_D),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),

			HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),
			HEX_CMD(false,OLT_W_D_Q),HEX_CMD(false,OLT_W_D_Q),HEX_CMD(false,OLT_W_D_Q),HEX_CMD(false,OLT_W_D_Q),HEX_CMD(false,OLT_W_D_Q),HEX_CMD(false,OLT_W_D_Q),HEX_CMD(false,OLT_W_D_Q),HEX_CMD(false,OLT_W_D_Q),

			HEX_GRP_E(OLT_B,Op_grp2),HEX_GRP_E(OLT_B,Op_grp2),HEX_CMD(false,OLT_W_F64),HEX_CMD(false,OLT_None),HEX_CMD(true,OLT_None),HEX_CMD(true,OLT_None),HEX_GRP(Op_grp11_C6),HEX_GRP(Op_grp11_C7),
			HEX_CMD(false,OLT_W_And_B),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_W),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),

			HEX_GRP_E(OLT_None,Op_grp2),HEX_GRP_E(OLT_None,Op_grp2),HEX_GRP_E(OLT_None,Op_grp2),HEX_GRP_E(OLT_None,Op_grp2),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),NULL,HEX_CMD(false,OLT_None),
			HEX_ESC(0),HEX_ESC(0),HEX_ESC(0),HEX_ESC(0),HEX_ESC(0),HEX_ESC(0),HEX_ESC(0),HEX_ESC(0),

			HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),HEX_CMD(false,OLT_B),
			HEX_CMD(false,OLT_W_D_F64),HEX_CMD(false,OLT_W_D_F64),HEX_CMD(false,OLT_SP_Ap),HEX_CMD(false,OLT_B_F64),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),

			HEX_PREFIX(OPG_G1),NULL,HEX_PREFIX(OPG_G2),HEX_PREFIX(OPG_G2),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_GRP_E(OLT_None,Op_grp3_F6),HEX_GRP_E(OLT_None,Op_grp3_F7),
			HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_CMD(false,OLT_None),HEX_GRP(Op_grp4),HEX_GRP(Op_grp5),

		};

		const OpcodeEx TwoByteTable[] =
		{
			// 0
			HEXEX_GRP(Op_grp6,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_GRP(Op_grp7,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_NULL,HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_NULL,HEXEX_NULL,
			// 1
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			HEXEX_GRP(Op_grp16,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			// 2
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			// 3
			HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_NULL,HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			HEXEX_TABLE(ThreeByteOpcode_38,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_NULL,HEXEX_TABLE(ThreeByteOpcode_3A,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			// 4
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			// 5
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_F3),HEXEX_CMD(true,OLT_None,OPC_None | OPC_F3),HEXEX_CMD(true,OLT_None,OPC_None | OPC_F3),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			// 6
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3),
			// 7
			HEXEX_CMD(true,OLT_B,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_GRP(Op_grp12,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_GRP(Op_grp13,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_GRP(Op_grp14,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(false,OLT_None,OPC_None),
			HEXEX_CMD(true,OLT_None,OPC_None),HEXEX_CMD(true,OLT_None,OPC_None),HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_66 | OPC_F2),HEXEX_CMD(true,OLT_None, OPC_66 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3),
			// 8
			HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_W_D_F64,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			// 9
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			// a
			HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_B,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_B,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_GRP(Op_grp15,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			// b
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			HEXEX_CMD(true,OLT_None, OPC_F3),HEXEX_GRP(Op_grp10,OPC_None | OPC_F3),HEXEX_GRP_E(OLT_B,Op_grp8,OPC_None | OPC_F3),HEXEX_CMD(true,OLT_None, OPC_None),HEXEX_CMD(true,OLT_None, OPC_None | OPC_F3),HEXEX_CMD(true,OLT_None, OPC_None | OPC_F3),HEXEX_CMD(true,OLT_None, OPC_None | OPC_F3),HEXEX_CMD(true,OLT_None, OPC_None | OPC_F3),
			// c
			HEXEX_CMD(true,OLT_None,OPC_None),HEXEX_CMD(true,OLT_None,OPC_None),HEXEX_CMD(true,OLT_B,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None),HEXEX_CMD(true,OLT_B,OPC_None | OPC_66),HEXEX_CMD(true,OLT_B,OPC_None | OPC_66),HEXEX_CMD(true,OLT_B,OPC_None | OPC_66),HEXEX_GRP(Op_grp9,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(false,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			// d
			HEXEX_CMD(true,OLT_None, OPC_66 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			// e
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			// f
			HEXEX_CMD(true,OLT_None, OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_NULL
		};

		const OpcodeEx ThreeByteTable_0F38[] =
		{
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66),HEXEX_NULL,
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F2/*|OPC_66_F2*/),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F2 /*| OPC_66_F2*/),HEXEX_CMD(true,OLT_None,OPC_None),HEXEX_GRP(Op_grp17,OPC_None | OPC_66 | OPC_F3 | OPC_F2/*| OPC_66_F2*/),HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_None | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_66 | OPC_F3 | OPC_F2),HEXEX_CMD(true,OLT_None,OPC_None | OPC_66 | OPC_F3 | OPC_F2),
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,

		};
		const OpcodeEx ThreeByteTable_0F3A[] =
		{
			HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,
			HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_None | OPC_66),
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),
			HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_CMD(true,OLT_None,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_CMD(true,OLT_B,OPC_66),
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_CMD(true,OLT_B,OPC_66),HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,
			HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL,HEXEX_NULL
		};

		const BYTE EscMap[][8] =
		{
			{ true,true, true, true, true, true, true, true },
			{ true,false, true, true, true, true, true, true },
			{ true,true, true, true, true, true, true, true },
			{ true,true, true, true, false, true, false, true },
			{ true,true, true, true, true, true, true, true },
			{ true,true, true, true, true, false, true, true },
			{ true,true, true, true, true, true, true, true },
			{ true,true, true, true, true, true, true, true },
		};

		// 无定义的NULL,有定义但是信息空的为 GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,false,OLT_None),
		const OpcodeGrp GroupTable[][8]=
		{
			// 1
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None) },
			// 2
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None) },
			// 3_f6
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_B),NULL,GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None) },
			// 3_f7
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_W_D),NULL,GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None) },
			//1a
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),NULL,NULL,NULL,NULL,NULL,NULL,NULL },
			//8
			{ NULL,NULL,NULL,NULL,GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), },
			// 11_c6
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_B),NULL,NULL,NULL,NULL,NULL,NULL,GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_11b,OLT_B), },
			// 11_c7
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_W_D),NULL,NULL,NULL,NULL,NULL,NULL,GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_11b,OLT_W_D), },
			// 4
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),NULL,NULL,NULL,NULL,NULL,NULL },
			// 5
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),NULL },
			// 6
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),NULL,NULL },
			// 7 其它不理，无关紧要
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b ,OLT_None),NULL,GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem ,OLT_None) },
			// 9 最后一个 mem 66 无 11 全前缀
			{ NULL,GRP_DEF(OPC_None ,Mod_mem | Mod_11b ,OLT_None),NULL,NULL,NULL,NULL,GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b ,OLT_None),GRP_DEF(OPC_None | OPC_F3,Mod_mem | Mod_11b ,OLT_None) },
			// 10
			{ NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL },
			// 12
			{ NULL,NULL,GRP_DEF(OPC_None | OPC_66, Mod_11b ,OLT_B),NULL,GRP_DEF(OPC_None | OPC_66, Mod_11b ,OLT_B),NULL,GRP_DEF(OPC_None | OPC_66, Mod_11b ,OLT_B),NULL },
			// 13
			{ NULL,NULL,GRP_DEF(OPC_None | OPC_66, Mod_11b ,OLT_B),NULL,GRP_DEF(OPC_None | OPC_66, Mod_11b ,OLT_B),NULL,GRP_DEF(OPC_None | OPC_66, Mod_11b ,OLT_B),NULL },
			// 14
			{ NULL,NULL,GRP_DEF(OPC_None | OPC_66, Mod_11b ,OLT_B),GRP_DEF(OPC_66, Mod_11b ,OLT_B),NULL,NULL,GRP_DEF(OPC_None | OPC_66, Mod_11b ,OLT_B),GRP_DEF(OPC_66, Mod_11b ,OLT_B) },
			// 15
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_mem | Mod_11b ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_mem | Mod_11b ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_mem | Mod_11b ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_mem | Mod_11b ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_mem ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_mem | Mod_11b ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_mem | Mod_11b ,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3, Mod_mem | Mod_11b ,OLT_None) },
			// 16
			{ GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None), GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),NULL,NULL,NULL,NULL },
			// 17
			{ NULL,GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),GRP_DEF(OPC_None | OPC_66 | OPC_F3,Mod_mem | Mod_11b,OLT_None),NULL,NULL,NULL,NULL }
		};

	}
}