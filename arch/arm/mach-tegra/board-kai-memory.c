/*
 * Copyright (C) 2011 NVIDIA, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307, USA
 */

#include <linux/kernel.h>
#include <linux/init.h>

#include "board.h"
#include "board-kai.h"
#include "tegra3_emc.h"
#include "fuse.h"


static const struct tegra_emc_table kai_emc_tables_h5tc4g[] = {
	{
		0x32,       /* Rev 3.2 */
		25500,      /* SDRAM frequency */
		{
			0x00000001, /* EMC_RC */
			0x00000007, /* EMC_RFC */
			0x00000000, /* EMC_RAS */
			0x00000000, /* EMC_RP */
			0x00000002, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000005, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000000, /* EMC_RD_RCD */
			0x00000000, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x00000005, /* EMC_QUSE */
			0x00000004, /* EMC_QRST */
			0x00000009, /* EMC_QSAFE */
			0x0000000b, /* EMC_RDV */
			0x000000c0, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x00000030, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000007, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x00000008, /* EMC_TXSR */
			0x00000008, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000002, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x000000c7, /* EMC_TREFBW */
			0x00000006, /* EMC_QUSE_EXTRA */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000000, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00004288, /* EMC_FBIO_CFG5 */
			0x007800a4, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x000fc000, /* EMC_DLL_XFORM_DQS0 */
			0x000fc000, /* EMC_DLL_XFORM_DQS1 */
			0x000fc000, /* EMC_DLL_XFORM_DQS2 */
			0x000fc000, /* EMC_DLL_XFORM_DQS3 */
			0x000fc000, /* EMC_DLL_XFORM_DQS4 */
			0x000fc000, /* EMC_DLL_XFORM_DQS5 */
			0x000fc000, /* EMC_DLL_XFORM_DQS6 */
			0x000fc000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x000fc000, /* EMC_DLL_XFORM_DQ0 */
			0x000fc000, /* EMC_DLL_XFORM_DQ1 */
			0x000fc000, /* EMC_DLL_XFORM_DQ2 */
			0x000fc000, /* EMC_DLL_XFORM_DQ3 */
			0x000002a0, /* EMC_XM2CMDPADCTRL */
			0x0800211c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77fff884, /* EMC_XM2CLKPADCTRL */
			0x01f1f108, /* EMC_XM2COMPPADCTRL */
			0x05057404, /* EMC_XM2VTTGENPADCTRL */
			0x54000007, /* EMC_XM2VTTGENPADCTRL2 */
			0x08000168, /* EMC_XM2QUSEPADCTRL */
			0x08000000, /* EMC_XM2DQSPADCTRL3 */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00000000, /* EMC_ZCAL_INTERVAL */
			0x00000040, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0xa0f10000, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80000287, /* EMC_DYN_SELF_REF_CONTROL */
			0x00030003, /* MC_EMEM_ARB_CFG */
			0xc0000010, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000002, /* MC_EMEM_ARB_TIMING_RC */
			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06020102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0502, /* MC_EMEM_ARB_DA_COVERS */
			0x75e30303, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0xe8000000, /* EMC_FBIO_SPARE */
			0xff00ff00, /* EMC_CFG_RSV */
		},
		0x00000040, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x00000001, /* EMC_CFG.PERIODIC_QRST */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000001, /* EMC_CFG.DYN_SELF_REF */
	},
	{
		0x32,       /* Rev 3.2 */
		51000,      /* SDRAM frequency */
		{
			0x00000002, /* EMC_RC */
			0x0000000f, /* EMC_RFC */
			0x00000001, /* EMC_RAS */
			0x00000000, /* EMC_RP */
			0x00000002, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000005, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000000, /* EMC_RD_RCD */
			0x00000000, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x00000005, /* EMC_QUSE */
			0x00000004, /* EMC_QRST */
			0x00000009, /* EMC_QSAFE */
			0x0000000b, /* EMC_RDV */
			0x00000181, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x00000060, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000007, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x00000010, /* EMC_TXSR */
			0x00000010, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000003, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x0000018e, /* EMC_TREFBW */
			0x00000006, /* EMC_QUSE_EXTRA */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000000, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00004288, /* EMC_FBIO_CFG5 */
			0x007800a4, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x000fc000, /* EMC_DLL_XFORM_DQS0 */
			0x000fc000, /* EMC_DLL_XFORM_DQS1 */
			0x000fc000, /* EMC_DLL_XFORM_DQS2 */
			0x000fc000, /* EMC_DLL_XFORM_DQS3 */
			0x000fc000, /* EMC_DLL_XFORM_DQS4 */
			0x000fc000, /* EMC_DLL_XFORM_DQS5 */
			0x000fc000, /* EMC_DLL_XFORM_DQS6 */
			0x000fc000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x000fc000, /* EMC_DLL_XFORM_DQ0 */
			0x000fc000, /* EMC_DLL_XFORM_DQ1 */
			0x000fc000, /* EMC_DLL_XFORM_DQ2 */
			0x000fc000, /* EMC_DLL_XFORM_DQ3 */
			0x000002a0, /* EMC_XM2CMDPADCTRL */
			0x0800211c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77fff884, /* EMC_XM2CLKPADCTRL */
			0x01f1f108, /* EMC_XM2COMPPADCTRL */
			0x05057404, /* EMC_XM2VTTGENPADCTRL */
			0x54000007, /* EMC_XM2VTTGENPADCTRL2 */
			0x08000168, /* EMC_XM2QUSEPADCTRL */
			0x08000000, /* EMC_XM2DQSPADCTRL3 */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00000000, /* EMC_ZCAL_INTERVAL */
			0x00000040, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0xa0f10000, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x8000040b, /* EMC_DYN_SELF_REF_CONTROL */
			0x00010003, /* MC_EMEM_ARB_CFG */
			0xc0000010, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000002, /* MC_EMEM_ARB_TIMING_RC */
			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06020102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0502, /* MC_EMEM_ARB_DA_COVERS */
			0x74e30303, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0xe8000000, /* EMC_FBIO_SPARE */
			0xff00ff00, /* EMC_CFG_RSV */
		},
		0x00000040, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x00000001, /* EMC_CFG.PERIODIC_QRST */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000001, /* EMC_CFG.DYN_SELF_REF */
	},
	{
		0x32,       /* Rev 3.2 */
		102000,     /* SDRAM frequency */
		{
			0x00000005, /* EMC_RC */
			0x0000001e, /* EMC_RFC */
			0x00000003, /* EMC_RAS */
			0x00000001, /* EMC_RP */
			0x00000002, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000005, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000001, /* EMC_RD_RCD */
			0x00000001, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x00000005, /* EMC_QUSE */
			0x00000004, /* EMC_QRST */
			0x00000009, /* EMC_QSAFE */
			0x0000000b, /* EMC_RDV */
			0x00000303, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x000000c0, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000007, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x00000020, /* EMC_TXSR */
			0x00000020, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000005, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x0000031c, /* EMC_TREFBW */
			0x00000006, /* EMC_QUSE_EXTRA */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000000, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00004288, /* EMC_FBIO_CFG5 */
			0x007800a4, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x000fc000, /* EMC_DLL_XFORM_DQS0 */
			0x000fc000, /* EMC_DLL_XFORM_DQS1 */
			0x000fc000, /* EMC_DLL_XFORM_DQS2 */
			0x000fc000, /* EMC_DLL_XFORM_DQS3 */
			0x000fc000, /* EMC_DLL_XFORM_DQS4 */
			0x000fc000, /* EMC_DLL_XFORM_DQS5 */
			0x000fc000, /* EMC_DLL_XFORM_DQS6 */
			0x000fc000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x000fc000, /* EMC_DLL_XFORM_DQ0 */
			0x000fc000, /* EMC_DLL_XFORM_DQ1 */
			0x000fc000, /* EMC_DLL_XFORM_DQ2 */
			0x000fc000, /* EMC_DLL_XFORM_DQ3 */
			0x000002a0, /* EMC_XM2CMDPADCTRL */
			0x0800211c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77fff884, /* EMC_XM2CLKPADCTRL */
			0x01f1f108, /* EMC_XM2COMPPADCTRL */
			0x05057404, /* EMC_XM2VTTGENPADCTRL */
			0x54000007, /* EMC_XM2VTTGENPADCTRL2 */
			0x08000168, /* EMC_XM2QUSEPADCTRL */
			0x08000000, /* EMC_XM2DQSPADCTRL3 */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00000000, /* EMC_ZCAL_INTERVAL */
			0x00000040, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0xa0f10000, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80000713, /* EMC_DYN_SELF_REF_CONTROL */
			0x00000003, /* MC_EMEM_ARB_CFG */
			0xc0000018, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000003, /* MC_EMEM_ARB_TIMING_RC */
			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000002, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06020102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0503, /* MC_EMEM_ARB_DA_COVERS */
			0x74430504, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0xe8000000, /* EMC_FBIO_SPARE */
			0xff00ff00, /* EMC_CFG_RSV */
		},
		0x00000040, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x00000001, /* EMC_CFG.PERIODIC_QRST */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000001, /* EMC_CFG.DYN_SELF_REF */
	},
	{
		0x32,       /* Rev 3.2 */
		204000,     /* SDRAM frequency */
		{
			0x0000000a, /* EMC_RC */
			0x0000003d, /* EMC_RFC */
			0x00000007, /* EMC_RAS */
			0x00000002, /* EMC_RP */
			0x00000002, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000005, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000002, /* EMC_RD_RCD */
			0x00000002, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x00000005, /* EMC_QUSE */
			0x00000004, /* EMC_QRST */
			0x0000000a, /* EMC_QSAFE */
			0x0000000b, /* EMC_RDV */
			0x00000607, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x00000181, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000007, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x00000040, /* EMC_TXSR */
			0x00000040, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x0000000a, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x00000638, /* EMC_TREFBW */
			0x00000006, /* EMC_QUSE_EXTRA */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000000, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00004288, /* EMC_FBIO_CFG5 */
			0x004400a4, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00080000, /* EMC_DLL_XFORM_DQS0 */
			0x00080000, /* EMC_DLL_XFORM_DQS1 */
			0x00080000, /* EMC_DLL_XFORM_DQS2 */
			0x00080000, /* EMC_DLL_XFORM_DQS3 */
			0x00080000, /* EMC_DLL_XFORM_DQS4 */
			0x00080000, /* EMC_DLL_XFORM_DQS5 */
			0x00080000, /* EMC_DLL_XFORM_DQS6 */
			0x00080000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x00080000, /* EMC_DLL_XFORM_DQ0 */
			0x00080000, /* EMC_DLL_XFORM_DQ1 */
			0x00080000, /* EMC_DLL_XFORM_DQ2 */
			0x00080000, /* EMC_DLL_XFORM_DQ3 */
			0x000002a0, /* EMC_XM2CMDPADCTRL */
			0x0800211c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77fff884, /* EMC_XM2CLKPADCTRL */
			0x01f1f108, /* EMC_XM2COMPPADCTRL */
			0x05057404, /* EMC_XM2VTTGENPADCTRL */
			0x54000007, /* EMC_XM2VTTGENPADCTRL2 */
			0x08000168, /* EMC_XM2QUSEPADCTRL */
			0x08000000, /* EMC_XM2DQSPADCTRL3 */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00020000, /* EMC_ZCAL_INTERVAL */
			0x00000100, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0xa0f10000, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80000d22, /* EMC_DYN_SELF_REF_CONTROL */
			0x00000006, /* MC_EMEM_ARB_CFG */
			0xc0000025, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000005, /* MC_EMEM_ARB_TIMING_RC */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000004, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06020102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0505, /* MC_EMEM_ARB_DA_COVERS */
			0x74040a06, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0xe8000000, /* EMC_FBIO_SPARE */
			0xff00ff00, /* EMC_CFG_RSV */
		},
		0x00000040, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x00000001, /* EMC_CFG.PERIODIC_QRST */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000001, /* EMC_CFG.DYN_SELF_REF */
	},
	{
		0x32,       /* Rev 3.2 */
		333500,     /* SDRAM frequency */
		{
			0x0000000f, /* EMC_RC */
			0x00000063, /* EMC_RFC */
			0x0000000a, /* EMC_RAS */
			0x00000003, /* EMC_RP */
			0x00000003, /* EMC_R2W */
			0x00000008, /* EMC_W2R */
			0x00000002, /* EMC_R2P */
			0x00000009, /* EMC_W2P */
			0x00000003, /* EMC_RD_RCD */
			0x00000003, /* EMC_WR_RCD */
			0x00000002, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000004, /* EMC_WDV */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_QRST */
			0x0000000a, /* EMC_QSAFE */
			0x0000000c, /* EMC_RDV */
			0x000009e9, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x0000027a, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000001, /* EMC_PDEX2WR */
			0x00000008, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000007, /* EMC_AR2PDEN */
			0x0000000e, /* EMC_RW2PDEN */
			0x00000068, /* EMC_TXSR */
			0x00000200, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x0000000f, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x00000a2a, /* EMC_TREFBW */
			0x00000000, /* EMC_QUSE_EXTRA */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000000, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00007088, /* EMC_FBIO_CFG5 */
			0x002600a4, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00034000, /* EMC_DLL_XFORM_DQS0 */
			0x00034000, /* EMC_DLL_XFORM_DQS1 */
			0x00034000, /* EMC_DLL_XFORM_DQS2 */
			0x00034000, /* EMC_DLL_XFORM_DQS3 */
			0x00034000, /* EMC_DLL_XFORM_DQS4 */
			0x00034000, /* EMC_DLL_XFORM_DQS5 */
			0x00034000, /* EMC_DLL_XFORM_DQS6 */
			0x00034000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x00034000, /* EMC_DLL_XFORM_DQ0 */
			0x00034000, /* EMC_DLL_XFORM_DQ1 */
			0x00034000, /* EMC_DLL_XFORM_DQ2 */
			0x00034000, /* EMC_DLL_XFORM_DQ3 */
			0x000002a0, /* EMC_XM2CMDPADCTRL */
			0x0800013d, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77fff884, /* EMC_XM2CLKPADCTRL */
			0x01f1f508, /* EMC_XM2COMPPADCTRL */
			0x05057404, /* EMC_XM2VTTGENPADCTRL */
			0x54000007, /* EMC_XM2VTTGENPADCTRL2 */
			0x080001e8, /* EMC_XM2QUSEPADCTRL */
			0x08000021, /* EMC_XM2DQSPADCTRL3 */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00020000, /* EMC_ZCAL_INTERVAL */
			0x00000100, /* EMC_ZCAL_WAIT_CNT */
			0x015c000c, /* EMC_MRS_WAIT_CNT */
			0xa0f10000, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x800014d4, /* EMC_DYN_SELF_REF_CONTROL */
			0x0000000a, /* MC_EMEM_ARB_CFG */
			0xc000003d, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RP */
			0x00000008, /* MC_EMEM_ARB_TIMING_RC */
			0x00000004, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000007, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000007, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06030202, /* MC_EMEM_ARB_DA_TURNS */
			0x000b0608, /* MC_EMEM_ARB_DA_COVERS */
			0x70850f09, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0xe8000000, /* EMC_FBIO_SPARE */
			0xff00ff89, /* EMC_CFG_RSV */
		},
		0x00000040, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x00000000, /* EMC_CFG.PERIODIC_QRST */
		0x80000321, /* Mode Register 0 */
		0x80100002, /* Mode Register 1 */
		0x80200000, /* Mode Register 2 */
		0x00000000, /* EMC_CFG.DYN_SELF_REF */
	},
	{
		0x32,       /* Rev 3.2 */
		667000,     /* SDRAM frequency */
		{
			0x00000020, /* EMC_RC */
			0x000000c7, /* EMC_RFC */
			0x00000017, /* EMC_RAS */
			0x00000007, /* EMC_RP */
			0x00000005, /* EMC_R2W */
			0x0000000c, /* EMC_W2R */
			0x00000003, /* EMC_R2P */
			0x00000011, /* EMC_W2P */
			0x00000007, /* EMC_RD_RCD */
			0x00000007, /* EMC_WR_RCD */
			0x00000002, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000007, /* EMC_WDV */
			0x0000000a, /* EMC_QUSE */
			0x00000009, /* EMC_QRST */
			0x0000000d, /* EMC_QSAFE */
			0x00000012, /* EMC_RDV */
			0x00001412, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x00000504, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x0000000e, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x0000000c, /* EMC_AR2PDEN */
			0x00000016, /* EMC_RW2PDEN */
			0x000000cf, /* EMC_TXSR */
			0x00000200, /* EMC_TXSRDLL */
			0x00000005, /* EMC_TCKE */
			0x0000001f, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000006, /* EMC_TCLKSTABLE */
			0x00000007, /* EMC_TCLKSTOP */
			0x00001453, /* EMC_TREFBW */
			0x0000000b, /* EMC_QUSE_EXTRA */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000000, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00005088, /* EMC_FBIO_CFG5 */
			0xf00b0191, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x0000000a, /* EMC_DLL_XFORM_DQS0 */
			0x0000000a, /* EMC_DLL_XFORM_DQS1 */
			0x00000008, /* EMC_DLL_XFORM_DQS2 */
			0x0000000a, /* EMC_DLL_XFORM_DQS3 */
			0x0000000a, /* EMC_DLL_XFORM_DQS4 */
			0x0000000a, /* EMC_DLL_XFORM_DQS5 */
			0x00000008, /* EMC_DLL_XFORM_DQS6 */
			0x0000000a, /* EMC_DLL_XFORM_DQS7 */
			0x00018000, /* EMC_DLL_XFORM_QUSE0 */
			0x00018000, /* EMC_DLL_XFORM_QUSE1 */
			0x00018000, /* EMC_DLL_XFORM_QUSE2 */
			0x00018000, /* EMC_DLL_XFORM_QUSE3 */
			0x00018000, /* EMC_DLL_XFORM_QUSE4 */
			0x00018000, /* EMC_DLL_XFORM_QUSE5 */
			0x00018000, /* EMC_DLL_XFORM_QUSE6 */
			0x00018000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x0000000c, /* EMC_DLL_XFORM_DQ0 */
			0x0000000c, /* EMC_DLL_XFORM_DQ1 */
			0x0000000c, /* EMC_DLL_XFORM_DQ2 */
			0x0000000c, /* EMC_DLL_XFORM_DQ3 */
			0x000002a0, /* EMC_XM2CMDPADCTRL */
			0x0600013d, /* EMC_XM2DQSPADCTRL2 */
			0x22220000, /* EMC_XM2DQPADCTRL2 */
			0x77fff884, /* EMC_XM2CLKPADCTRL */
			0x01f1f501, /* EMC_XM2COMPPADCTRL */
			0x07077404, /* EMC_XM2VTTGENPADCTRL */
			0x54000000, /* EMC_XM2VTTGENPADCTRL2 */
			0x080001e8, /* EMC_XM2QUSEPADCTRL */
			0x06000021, /* EMC_XM2DQSPADCTRL3 */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00020000, /* EMC_ZCAL_INTERVAL */
			0x00000100, /* EMC_ZCAL_WAIT_CNT */
			0x00f8000c, /* EMC_MRS_WAIT_CNT */
			0xa0f10202, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x800028a5, /* EMC_DYN_SELF_REF_CONTROL */
			0x00000014, /* MC_EMEM_ARB_CFG */
			0xc0000079, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000003, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000004, /* MC_EMEM_ARB_TIMING_RP */
			0x00000010, /* MC_EMEM_ARB_TIMING_RC */
			0x0000000b, /* MC_EMEM_ARB_TIMING_RAS */
			0x0000000f, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x0000000b, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000004, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000008, /* MC_EMEM_ARB_TIMING_W2R */
			0x08040202, /* MC_EMEM_ARB_DA_TURNS */
			0x00130b10, /* MC_EMEM_ARB_DA_COVERS */
			0x70ea1f11, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0xe8000000, /* EMC_FBIO_SPARE */
			0xff00ff49, /* EMC_CFG_RSV */
		},
		0x00000040, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x00000001, /* EMC_CFG.PERIODIC_QRST */
		0x80000b71, /* Mode Register 0 */
		0x80100002, /* Mode Register 1 */
		0x80200018, /* Mode Register 2 */
		0x00000000, /* EMC_CFG.DYN_SELF_REF */
	},
};

int kai_emc_init(void)
{
	tegra_init_emc(kai_emc_tables_h5tc4g,
		       ARRAY_SIZE(kai_emc_tables_h5tc4g));

	return 0;
}
