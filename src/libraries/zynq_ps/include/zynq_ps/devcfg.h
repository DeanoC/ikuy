#pragma once
// Copyright Deano Calver
// SPDX-License-Identifier: MIT
// Device (PL) Config
// Auto-generated on Fri Sep 25 10:29:41 EEST 2020

#include <stdint.h>

// 1 banks of devcfg chips
#define devcfg_BASE_ADDR 0xf8007000U

// Control Register
#define devcfg_XDCFG_CTRL_OFFSET 0x00000000U
#define devcfg_XDCFG_CTRL_FORCE_RST_LSHIFT 0x0000001fU
#define devcfg_XDCFG_CTRL_FORCE_RST 0x80000000U
#define devcfg_XDCFG_CTRL_FORCE_RST_MASK 0x80000000U
#define devcfg_XDCFG_CTRL_PCFG_PROG_B_LSHIFT 0x0000001eU
#define devcfg_XDCFG_CTRL_PCFG_PROG_B 0x40000000U
#define devcfg_XDCFG_CTRL_PCFG_PROG_B_MASK 0x40000000U
#define devcfg_XDCFG_CTRL_PCFG_POR_CNT_4K_LSHIFT 0x0000001dU
#define devcfg_XDCFG_CTRL_PCFG_POR_CNT_4K 0x20000000U
#define devcfg_XDCFG_CTRL_PCFG_POR_CNT_4K_MASK 0x20000000U
#define devcfg_XDCFG_CTRL_reserved_0_LSHIFT 0x0000001cU
#define devcfg_XDCFG_CTRL_reserved_0 0x10000000U
#define devcfg_XDCFG_CTRL_reserved_0_MASK 0x10000000U
#define devcfg_XDCFG_CTRL_PCAP_PR_LSHIFT 0x0000001bU
#define devcfg_XDCFG_CTRL_PCAP_PR  0x8000000U
#define devcfg_XDCFG_CTRL_PCAP_PR_MASK 0x08000000U
#define devcfg_XDCFG_CTRL_PCAP_MODE_LSHIFT 0x0000001aU
#define devcfg_XDCFG_CTRL_PCAP_MODE  0x4000000U
#define devcfg_XDCFG_CTRL_PCAP_MODE_MASK 0x04000000U
#define devcfg_XDCFG_CTRL_PCAP_RATE_EN_LSHIFT 0x00000019U
#define devcfg_XDCFG_CTRL_PCAP_RATE_EN  0x2000000U
#define devcfg_XDCFG_CTRL_PCAP_RATE_EN_MASK 0x02000000U
#define devcfg_XDCFG_CTRL_MULTIBOOT_EN_LSHIFT 0x00000018U
#define devcfg_XDCFG_CTRL_MULTIBOOT_EN  0x1000000U
#define devcfg_XDCFG_CTRL_MULTIBOOT_EN_MASK 0x01000000U
#define devcfg_XDCFG_CTRL_JTAG_CHAIN_DIS_LSHIFT 0x00000017U
#define devcfg_XDCFG_CTRL_JTAG_CHAIN_DIS   0x800000U
#define devcfg_XDCFG_CTRL_JTAG_CHAIN_DIS_MASK 0x00800000U
#define devcfg_XDCFG_CTRL_reserved_1_LSHIFT 0x00000010U
#define devcfg_XDCFG_CTRL_reserved_1_MASK 0x007f0000U
#define devcfg_XDCFG_CTRL_reserved_2_LSHIFT 0x0000000fU
#define devcfg_XDCFG_CTRL_reserved_2     0x8000U
#define devcfg_XDCFG_CTRL_reserved_2_MASK 0x00008000U
#define devcfg_XDCFG_CTRL_reserved_3_LSHIFT 0x0000000eU
#define devcfg_XDCFG_CTRL_reserved_3     0x4000U
#define devcfg_XDCFG_CTRL_reserved_3_MASK 0x00004000U
#define devcfg_XDCFG_CTRL_reserved_4_LSHIFT 0x0000000dU
#define devcfg_XDCFG_CTRL_reserved_4     0x2000U
#define devcfg_XDCFG_CTRL_reserved_4_MASK 0x00002000U
#define devcfg_XDCFG_CTRL_PCFG_AES_FUSE_LSHIFT 0x0000000cU
#define devcfg_XDCFG_CTRL_PCFG_AES_FUSE     0x1000U
#define devcfg_XDCFG_CTRL_PCFG_AES_FUSE_MASK 0x00001000U
#define devcfg_XDCFG_CTRL_PCFG_AES_EN_LSHIFT 0x00000009U
#define devcfg_XDCFG_CTRL_PCFG_AES_EN_MASK 0x00000e00U
#define devcfg_XDCFG_CTRL_SEU_EN_LSHIFT 0x00000008U
#define devcfg_XDCFG_CTRL_SEU_EN      0x100U
#define devcfg_XDCFG_CTRL_SEU_EN_MASK 0x00000100U
#define devcfg_XDCFG_CTRL_SEC_EN_LSHIFT 0x00000007U
#define devcfg_XDCFG_CTRL_SEC_EN       0x80U
#define devcfg_XDCFG_CTRL_SEC_EN_MASK 0x00000080U
#define devcfg_XDCFG_CTRL_SPNIDEN_LSHIFT 0x00000006U
#define devcfg_XDCFG_CTRL_SPNIDEN       0x40U
#define devcfg_XDCFG_CTRL_SPNIDEN_MASK 0x00000040U
#define devcfg_XDCFG_CTRL_SPIDEN_LSHIFT 0x00000005U
#define devcfg_XDCFG_CTRL_SPIDEN       0x20U
#define devcfg_XDCFG_CTRL_SPIDEN_MASK 0x00000020U
#define devcfg_XDCFG_CTRL_NIDEN_LSHIFT 0x00000004U
#define devcfg_XDCFG_CTRL_NIDEN       0x10U
#define devcfg_XDCFG_CTRL_NIDEN_MASK 0x00000010U
#define devcfg_XDCFG_CTRL_DBGEN_LSHIFT 0x00000003U
#define devcfg_XDCFG_CTRL_DBGEN        0x8U
#define devcfg_XDCFG_CTRL_DBGEN_MASK 0x00000008U
#define devcfg_XDCFG_CTRL_DAP_EN_LSHIFT 0x00000000U
#define devcfg_XDCFG_CTRL_DAP_EN_MASK 0x00000007U
#define devcfg_XDCFG_CTRL_MASK 0xef801fffU

// Locks for the Control Register.
#define devcfg_XDCFG_LOCK_OFFSET 0x00000004U
#define devcfg_XDCFG_LOCK_reserved_0_LSHIFT 0x00000005U
#define devcfg_XDCFG_LOCK_reserved_0_MASK 0xffffffe0U
#define devcfg_XDCFG_LOCK_AES_FUSE_LOCK_LSHIFT 0x00000004U
#define devcfg_XDCFG_LOCK_AES_FUSE_LOCK       0x10U
#define devcfg_XDCFG_LOCK_AES_FUSE_LOCK_MASK 0x00000010U
#define devcfg_XDCFG_LOCK_AES_EN_LSHIFT 0x00000003U
#define devcfg_XDCFG_LOCK_AES_EN        0x8U
#define devcfg_XDCFG_LOCK_AES_EN_MASK 0x00000008U
#define devcfg_XDCFG_LOCK_SEU_LSHIFT 0x00000002U
#define devcfg_XDCFG_LOCK_SEU        0x4U
#define devcfg_XDCFG_LOCK_SEU_MASK 0x00000004U
#define devcfg_XDCFG_LOCK_SEC_LSHIFT 0x00000001U
#define devcfg_XDCFG_LOCK_SEC        0x2U
#define devcfg_XDCFG_LOCK_SEC_MASK 0x00000002U
#define devcfg_XDCFG_LOCK_DBG_LSHIFT 0x00000000U
#define devcfg_XDCFG_LOCK_DBG        0x1U
#define devcfg_XDCFG_LOCK_DBG_MASK 0x00000001U
#define devcfg_XDCFG_LOCK_MASK 0x0000001fU

// Configuration Register
#define devcfg_XDCFG_CFG_OFFSET 0x00000008U
#define devcfg_XDCFG_CFG_reserved_0_LSHIFT 0x0000000cU
#define devcfg_XDCFG_CFG_reserved_0_MASK 0xfffff000U
#define devcfg_XDCFG_CFG_RFIFO_TH_LSHIFT 0x0000000aU
#define devcfg_XDCFG_CFG_RFIFO_TH_MASK 0x00000c00U
#define devcfg_XDCFG_CFG_WFIFO_TH_LSHIFT 0x00000008U
#define devcfg_XDCFG_CFG_WFIFO_TH_MASK 0x00000300U
#define devcfg_XDCFG_CFG_RCLK_EDGE_LSHIFT 0x00000007U
#define devcfg_XDCFG_CFG_RCLK_EDGE       0x80U
#define devcfg_XDCFG_CFG_RCLK_EDGE_MASK 0x00000080U
#define devcfg_XDCFG_CFG_WCLK_EDGE_LSHIFT 0x00000006U
#define devcfg_XDCFG_CFG_WCLK_EDGE       0x40U
#define devcfg_XDCFG_CFG_WCLK_EDGE_MASK 0x00000040U
#define devcfg_XDCFG_CFG_DISABLE_SRC_INC_LSHIFT 0x00000005U
#define devcfg_XDCFG_CFG_DISABLE_SRC_INC       0x20U
#define devcfg_XDCFG_CFG_DISABLE_SRC_INC_MASK 0x00000020U
#define devcfg_XDCFG_CFG_DISABLE_DST_INC_LSHIFT 0x00000004U
#define devcfg_XDCFG_CFG_DISABLE_DST_INC       0x10U
#define devcfg_XDCFG_CFG_DISABLE_DST_INC_MASK 0x00000010U
#define devcfg_XDCFG_CFG_reserved_1_LSHIFT 0x00000003U
#define devcfg_XDCFG_CFG_reserved_1        0x8U
#define devcfg_XDCFG_CFG_reserved_1_MASK 0x00000008U
#define devcfg_XDCFG_CFG_reserved_2_LSHIFT 0x00000002U
#define devcfg_XDCFG_CFG_reserved_2        0x4U
#define devcfg_XDCFG_CFG_reserved_2_MASK 0x00000004U
#define devcfg_XDCFG_CFG_reserved_3_LSHIFT 0x00000001U
#define devcfg_XDCFG_CFG_reserved_3        0x2U
#define devcfg_XDCFG_CFG_reserved_3_MASK 0x00000002U
#define devcfg_XDCFG_CFG_reserved_4_LSHIFT 0x00000000U
#define devcfg_XDCFG_CFG_reserved_4        0x1U
#define devcfg_XDCFG_CFG_reserved_4_MASK 0x00000001U
#define devcfg_XDCFG_CFG_MASK 0x00000ff0U

// Interrupt Status
#define devcfg_XDCFG_INT_STS_OFFSET 0x0000000cU
#define devcfg_XDCFG_INT_STS_PSS_GTS_USR_B_INT_LSHIFT 0x0000001fU
#define devcfg_XDCFG_INT_STS_PSS_GTS_USR_B_INT 0x80000000U
#define devcfg_XDCFG_INT_STS_PSS_GTS_USR_B_INT_MASK 0x80000000U
#define devcfg_XDCFG_INT_STS_PSS_FST_CFG_B_INT_LSHIFT 0x0000001eU
#define devcfg_XDCFG_INT_STS_PSS_FST_CFG_B_INT 0x40000000U
#define devcfg_XDCFG_INT_STS_PSS_FST_CFG_B_INT_MASK 0x40000000U
#define devcfg_XDCFG_INT_STS_PSS_GPWRDWN_B_INT_LSHIFT 0x0000001dU
#define devcfg_XDCFG_INT_STS_PSS_GPWRDWN_B_INT 0x20000000U
#define devcfg_XDCFG_INT_STS_PSS_GPWRDWN_B_INT_MASK 0x20000000U
#define devcfg_XDCFG_INT_STS_PSS_GTS_CFG_B_INT_LSHIFT 0x0000001cU
#define devcfg_XDCFG_INT_STS_PSS_GTS_CFG_B_INT 0x10000000U
#define devcfg_XDCFG_INT_STS_PSS_GTS_CFG_B_INT_MASK 0x10000000U
#define devcfg_XDCFG_INT_STS_PSS_CFG_RESET_B_INT_LSHIFT 0x0000001bU
#define devcfg_XDCFG_INT_STS_PSS_CFG_RESET_B_INT  0x8000000U
#define devcfg_XDCFG_INT_STS_PSS_CFG_RESET_B_INT_MASK 0x08000000U
#define devcfg_XDCFG_INT_STS_reserved_0_LSHIFT 0x00000018U
#define devcfg_XDCFG_INT_STS_reserved_0_MASK 0x07000000U
#define devcfg_XDCFG_INT_STS_IXR_AXI_WTO_LSHIFT 0x00000017U
#define devcfg_XDCFG_INT_STS_IXR_AXI_WTO   0x800000U
#define devcfg_XDCFG_INT_STS_IXR_AXI_WTO_MASK 0x00800000U
#define devcfg_XDCFG_INT_STS_IXR_AXI_WERR_LSHIFT 0x00000016U
#define devcfg_XDCFG_INT_STS_IXR_AXI_WERR   0x400000U
#define devcfg_XDCFG_INT_STS_IXR_AXI_WERR_MASK 0x00400000U
#define devcfg_XDCFG_INT_STS_IXR_AXI_RTO_LSHIFT 0x00000015U
#define devcfg_XDCFG_INT_STS_IXR_AXI_RTO   0x200000U
#define devcfg_XDCFG_INT_STS_IXR_AXI_RTO_MASK 0x00200000U
#define devcfg_XDCFG_INT_STS_IXR_AXI_RERR_LSHIFT 0x00000014U
#define devcfg_XDCFG_INT_STS_IXR_AXI_RERR   0x100000U
#define devcfg_XDCFG_INT_STS_IXR_AXI_RERR_MASK 0x00100000U
#define devcfg_XDCFG_INT_STS_reserved_1_LSHIFT 0x00000013U
#define devcfg_XDCFG_INT_STS_reserved_1    0x80000U
#define devcfg_XDCFG_INT_STS_reserved_1_MASK 0x00080000U
#define devcfg_XDCFG_INT_STS_IXR_RX_FIFO_OV_LSHIFT 0x00000012U
#define devcfg_XDCFG_INT_STS_IXR_RX_FIFO_OV    0x40000U
#define devcfg_XDCFG_INT_STS_IXR_RX_FIFO_OV_MASK 0x00040000U
#define devcfg_XDCFG_INT_STS_IXR_WR_FIFO_LVL_LSHIFT 0x00000011U
#define devcfg_XDCFG_INT_STS_IXR_WR_FIFO_LVL    0x20000U
#define devcfg_XDCFG_INT_STS_IXR_WR_FIFO_LVL_MASK 0x00020000U
#define devcfg_XDCFG_INT_STS_IXR_RD_FIFO_LVL_LSHIFT 0x00000010U
#define devcfg_XDCFG_INT_STS_IXR_RD_FIFO_LVL    0x10000U
#define devcfg_XDCFG_INT_STS_IXR_RD_FIFO_LVL_MASK 0x00010000U
#define devcfg_XDCFG_INT_STS_IXR_DMA_CMD_ERR_LSHIFT 0x0000000fU
#define devcfg_XDCFG_INT_STS_IXR_DMA_CMD_ERR     0x8000U
#define devcfg_XDCFG_INT_STS_IXR_DMA_CMD_ERR_MASK 0x00008000U
#define devcfg_XDCFG_INT_STS_IXR_DMA_Q_OV_LSHIFT 0x0000000eU
#define devcfg_XDCFG_INT_STS_IXR_DMA_Q_OV     0x4000U
#define devcfg_XDCFG_INT_STS_IXR_DMA_Q_OV_MASK 0x00004000U
#define devcfg_XDCFG_INT_STS_IXR_DMA_DONE_LSHIFT 0x0000000dU
#define devcfg_XDCFG_INT_STS_IXR_DMA_DONE     0x2000U
#define devcfg_XDCFG_INT_STS_IXR_DMA_DONE_MASK 0x00002000U
#define devcfg_XDCFG_INT_STS_IXR_D_P_DONE_LSHIFT 0x0000000cU
#define devcfg_XDCFG_INT_STS_IXR_D_P_DONE     0x1000U
#define devcfg_XDCFG_INT_STS_IXR_D_P_DONE_MASK 0x00001000U
#define devcfg_XDCFG_INT_STS_IXR_P2D_LEN_ERR_LSHIFT 0x0000000bU
#define devcfg_XDCFG_INT_STS_IXR_P2D_LEN_ERR      0x800U
#define devcfg_XDCFG_INT_STS_IXR_P2D_LEN_ERR_MASK 0x00000800U
#define devcfg_XDCFG_INT_STS_reserved_2_LSHIFT 0x00000007U
#define devcfg_XDCFG_INT_STS_reserved_2_MASK 0x00000780U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_HMAC_ERR_LSHIFT 0x00000006U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_HMAC_ERR       0x40U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_HMAC_ERR_MASK 0x00000040U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_SEU_ERR_LSHIFT 0x00000005U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_SEU_ERR       0x20U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_SEU_ERR_MASK 0x00000020U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_POR_B_LSHIFT 0x00000004U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_POR_B       0x10U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_POR_B_MASK 0x00000010U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_CFG_RST_LSHIFT 0x00000003U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_CFG_RST        0x8U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_CFG_RST_MASK 0x00000008U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_DONE_LSHIFT 0x00000002U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_DONE        0x4U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_DONE_MASK 0x00000004U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_INIT_PE_LSHIFT 0x00000001U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_INIT_PE        0x2U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_INIT_PE_MASK 0x00000002U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_INIT_NE_LSHIFT 0x00000000U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_INIT_NE        0x1U
#define devcfg_XDCFG_INT_STS_IXR_PCFG_INIT_NE_MASK 0x00000001U
#define devcfg_XDCFG_INT_STS_MASK 0xf8f7f87fU

// Interrupt Mask.
#define devcfg_XDCFG_INT_MASK_OFFSET 0x00000010U
#define devcfg_XDCFG_INT_MASK_M_PSS_GTS_USR_B_INT_LSHIFT 0x0000001fU
#define devcfg_XDCFG_INT_MASK_M_PSS_GTS_USR_B_INT 0x80000000U
#define devcfg_XDCFG_INT_MASK_M_PSS_GTS_USR_B_INT_MASK 0x80000000U
#define devcfg_XDCFG_INT_MASK_M_PSS_FST_CFG_B_INT_LSHIFT 0x0000001eU
#define devcfg_XDCFG_INT_MASK_M_PSS_FST_CFG_B_INT 0x40000000U
#define devcfg_XDCFG_INT_MASK_M_PSS_FST_CFG_B_INT_MASK 0x40000000U
#define devcfg_XDCFG_INT_MASK_M_PSS_GPWRDWN_B_INT_LSHIFT 0x0000001dU
#define devcfg_XDCFG_INT_MASK_M_PSS_GPWRDWN_B_INT 0x20000000U
#define devcfg_XDCFG_INT_MASK_M_PSS_GPWRDWN_B_INT_MASK 0x20000000U
#define devcfg_XDCFG_INT_MASK_M_PSS_GTS_CFG_B_INT_LSHIFT 0x0000001cU
#define devcfg_XDCFG_INT_MASK_M_PSS_GTS_CFG_B_INT 0x10000000U
#define devcfg_XDCFG_INT_MASK_M_PSS_GTS_CFG_B_INT_MASK 0x10000000U
#define devcfg_XDCFG_INT_MASK_M_PSS_CFG_RESET_B_INT_LSHIFT 0x0000001bU
#define devcfg_XDCFG_INT_MASK_M_PSS_CFG_RESET_B_INT  0x8000000U
#define devcfg_XDCFG_INT_MASK_M_PSS_CFG_RESET_B_INT_MASK 0x08000000U
#define devcfg_XDCFG_INT_MASK_reserved_0_LSHIFT 0x00000018U
#define devcfg_XDCFG_INT_MASK_reserved_0_MASK 0x07000000U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_WTO_LSHIFT 0x00000017U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_WTO   0x800000U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_WTO_MASK 0x00800000U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_WERR_LSHIFT 0x00000016U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_WERR   0x400000U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_WERR_MASK 0x00400000U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_RTO_LSHIFT 0x00000015U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_RTO   0x200000U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_RTO_MASK 0x00200000U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_RERR_LSHIFT 0x00000014U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_RERR   0x100000U
#define devcfg_XDCFG_INT_MASK_IXR_AXI_RERR_MASK 0x00100000U
#define devcfg_XDCFG_INT_MASK_reserved_1_LSHIFT 0x00000013U
#define devcfg_XDCFG_INT_MASK_reserved_1    0x80000U
#define devcfg_XDCFG_INT_MASK_reserved_1_MASK 0x00080000U
#define devcfg_XDCFG_INT_MASK_IXR_RX_FIFO_OV_LSHIFT 0x00000012U
#define devcfg_XDCFG_INT_MASK_IXR_RX_FIFO_OV    0x40000U
#define devcfg_XDCFG_INT_MASK_IXR_RX_FIFO_OV_MASK 0x00040000U
#define devcfg_XDCFG_INT_MASK_IXR_WR_FIFO_LVL_LSHIFT 0x00000011U
#define devcfg_XDCFG_INT_MASK_IXR_WR_FIFO_LVL    0x20000U
#define devcfg_XDCFG_INT_MASK_IXR_WR_FIFO_LVL_MASK 0x00020000U
#define devcfg_XDCFG_INT_MASK_IXR_RD_FIFO_LVL_LSHIFT 0x00000010U
#define devcfg_XDCFG_INT_MASK_IXR_RD_FIFO_LVL    0x10000U
#define devcfg_XDCFG_INT_MASK_IXR_RD_FIFO_LVL_MASK 0x00010000U
#define devcfg_XDCFG_INT_MASK_IXR_DMA_CMD_ERR_LSHIFT 0x0000000fU
#define devcfg_XDCFG_INT_MASK_IXR_DMA_CMD_ERR     0x8000U
#define devcfg_XDCFG_INT_MASK_IXR_DMA_CMD_ERR_MASK 0x00008000U
#define devcfg_XDCFG_INT_MASK_IXR_DMA_Q_OV_LSHIFT 0x0000000eU
#define devcfg_XDCFG_INT_MASK_IXR_DMA_Q_OV     0x4000U
#define devcfg_XDCFG_INT_MASK_IXR_DMA_Q_OV_MASK 0x00004000U
#define devcfg_XDCFG_INT_MASK_IXR_DMA_DONE_LSHIFT 0x0000000dU
#define devcfg_XDCFG_INT_MASK_IXR_DMA_DONE     0x2000U
#define devcfg_XDCFG_INT_MASK_IXR_DMA_DONE_MASK 0x00002000U
#define devcfg_XDCFG_INT_MASK_IXR_D_P_DONE_LSHIFT 0x0000000cU
#define devcfg_XDCFG_INT_MASK_IXR_D_P_DONE     0x1000U
#define devcfg_XDCFG_INT_MASK_IXR_D_P_DONE_MASK 0x00001000U
#define devcfg_XDCFG_INT_MASK_IXR_P2D_LEN_ERR_LSHIFT 0x0000000bU
#define devcfg_XDCFG_INT_MASK_IXR_P2D_LEN_ERR      0x800U
#define devcfg_XDCFG_INT_MASK_IXR_P2D_LEN_ERR_MASK 0x00000800U
#define devcfg_XDCFG_INT_MASK_reserved_2_LSHIFT 0x00000007U
#define devcfg_XDCFG_INT_MASK_reserved_2_MASK 0x00000780U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_HMAC_ERR_LSHIFT 0x00000006U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_HMAC_ERR       0x40U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_HMAC_ERR_MASK 0x00000040U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_SEU_ERR_LSHIFT 0x00000005U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_SEU_ERR       0x20U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_SEU_ERR_MASK 0x00000020U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_POR_B_LSHIFT 0x00000004U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_POR_B       0x10U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_POR_B_MASK 0x00000010U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_CFG_RST_LSHIFT 0x00000003U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_CFG_RST        0x8U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_CFG_RST_MASK 0x00000008U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_DONE_LSHIFT 0x00000002U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_DONE        0x4U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_DONE_MASK 0x00000004U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_INIT_PE_LSHIFT 0x00000001U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_INIT_PE        0x2U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_INIT_PE_MASK 0x00000002U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_INIT_NE_LSHIFT 0x00000000U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_INIT_NE        0x1U
#define devcfg_XDCFG_INT_MASK_IXR_PCFG_INIT_NE_MASK 0x00000001U
#define devcfg_XDCFG_INT_MASK_MASK 0xf8f7f87fU

// Miscellaneous Status.
#define devcfg_XDCFG_STATUS_OFFSET 0x00000014U
#define devcfg_XDCFG_STATUS_DMA_CMD_Q_F_LSHIFT 0x0000001fU
#define devcfg_XDCFG_STATUS_DMA_CMD_Q_F 0x80000000U
#define devcfg_XDCFG_STATUS_DMA_CMD_Q_F_MASK 0x80000000U
#define devcfg_XDCFG_STATUS_DMA_CMD_Q_E_LSHIFT 0x0000001eU
#define devcfg_XDCFG_STATUS_DMA_CMD_Q_E 0x40000000U
#define devcfg_XDCFG_STATUS_DMA_CMD_Q_E_MASK 0x40000000U
#define devcfg_XDCFG_STATUS_DMA_DONE_CNT_LSHIFT 0x0000001cU
#define devcfg_XDCFG_STATUS_DMA_DONE_CNT_MASK 0x30000000U
#define devcfg_XDCFG_STATUS_reserved_0_LSHIFT 0x00000019U
#define devcfg_XDCFG_STATUS_reserved_0_MASK 0x0e000000U
#define devcfg_XDCFG_STATUS_RX_FIFO_LVL_LSHIFT 0x00000014U
#define devcfg_XDCFG_STATUS_RX_FIFO_LVL_MASK 0x01f00000U
#define devcfg_XDCFG_STATUS_reserved_1_LSHIFT 0x00000013U
#define devcfg_XDCFG_STATUS_reserved_1    0x80000U
#define devcfg_XDCFG_STATUS_reserved_1_MASK 0x00080000U
#define devcfg_XDCFG_STATUS_TX_FIFO_LVL_LSHIFT 0x0000000cU
#define devcfg_XDCFG_STATUS_TX_FIFO_LVL_MASK 0x0007f000U
#define devcfg_XDCFG_STATUS_PSS_GTS_USR_B_LSHIFT 0x0000000bU
#define devcfg_XDCFG_STATUS_PSS_GTS_USR_B      0x800U
#define devcfg_XDCFG_STATUS_PSS_GTS_USR_B_MASK 0x00000800U
#define devcfg_XDCFG_STATUS_PSS_FST_CFG_B_LSHIFT 0x0000000aU
#define devcfg_XDCFG_STATUS_PSS_FST_CFG_B      0x400U
#define devcfg_XDCFG_STATUS_PSS_FST_CFG_B_MASK 0x00000400U
#define devcfg_XDCFG_STATUS_PSS_GPWRDWN_B_LSHIFT 0x00000009U
#define devcfg_XDCFG_STATUS_PSS_GPWRDWN_B      0x200U
#define devcfg_XDCFG_STATUS_PSS_GPWRDWN_B_MASK 0x00000200U
#define devcfg_XDCFG_STATUS_PSS_GTS_CFG_B_LSHIFT 0x00000008U
#define devcfg_XDCFG_STATUS_PSS_GTS_CFG_B      0x100U
#define devcfg_XDCFG_STATUS_PSS_GTS_CFG_B_MASK 0x00000100U
#define devcfg_XDCFG_STATUS_SECURE_RST_LSHIFT 0x00000007U
#define devcfg_XDCFG_STATUS_SECURE_RST       0x80U
#define devcfg_XDCFG_STATUS_SECURE_RST_MASK 0x00000080U
#define devcfg_XDCFG_STATUS_ILLEGAL_APB_ACCESS_LSHIFT 0x00000006U
#define devcfg_XDCFG_STATUS_ILLEGAL_APB_ACCESS       0x40U
#define devcfg_XDCFG_STATUS_ILLEGAL_APB_ACCESS_MASK 0x00000040U
#define devcfg_XDCFG_STATUS_PSS_CFG_RESET_B_LSHIFT 0x00000005U
#define devcfg_XDCFG_STATUS_PSS_CFG_RESET_B       0x20U
#define devcfg_XDCFG_STATUS_PSS_CFG_RESET_B_MASK 0x00000020U
#define devcfg_XDCFG_STATUS_PCFG_INIT_LSHIFT 0x00000004U
#define devcfg_XDCFG_STATUS_PCFG_INIT       0x10U
#define devcfg_XDCFG_STATUS_PCFG_INIT_MASK 0x00000010U
#define devcfg_XDCFG_STATUS_EFUSE_SW_RESERVE_LSHIFT 0x00000003U
#define devcfg_XDCFG_STATUS_EFUSE_SW_RESERVE        0x8U
#define devcfg_XDCFG_STATUS_EFUSE_SW_RESERVE_MASK 0x00000008U
#define devcfg_XDCFG_STATUS_EFUSE_SEC_EN_LSHIFT 0x00000002U
#define devcfg_XDCFG_STATUS_EFUSE_SEC_EN        0x4U
#define devcfg_XDCFG_STATUS_EFUSE_SEC_EN_MASK 0x00000004U
#define devcfg_XDCFG_STATUS_EFUSE_JTAG_DIS_LSHIFT 0x00000001U
#define devcfg_XDCFG_STATUS_EFUSE_JTAG_DIS        0x2U
#define devcfg_XDCFG_STATUS_EFUSE_JTAG_DIS_MASK 0x00000002U
#define devcfg_XDCFG_STATUS_reserved_2_LSHIFT 0x00000000U
#define devcfg_XDCFG_STATUS_reserved_2        0x1U
#define devcfg_XDCFG_STATUS_reserved_2_MASK 0x00000001U
#define devcfg_XDCFG_STATUS_MASK 0xf1f7fffeU

// DMA Source Address.
#define devcfg_XDCFG_DMA_SRC_ADDR_OFFSET 0x00000018U
#define devcfg_XDCFG_DMA_SRC_ADDR_SRC_ADDR_LSHIFT 0x00000000U
#define devcfg_XDCFG_DMA_SRC_ADDR_SRC_ADDR_MASK 0x00000000U

// DMA Destination Address.
#define devcfg_XDCFG_DMA_DEST_ADDR_OFFSET 0x0000001cU
#define devcfg_XDCFG_DMA_DEST_ADDR_DST_ADDR_LSHIFT 0x00000000U
#define devcfg_XDCFG_DMA_DEST_ADDR_DST_ADDR_MASK 0x00000000U

// DMA Source Transfer Length.
#define devcfg_XDCFG_DMA_SRC_LEN_OFFSET 0x00000020U
#define devcfg_XDCFG_DMA_SRC_LEN_reserved_0_LSHIFT 0x0000001bU
#define devcfg_XDCFG_DMA_SRC_LEN_reserved_0_MASK 0xf8000000U
#define devcfg_XDCFG_DMA_SRC_LEN_DMA_LEN_LSHIFT 0x00000000U
#define devcfg_XDCFG_DMA_SRC_LEN_DMA_LEN_MASK 0x07ffffffU
#define devcfg_XDCFG_DMA_SRC_LEN_MASK 0x07ffffffU

// DMA Destination Transfer Length.
#define devcfg_XDCFG_DMA_DEST_LEN_OFFSET 0x00000024U
#define devcfg_XDCFG_DMA_DEST_LEN_reserved_0_LSHIFT 0x0000001bU
#define devcfg_XDCFG_DMA_DEST_LEN_reserved_0_MASK 0xf8000000U
#define devcfg_XDCFG_DMA_DEST_LEN_DMA_LEN_LSHIFT 0x00000000U
#define devcfg_XDCFG_DMA_DEST_LEN_DMA_LEN_MASK 0x07ffffffU
#define devcfg_XDCFG_DMA_DEST_LEN_MASK 0x07ffffffU

// Multi-Boot Address Pointer.
#define devcfg_XDCFG_MULTIBOOT_ADDR_OFFSET 0x0000002cU
#define devcfg_XDCFG_MULTIBOOT_ADDR_MULTIBOOT_ADDR_LSHIFT 0x00000000U
#define devcfg_XDCFG_MULTIBOOT_ADDR_MULTIBOOT_ADDR_MASK 0x00001fffU
#define devcfg_XDCFG_MULTIBOOT_ADDR_MASK 0x00001fffU

// Unlock Control.
#define devcfg_XDCFG_UNLOCK_OFFSET 0x00000034U
#define devcfg_XDCFG_UNLOCK_UNLOCK_LSHIFT 0x00000000U
#define devcfg_XDCFG_UNLOCK_UNLOCK_MASK 0x00000000U

// Miscellaneous Control.
#define devcfg_XDCFG_MCTRL_OFFSET 0x00000080U
#define devcfg_XDCFG_MCTRL_PS_VERSION_LSHIFT 0x0000001cU
#define devcfg_XDCFG_MCTRL_PS_VERSION_MASK 0xf0000000U
#define devcfg_XDCFG_MCTRL_reserved_0_LSHIFT 0x0000001bU
#define devcfg_XDCFG_MCTRL_reserved_0  0x8000000U
#define devcfg_XDCFG_MCTRL_reserved_0_MASK 0x08000000U
#define devcfg_XDCFG_MCTRL_reserved_1_LSHIFT 0x0000001aU
#define devcfg_XDCFG_MCTRL_reserved_1  0x4000000U
#define devcfg_XDCFG_MCTRL_reserved_1_MASK 0x04000000U
#define devcfg_XDCFG_MCTRL_reserved_2_LSHIFT 0x00000019U
#define devcfg_XDCFG_MCTRL_reserved_2  0x2000000U
#define devcfg_XDCFG_MCTRL_reserved_2_MASK 0x02000000U
#define devcfg_XDCFG_MCTRL_reserved_3_LSHIFT 0x00000018U
#define devcfg_XDCFG_MCTRL_reserved_3  0x1000000U
#define devcfg_XDCFG_MCTRL_reserved_3_MASK 0x01000000U
#define devcfg_XDCFG_MCTRL_reserved_4_LSHIFT 0x00000017U
#define devcfg_XDCFG_MCTRL_reserved_4   0x800000U
#define devcfg_XDCFG_MCTRL_reserved_4_MASK 0x00800000U
#define devcfg_XDCFG_MCTRL_reserved_5_LSHIFT 0x0000000eU
#define devcfg_XDCFG_MCTRL_reserved_5_MASK 0x007fc000U
#define devcfg_XDCFG_MCTRL_reserved_6_LSHIFT 0x0000000dU
#define devcfg_XDCFG_MCTRL_reserved_6     0x2000U
#define devcfg_XDCFG_MCTRL_reserved_6_MASK 0x00002000U
#define devcfg_XDCFG_MCTRL_reserved_7_LSHIFT 0x0000000cU
#define devcfg_XDCFG_MCTRL_reserved_7     0x1000U
#define devcfg_XDCFG_MCTRL_reserved_7_MASK 0x00001000U
#define devcfg_XDCFG_MCTRL_reserved_8_LSHIFT 0x00000009U
#define devcfg_XDCFG_MCTRL_reserved_8_MASK 0x00000e00U
#define devcfg_XDCFG_MCTRL_PCFG_POR_B_LSHIFT 0x00000008U
#define devcfg_XDCFG_MCTRL_PCFG_POR_B      0x100U
#define devcfg_XDCFG_MCTRL_PCFG_POR_B_MASK 0x00000100U
#define devcfg_XDCFG_MCTRL_reserved_9_LSHIFT 0x00000005U
#define devcfg_XDCFG_MCTRL_reserved_9_MASK 0x000000e0U
#define devcfg_XDCFG_MCTRL_PCAP_LPBK_LSHIFT 0x00000004U
#define devcfg_XDCFG_MCTRL_PCAP_LPBK       0x10U
#define devcfg_XDCFG_MCTRL_PCAP_LPBK_MASK 0x00000010U
#define devcfg_XDCFG_MCTRL_reserved_10_LSHIFT 0x00000002U
#define devcfg_XDCFG_MCTRL_reserved_10_MASK 0x0000000cU
#define devcfg_XDCFG_MCTRL_reserved_11_LSHIFT 0x00000001U
#define devcfg_XDCFG_MCTRL_reserved_11        0x2U
#define devcfg_XDCFG_MCTRL_reserved_11_MASK 0x00000002U
#define devcfg_XDCFG_MCTRL_reserved_12_LSHIFT 0x00000000U
#define devcfg_XDCFG_MCTRL_reserved_12        0x1U
#define devcfg_XDCFG_MCTRL_reserved_12_MASK 0x00000001U
#define devcfg_XDCFG_MCTRL_MASK 0xf0000110U

// XADC Interface Configuration.
#define devcfg_XADCIF_CFG_OFFSET 0x00000100U
#define devcfg_XADCIF_CFG_ENABLE_LSHIFT 0x0000001fU
#define devcfg_XADCIF_CFG_ENABLE 0x80000000U
#define devcfg_XADCIF_CFG_ENABLE_MASK 0x80000000U
#define devcfg_XADCIF_CFG_reserved_0_LSHIFT 0x00000018U
#define devcfg_XADCIF_CFG_reserved_0_MASK 0x7f000000U
#define devcfg_XADCIF_CFG_CFIFOTH_LSHIFT 0x00000014U
#define devcfg_XADCIF_CFG_CFIFOTH_MASK 0x00f00000U
#define devcfg_XADCIF_CFG_DFIFOTH_LSHIFT 0x00000010U
#define devcfg_XADCIF_CFG_DFIFOTH_MASK 0x000f0000U
#define devcfg_XADCIF_CFG_reserved_1_LSHIFT 0x0000000eU
#define devcfg_XADCIF_CFG_reserved_1_MASK 0x0000c000U
#define devcfg_XADCIF_CFG_WEDGE_LSHIFT 0x0000000dU
#define devcfg_XADCIF_CFG_WEDGE     0x2000U
#define devcfg_XADCIF_CFG_WEDGE_MASK 0x00002000U
#define devcfg_XADCIF_CFG_REDGE_LSHIFT 0x0000000cU
#define devcfg_XADCIF_CFG_REDGE     0x1000U
#define devcfg_XADCIF_CFG_REDGE_MASK 0x00001000U
#define devcfg_XADCIF_CFG_reserved_2_LSHIFT 0x0000000aU
#define devcfg_XADCIF_CFG_reserved_2_MASK 0x00000c00U
#define devcfg_XADCIF_CFG_TCKRATE_LSHIFT 0x00000008U
#define devcfg_XADCIF_CFG_TCKRATE_MASK 0x00000300U
#define devcfg_XADCIF_CFG_reserved_3_LSHIFT 0x00000005U
#define devcfg_XADCIF_CFG_reserved_3_MASK 0x000000e0U
#define devcfg_XADCIF_CFG_IGAP_LSHIFT 0x00000000U
#define devcfg_XADCIF_CFG_IGAP_MASK 0x0000001fU
#define devcfg_XADCIF_CFG_MASK 0x80ff331fU

// XADC Interface Interrupt Status.
#define devcfg_XADCIF_INT_STS_OFFSET 0x00000104U
#define devcfg_XADCIF_INT_STS_reserved_0_LSHIFT 0x0000000aU
#define devcfg_XADCIF_INT_STS_reserved_0_MASK 0xfffffc00U
#define devcfg_XADCIF_INT_STS_CFIFO_LTH_LSHIFT 0x00000009U
#define devcfg_XADCIF_INT_STS_CFIFO_LTH      0x200U
#define devcfg_XADCIF_INT_STS_CFIFO_LTH_MASK 0x00000200U
#define devcfg_XADCIF_INT_STS_DFIFO_GTH_LSHIFT 0x00000008U
#define devcfg_XADCIF_INT_STS_DFIFO_GTH      0x100U
#define devcfg_XADCIF_INT_STS_DFIFO_GTH_MASK 0x00000100U
#define devcfg_XADCIF_INT_STS_OT_LSHIFT 0x00000007U
#define devcfg_XADCIF_INT_STS_OT       0x80U
#define devcfg_XADCIF_INT_STS_OT_MASK 0x00000080U
#define devcfg_XADCIF_INT_STS_ALM_LSHIFT 0x00000000U
#define devcfg_XADCIF_INT_STS_ALM_MASK 0x0000007fU
#define devcfg_XADCIF_INT_STS_MASK 0x000003ffU

// XADC Interface Interrupt Mask.
#define devcfg_XADCIF_INT_MASK_OFFSET 0x00000108U
#define devcfg_XADCIF_INT_MASK_reserved_0_LSHIFT 0x0000000aU
#define devcfg_XADCIF_INT_MASK_reserved_0_MASK 0xfffffc00U
#define devcfg_XADCIF_INT_MASK_M_CFIFO_LTH_LSHIFT 0x00000009U
#define devcfg_XADCIF_INT_MASK_M_CFIFO_LTH      0x200U
#define devcfg_XADCIF_INT_MASK_M_CFIFO_LTH_MASK 0x00000200U
#define devcfg_XADCIF_INT_MASK_M_DFIFO_GTH_LSHIFT 0x00000008U
#define devcfg_XADCIF_INT_MASK_M_DFIFO_GTH      0x100U
#define devcfg_XADCIF_INT_MASK_M_DFIFO_GTH_MASK 0x00000100U
#define devcfg_XADCIF_INT_MASK_M_OT_LSHIFT 0x00000007U
#define devcfg_XADCIF_INT_MASK_M_OT       0x80U
#define devcfg_XADCIF_INT_MASK_M_OT_MASK 0x00000080U
#define devcfg_XADCIF_INT_MASK_M_ALM_LSHIFT 0x00000000U
#define devcfg_XADCIF_INT_MASK_M_ALM_MASK 0x0000007fU
#define devcfg_XADCIF_INT_MASK_MASK 0x000003ffU

// XADC Interface Miscellaneous Status.
#define devcfg_XADCIF_MSTS_OFFSET 0x0000010cU
#define devcfg_XADCIF_MSTS_reserved_0_LSHIFT 0x00000014U
#define devcfg_XADCIF_MSTS_reserved_0_MASK 0xfff00000U
#define devcfg_XADCIF_MSTS_CFIFO_LVL_LSHIFT 0x00000010U
#define devcfg_XADCIF_MSTS_CFIFO_LVL_MASK 0x000f0000U
#define devcfg_XADCIF_MSTS_DFIFO_LVL_LSHIFT 0x0000000cU
#define devcfg_XADCIF_MSTS_DFIFO_LVL_MASK 0x0000f000U
#define devcfg_XADCIF_MSTS_CFIFOF_LSHIFT 0x0000000bU
#define devcfg_XADCIF_MSTS_CFIFOF      0x800U
#define devcfg_XADCIF_MSTS_CFIFOF_MASK 0x00000800U
#define devcfg_XADCIF_MSTS_CFIFOE_LSHIFT 0x0000000aU
#define devcfg_XADCIF_MSTS_CFIFOE      0x400U
#define devcfg_XADCIF_MSTS_CFIFOE_MASK 0x00000400U
#define devcfg_XADCIF_MSTS_DFIFOF_LSHIFT 0x00000009U
#define devcfg_XADCIF_MSTS_DFIFOF      0x200U
#define devcfg_XADCIF_MSTS_DFIFOF_MASK 0x00000200U
#define devcfg_XADCIF_MSTS_DFIFOE_LSHIFT 0x00000008U
#define devcfg_XADCIF_MSTS_DFIFOE      0x100U
#define devcfg_XADCIF_MSTS_DFIFOE_MASK 0x00000100U
#define devcfg_XADCIF_MSTS_OT_LSHIFT 0x00000007U
#define devcfg_XADCIF_MSTS_OT       0x80U
#define devcfg_XADCIF_MSTS_OT_MASK 0x00000080U
#define devcfg_XADCIF_MSTS_ALM_LSHIFT 0x00000000U
#define devcfg_XADCIF_MSTS_ALM_MASK 0x0000007fU
#define devcfg_XADCIF_MSTS_MASK 0x000fffffU

// XADC Interface Command FIFO Data Port
#define devcfg_XADCIF_CMDFIFO_OFFSET 0x00000110U
#define devcfg_XADCIF_CMDFIFO_CMD_LSHIFT 0x00000000U
#define devcfg_XADCIF_CMDFIFO_CMD_MASK 0x00000000U

// XADC Interface Data FIFO Data Port
#define devcfg_XADCIF_RDFIFO_OFFSET 0x00000114U
#define devcfg_XADCIF_RDFIFO_RDDATA_LSHIFT 0x00000000U
#define devcfg_XADCIF_RDFIFO_RDDATA_MASK 0x00000000U

// XADC Interface Miscellaneous Control.
#define devcfg_XADCIF_MCTL_OFFSET 0x00000118U
#define devcfg_XADCIF_MCTL_reserved_0_LSHIFT 0x00000005U
#define devcfg_XADCIF_MCTL_reserved_0_MASK 0xffffffe0U
#define devcfg_XADCIF_MCTL_RESET_LSHIFT 0x00000004U
#define devcfg_XADCIF_MCTL_RESET       0x10U
#define devcfg_XADCIF_MCTL_RESET_MASK 0x00000010U
#define devcfg_XADCIF_MCTL_reserved_1_LSHIFT 0x00000001U
#define devcfg_XADCIF_MCTL_reserved_1_MASK 0x0000000eU
#define devcfg_XADCIF_MCTL_reserved_2_LSHIFT 0x00000000U
#define devcfg_XADCIF_MCTL_reserved_2        0x1U
#define devcfg_XADCIF_MCTL_reserved_2_MASK 0x00000001U
#define devcfg_XADCIF_MCTL_MASK 0x00000010U
