/*
 * Copyright (c) 2014, 2015 The Linux Foundation. All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DT_BINDINGS_RESET_IPQ_40XX_H
#define _DT_BINDINGS_RESET_IPQ_40XX_H

#define WIFI0_CPU_INIT_RESET				0
#define WIFI0_RADIO_SRIF_RESET				1
#define WIFI0_RADIO_WARM_RESET				2
#define WIFI0_RADIO_COLD_RESET				3
#define WIFI0_CORE_WARM_RESET				4
#define WIFI0_CORE_COLD_RESET				5
#define WIFI1_CPU_INIT_RESET				6
#define WIFI1_RADIO_SRIF_RESET				7
#define WIFI1_RADIO_WARM_RESET				8
#define WIFI1_RADIO_COLD_RESET				9
#define WIFI1_CORE_WARM_RESET				10
#define WIFI1_CORE_COLD_RESET				11
#define USB3_UNIPHY_PHY_ARES				12
#define USB3_HSPHY_POR_ARES				13
#define USB3_HSPHY_S_ARES				14
#define USB2_HSPHY_POR_ARES				15
#define USB2_HSPHY_S_ARES				16
#define PCIE_PHY_AHB_ARES				17
#define PCIE_AHB_ARES					18
#define PCIE_PWR_ARES					19
#define PCIE_PIPE_STICKY_ARES				20
#define PCIE_AXI_M_STICKY_ARES				21
#define PCIE_PHY_ARES					22
#define PCIE_PARF_XPU_ARES				23
#define PCIE_AXI_S_XPU_ARES				24
#define PCIE_AXI_M_VMIDMT_ARES				25
#define PCIE_PIPE_ARES					26
#define PCIE_AXI_S_ARES					27
#define PCIE_AXI_M_ARES					28
#define ESS_RESET					29
#define GCC_BLSP1_BCR					30
#define GCC_BLSP1_QUP1_BCR				31
#define GCC_BLSP1_UART1_BCR				32
#define GCC_BLSP1_QUP2_BCR				33
#define GCC_BLSP1_UART2_BCR				34
#define GCC_BIMC_BCR					35
#define GCC_TLMM_BCR					36
#define GCC_IMEM_BCR					37
#define GCC_ESS_BCR					38
#define GCC_PRNG_BCR					39
#define GCC_BOOT_ROM_BCR				40
#define GCC_CRYPTO_BCR					41
#define GCC_SDCC1_BCR					42
#define GCC_SEC_CTRL_BCR				43
#define GCC_AUDIO_BCR					44
#define GCC_QPIC_BCR					45
#define GCC_PCIE_BCR					46
#define GCC_USB2_BCR					47
#define GCC_USB2_PHY_BCR				48
#define GCC_USB3_BCR					49
#define GCC_USB3_PHY_BCR				50
#define GCC_SYSTEM_NOC_BCR				51
#define GCC_PCNOC_BCR					52
#define GCC_DCD_BCR					53
#define GCC_SNOC_BUS_TIMEOUT0_BCR			54
#define GCC_SNOC_BUS_TIMEOUT1_BCR			55
#define GCC_SNOC_BUS_TIMEOUT2_BCR			56
#define GCC_SNOC_BUS_TIMEOUT3_BCR			57
#define GCC_PCNOC_BUS_TIMEOUT0_BCR			58
#define GCC_PCNOC_BUS_TIMEOUT1_BCR			59
#define GCC_PCNOC_BUS_TIMEOUT2_BCR			60
#define GCC_PCNOC_BUS_TIMEOUT3_BCR			61
#define GCC_PCNOC_BUS_TIMEOUT4_BCR			62
#define GCC_PCNOC_BUS_TIMEOUT5_BCR			63
#define GCC_PCNOC_BUS_TIMEOUT6_BCR			64
#define GCC_PCNOC_BUS_TIMEOUT7_BCR			65
#define GCC_PCNOC_BUS_TIMEOUT8_BCR			66
#define GCC_PCNOC_BUS_TIMEOUT9_BCR			67
#define GCC_TCSR_BCR					68
#define GCC_QDSS_BCR					69
#define GCC_MPM_BCR					70
#define GCC_SPDM_BCR					71
#define AUDIO_BLK_ARES					GCC_AUDIO_BCR
#define ESS_MAC1_ARES					72
#define ESS_MAC2_ARES					73
#define ESS_MAC3_ARES					74
#define ESS_MAC4_ARES					75
#define ESS_MAC5_ARES					76
#define ESS_PSGMII_ARES					77
#define ESS_MAC1_CLK_DIS				78
#define ESS_MAC2_CLK_DIS				79
#define ESS_MAC3_CLK_DIS				80
#define ESS_MAC4_CLK_DIS				81
#define ESS_MAC5_CLK_DIS				82
#endif
