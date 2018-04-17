/******************************************************************************
 * Copyright (c) 2017-2017, ARM, All Rights Reserved                           *
 * SPDX-License-Identifier: Apache-2.0                                         *
 *                                                                             *
 * Licensed under the Apache License, Version 2.0 (the "License");             *
 * you may not use this file except in compliance with the License.            *
 *                                                                             *
 * You may obtain a copy of the License at                                     *
 * http://www.apache.org/licenses/LICENSE-2.0                                  *
 *                                                                             *
 * Unless required by applicable law or agreed to in writing, software         *
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT   *
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.            *
 *                                                                             *
 * See the License for the specific language governing permissions and         *
 * limitations under the License.                                              *
 ******************************************************************************/

#ifndef __DX_ZYNQ_ENV_H__
#define __DX_ZYNQ_ENV_H__

// --------------------------------------
// BLOCK: ENV_REGS
// --------------------------------------
#define DX_ENV_PKA_DEBUG_MODE_REG_OFFSET 	0x024UL 
#define DX_ENV_PKA_DEBUG_MODE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_PKA_DEBUG_MODE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_SCAN_MODE_REG_OFFSET 	0x030UL 
#define DX_ENV_SCAN_MODE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SCAN_MODE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_ALLOW_SCAN_REG_OFFSET 	0x034UL 
#define DX_ENV_CC_ALLOW_SCAN_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_ALLOW_SCAN_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_LOWER_MONITOR_ADDR_REG_ADDR   0x060UL		
#define DX_ENV_CC_LOWER_MONITOR_ADDR_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_CC_LOWER_MONITOR_ADDR_VALUE_BIT_SIZE 	0x20UL  
#define DX_ENV_CC_UPPER_MONITOR_ADDR_REG_ADDR   0x070UL		
#define DX_ENV_CC_UPPER_MONITOR_ADDR_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_CC_UPPER_MONITOR_ADDR_VALUE_BIT_SIZE 	0x20UL  
#define DX_ENV_CC_HOST_INT_REG_OFFSET 	0x0A0UL 
#define DX_ENV_CC_HOST_INT_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_HOST_INT_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_RST_N_REG_OFFSET 	0x0A8UL 
#define DX_ENV_CC_RST_N_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_RST_N_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_RST_OVERRIDE_REG_OFFSET 	0x0ACUL 
#define DX_ENV_RST_OVERRIDE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_RST_OVERRIDE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_POR_N_ADDR_REG_OFFSET 	0x0E0UL 
#define DX_ENV_CC_POR_N_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_POR_N_ADDR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_BM_LOWER_BOUND_ADDR_REG_OFFSET 	0x0F0UL 
#define DX_ENV_CC_BM_LOWER_BOUND_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_BM_LOWER_BOUND_ADDR_VALUE_BIT_SIZE 	0x14UL
#define DX_ENV_CC_BM_UPPER_BOUND_ADDR_REG_OFFSET 	0x0F4UL 
#define DX_ENV_CC_BM_UPPER_BOUND_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_BM_UPPER_BOUND_ADDR_VALUE_BIT_SIZE 	0x14UL
#define DX_ENV_CC_BM_ENB_ADDR_REG_OFFSET 	0x0F8UL 
#define DX_ENV_CC_BM_ENB_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_BM_ENB_ADDR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_COLD_RST_REG_OFFSET 	0x0FCUL 
#define DX_ENV_CC_COLD_RST_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_COLD_RST_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_BM_ERR_ACK_ADDR_REG_OFFSET 	0x100UL 
#define DX_ENV_CC_BM_ERR_ACK_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_BM_ERR_ACK_ADDR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_BM_CC_ERR_ADDR_REG_OFFSET 	0x104UL 
#define DX_ENV_BM_CC_ERR_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_BM_CC_ERR_ADDR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_DUMMY_ADDR_REG_OFFSET 	0x108UL 
#define DX_ENV_DUMMY_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_DUMMY_ADDR_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_COUNTER_CLR_REG_OFFSET 	0x118UL 
#define DX_ENV_COUNTER_CLR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_COUNTER_CLR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_COUNTER_RD_REG_OFFSET 	0x11CUL 
#define DX_ENV_COUNTER_RD_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_COUNTER_RD_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CC_SECOND_BM_LOWER_BOUND_ADDR_REG_OFFSET 	0x120UL 
#define DX_ENV_CC_SECOND_BM_LOWER_BOUND_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_SECOND_BM_LOWER_BOUND_ADDR_VALUE_BIT_SIZE 	0x14UL
#define DX_ENV_CC_SECOND_BM_UPPER_BOUND_ADDR_REG_OFFSET 	0x124UL 
#define DX_ENV_CC_SECOND_BM_UPPER_BOUND_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_SECOND_BM_UPPER_BOUND_ADDR_VALUE_BIT_SIZE 	0x14UL
#define DX_ENV_CC_SECOND_BM_ENB_ADDR_REG_OFFSET 	0x128UL 
#define DX_ENV_CC_SECOND_BM_ENB_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_SECOND_BM_ENB_ADDR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_SECOND_BM_ERR_ACK_ADDR_REG_OFFSET 	0x12CUL 
#define DX_ENV_CC_SECOND_BM_ERR_ACK_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_SECOND_BM_ERR_ACK_ADDR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_SECOND_BM_CC_ERR_ADDR_REG_OFFSET 	0x130UL 
#define DX_ENV_SECOND_BM_CC_ERR_ADDR_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_SECOND_BM_CC_ERR_ADDR_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_RNG_DEBUG_ENABLE_REG_OFFSET 	0x430UL 
#define DX_ENV_RNG_DEBUG_ENABLE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_RNG_DEBUG_ENABLE_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_WARM_BOOT_REG_OFFSET 	0x434UL 
#define DX_ENV_CC_WARM_BOOT_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_WARM_BOOT_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_LCS_REG_OFFSET 	0x43CUL 
#define DX_ENV_CC_LCS_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_LCS_VALUE_BIT_SIZE 	0x8UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_REG_OFFSET 	0x440UL 
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_CM_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_CM_BIT_SIZE 	0x1UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_DM_BIT_SHIFT 	0x1UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_DM_BIT_SIZE 	0x1UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_SECURE_BIT_SHIFT 	0x2UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_SECURE_BIT_SIZE 	0x1UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_RMA_BIT_SHIFT 	0x3UL
#define DX_ENV_CC_IS_CM_DM_SECURE_RMA_IS_RMA_BIT_SIZE 	0x1UL
#define DX_ENV_DCU_EN_REG_OFFSET 	0x444UL 
#define DX_ENV_DCU_EN_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_DCU_EN_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CC_LCS_IS_VALID_REG_OFFSET 	0x448UL 
#define DX_ENV_CC_LCS_IS_VALID_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CC_LCS_IS_VALID_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_CRYPTOKEY_0_REG_OFFSET 	0x458UL 	 
#define DX_ENV_CRYPTOKEY_0_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CRYPTOKEY_0_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CRYPTOKEY_1_REG_OFFSET 	0x45CUL 	
#define DX_ENV_CRYPTOKEY_1_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CRYPTOKEY_1_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CRYPTOKEY_2_REG_OFFSET 	0x460UL 	
#define DX_ENV_CRYPTOKEY_2_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CRYPTOKEY_2_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CRYPTOKEY_3_REG_OFFSET 	0x464UL 	
#define DX_ENV_CRYPTOKEY_3_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CRYPTOKEY_3_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CRYPTOKEY_4_REG_OFFSET 	0x468UL 	
#define DX_ENV_CRYPTOKEY_4_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CRYPTOKEY_4_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CRYPTOKEY_5_REG_OFFSET 	0x46CUL 	
#define DX_ENV_CRYPTOKEY_5_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CRYPTOKEY_5_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CRYPTOKEY_6_REG_OFFSET 	0x470UL 	
#define DX_ENV_CRYPTOKEY_6_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CRYPTOKEY_6_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_CRYPTOKEY_7_REG_OFFSET 	0x474UL 	
#define DX_ENV_CRYPTOKEY_7_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_CRYPTOKEY_7_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_POWER_DOWN_REG_OFFSET 	0x478UL 
#define DX_ENV_POWER_DOWN_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_POWER_DOWN_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_ROM_BANK_REG_OFFSET  0x47CUL 	
#define DX_ENV_ROM_BANK_BIT_SHIFT   0x0UL 	
#define DX_ENV_ROM_BANK_BIT_SIZE    0x1UL 	
#define DX_ENV_OTF_SECURE_BOOT_DONE_REG_OFFSET  0x480UL 
#define DX_ENV_OTF_SECURE_BOOT_DONE_BIT_SHIFT   0x0UL 	
#define DX_ENV_OTF_SECURE_BOOT_DONE_BIT_SIZE    0x1UL 	
#define DX_ENV_DCU_H_EN_REG_OFFSET 	0x484UL 
#define DX_ENV_DCU_H_EN_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_DCU_H_EN_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_VERSION_REG_OFFSET 	0x488UL 
#define DX_ENV_VERSION_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_VERSION_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_ROSC_WRITE_REG_OFFSET 	0x48CUL 		
#define DX_ENV_ROSC_WRITE_VALUE_BIT_SHIFT 	0x0UL		
#define DX_ENV_ROSC_WRITE_VALUE_BIT_SIZE 	0x1UL		
#define DX_ENV_ROSC_ADDR_REG_OFFSET 	0x490UL 		
#define DX_ENV_ROSC_ADDR_VALUE_BIT_SHIFT 	0x0UL		
#define DX_ENV_ROSC_ADDR_VALUE_BIT_SIZE 	0x8UL		
#define DX_ENV_RESET_SESSION_KEY_REG_OFFSET 	0x494UL 	 
#define DX_ENV_RESET_SESSION_KEY_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_RESET_SESSION_KEY_VALUE_BIT_SIZE 	0x2UL		
#define DX_ENV_SESSION_KEY_0_REG_OFFSET 	0x4A0UL 	
#define DX_ENV_SESSION_KEY_0_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_SESSION_KEY_0_VALUE_BIT_SIZE 	0x20UL	
#define DX_ENV_SESSION_KEY_1_REG_OFFSET 	0x4A4UL 	
#define DX_ENV_SESSION_KEY_1_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_SESSION_KEY_1_VALUE_BIT_SIZE 	0x20UL	
#define DX_ENV_SESSION_KEY_2_REG_OFFSET 	0x4A8UL 	
#define DX_ENV_SESSION_KEY_2_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_SESSION_KEY_2_VALUE_BIT_SIZE 	0x20UL	
#define DX_ENV_SESSION_KEY_3_REG_OFFSET 	0x4ACUL 	
#define DX_ENV_SESSION_KEY_3_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_SESSION_KEY_3_VALUE_BIT_SIZE 	0x20UL	
#define DX_ENV_SESSION_KEY_VALID_REG_OFFSET 	0x4B0UL 	
#define DX_ENV_SESSION_KEY_VALID_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_SESSION_KEY_VALID_VALUE_BIT_SIZE 	0x1UL	
#define DX_ENV_DEBUG_EN_REG_OFFSET 	0x4B4UL 	
#define DX_ENV_DEBUG_EN_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_DEBUG_EN_VALUE_BIT_SIZE 	0x1UL	
#define DX_ENV_SPIDEN_REG_OFFSET	0x4D0UL
#define DX_ENV_SPIDEN_BIT_SHIFT		0x0UL
#define DX_ENV_SPIDEN_BIT_SIZE		0x1UL
#define DX_ENV_AO_CCP_LCS_IS_SD_REG_OFFSET	0x4D4UL
#define DX_ENV_AO_CCP_LCS_IS_SD_BIT_SHIFT	0x0UL
#define DX_ENV_AO_CCP_LCS_IS_SD_BIT_SIZE	0x1UL
#define DX_ENV_AXIM_USER_PARAMS_REG_OFFSET 	0x600UL 	
#define DX_ENV_AXIM_ARUSER_PARAMS_VALUE_BIT_SHIFT 	0x0UL	
#define DX_ENV_AXIM_ARUSER_PARAMS_VALUE_BIT_SIZE 	0x5UL	
#define DX_ENV_AXIM_AWUSER_PARAMS_VALUE_BIT_SHIFT 	0x5UL	
#define DX_ENV_AXIM_AWUSER_PARAMS_VALUE_BIT_SIZE 	0x5UL	
#define DX_ENV_SECURITY_MODE_OVERRIDE_REG_OFFSET 	0x604UL 	
#define DX_ENV_AWPROT_NS_BIT_SHIFT 	0x0UL	
#define DX_ENV_AWPROT_NS_BIT_SIZE 	0x1UL	
#define DX_ENV_AWPROT_NS_OVRD_BIT_SHIFT 0x1UL	
#define DX_ENV_AWPROT_NS_OVRD_BIT_SIZE 	0x1UL	
#define DX_ENV_ARPROT_NS_BIT_SHIFT 	0x2UL	
#define DX_ENV_ARPROT_NS_BIT_SIZE 	0x1UL	
#define DX_ENV_ARPROT_NS_OVRD_BIT_SHIFT 0x3UL	
#define DX_ENV_ARPROT_NS_OVRD_BIT_SIZE 	0x1UL	
#define DX_ENV_AO_CC_KPLT_0_REG_OFFSET  0x620UL
#define DX_ENV_AO_CC_KPLT_0_BIT_SHIFT	0x0UL
#define DX_ENV_AO_CC_KPLT_0_BIT_SIZE	0x20UL
#define DX_ENV_AO_CC_KPLT_1_REG_OFFSET  0x624UL
#define DX_ENV_AO_CC_KPLT_1_BIT_SHIFT	0x0UL
#define DX_ENV_AO_CC_KPLT_1_BIT_SIZE	0x20UL
#define DX_ENV_AO_CC_KPLT_2_REG_OFFSET  0x628UL
#define DX_ENV_AO_CC_KPLT_2_BIT_SHIFT	0x0UL
#define DX_ENV_AO_CC_KPLT_2_BIT_SIZE	0x20UL
#define DX_ENV_AO_CC_KPLT_3_REG_OFFSET  0x62CUL
#define DX_ENV_AO_CC_KPLT_3_BIT_SHIFT	0x0UL
#define DX_ENV_AO_CC_KPLT_3_BIT_SIZE	0x20UL
#define DX_ENV_AO_CC_KCST_0_REG_OFFSET  0x630UL
#define DX_ENV_AO_CC_KCST_0_BIT_SHIFT	0x0UL
#define DX_ENV_AO_CC_KCST_0_BIT_SIZE	0x20UL
#define DX_ENV_AO_CC_KCST_1_REG_OFFSET  0x634UL
#define DX_ENV_AO_CC_KCST_1_BIT_SHIFT	0x0UL
#define DX_ENV_AO_CC_KCST_1_BIT_SIZE	0x20UL
#define DX_ENV_AO_CC_KCST_2_REG_OFFSET  0x638UL
#define DX_ENV_AO_CC_KCST_2_BIT_SHIFT	0x0UL
#define DX_ENV_AO_CC_KCST_2_BIT_SIZE	0x20UL
#define DX_ENV_AO_CC_KCST_3_REG_OFFSET  0x63CUL
#define DX_ENV_AO_CC_KCST_3_BIT_SHIFT	0x0UL
#define DX_ENV_AO_CC_KCST_3_BIT_SIZE	0x20UL
// --------------------------------------
// BLOCK: ENV_CC_MEMORIES
// --------------------------------------
#define DX_ENV_FUSE_READY_REG_OFFSET 	0x414UL 
#define DX_ENV_FUSE_READY_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_FUSE_READY_VALUE_BIT_SIZE 	0x1UL
//#define DX_ENV_FUSES_RAM_REG_OFFSET 	0x800UL  //Not connected in RAM controller 
//#define DX_ENV_FUSES_RAM_VALUE_BIT_SHIFT 	0x0UL
//#define DX_ENV_FUSES_RAM_VALUE_BIT_SIZE 	0x20UL
#define DX_ENV_PERF_RAM_MASTER_REG_OFFSET 	0x500UL 
#define DX_ENV_PERF_RAM_MASTER_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_PERF_RAM_MASTER_VALUE_BIT_SIZE 	0x1UL
#define DX_ENV_PERF_RAM_ADDR_HIGH4_REG_OFFSET 	0x504UL 
#define DX_ENV_PERF_RAM_ADDR_HIGH4_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_PERF_RAM_ADDR_HIGH4_VALUE_BIT_SIZE 	0x2UL

// --------------------------------------
// BLOCK: ENV_PERF_RAM_BASE
// --------------------------------------
#define DX_ENV_PERF_RAM_BASE_REG_OFFSET 	0x000UL 
#define DX_ENV_PERF_RAM_BASE_VALUE_BIT_SHIFT 	0x0UL
#define DX_ENV_PERF_RAM_BASE_VALUE_BIT_SIZE 	0x20UL

#endif //__DX_RNG_H__