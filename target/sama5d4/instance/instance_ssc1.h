/* ---------------------------------------------------------------------------- */
/*                  Atmel Microcontroller Software Support                      */
/*                       SAM Software Package License                           */
/* ---------------------------------------------------------------------------- */
/* Copyright (c) 2015, Atmel Corporation                                        */
/*                                                                              */
/* All rights reserved.                                                         */
/*                                                                              */
/* Redistribution and use in source and binary forms, with or without           */
/* modification, are permitted provided that the following condition is met:    */
/*                                                                              */
/* - Redistributions of source code must retain the above copyright notice,     */
/* this list of conditions and the disclaimer below.                            */
/*                                                                              */
/* Atmel's name may not be used to endorse or promote products derived from     */
/* this software without specific prior written permission.                     */
/*                                                                              */
/* DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR   */
/* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE   */
/* DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,      */
/* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT */
/* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,  */
/* OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF    */
/* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING         */
/* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, */
/* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                           */
/* ---------------------------------------------------------------------------- */

#ifndef _SAMA5D4_SSC1_INSTANCE_
#define _SAMA5D4_SSC1_INSTANCE_

/* ========== Register definition for SSC1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
  #define REG_SSC1_CR                    (0xFC014000U) /**< \brief (SSC1) Control Register */
  #define REG_SSC1_CMR                   (0xFC014004U) /**< \brief (SSC1) Clock Mode Register */
  #define REG_SSC1_RCMR                  (0xFC014010U) /**< \brief (SSC1) Receive Clock Mode Register */
  #define REG_SSC1_RFMR                  (0xFC014014U) /**< \brief (SSC1) Receive Frame Mode Register */
  #define REG_SSC1_TCMR                  (0xFC014018U) /**< \brief (SSC1) Transmit Clock Mode Register */
  #define REG_SSC1_TFMR                  (0xFC01401CU) /**< \brief (SSC1) Transmit Frame Mode Register */
  #define REG_SSC1_RHR                   (0xFC014020U) /**< \brief (SSC1) Receive Holding Register */
  #define REG_SSC1_THR                   (0xFC014024U) /**< \brief (SSC1) Transmit Holding Register */
  #define REG_SSC1_RSHR                  (0xFC014030U) /**< \brief (SSC1) Receive Sync. Holding Register */
  #define REG_SSC1_TSHR                  (0xFC014034U) /**< \brief (SSC1) Transmit Sync. Holding Register */
  #define REG_SSC1_RC0R                  (0xFC014038U) /**< \brief (SSC1) Receive Compare 0 Register */
  #define REG_SSC1_RC1R                  (0xFC01403CU) /**< \brief (SSC1) Receive Compare 1 Register */
  #define REG_SSC1_SR                    (0xFC014040U) /**< \brief (SSC1) Status Register */
  #define REG_SSC1_IER                   (0xFC014044U) /**< \brief (SSC1) Interrupt Enable Register */
  #define REG_SSC1_IDR                   (0xFC014048U) /**< \brief (SSC1) Interrupt Disable Register */
  #define REG_SSC1_IMR                   (0xFC01404CU) /**< \brief (SSC1) Interrupt Mask Register */
  #define REG_SSC1_WPMR                  (0xFC0140E4U) /**< \brief (SSC1) Write Protection Mode Register */
  #define REG_SSC1_WPSR                  (0xFC0140E8U) /**< \brief (SSC1) Write Protection Status Register */
#else
  #define REG_SSC1_CR   (*(__O  uint32_t*)0xFC014000U) /**< \brief (SSC1) Control Register */
  #define REG_SSC1_CMR  (*(__IO uint32_t*)0xFC014004U) /**< \brief (SSC1) Clock Mode Register */
  #define REG_SSC1_RCMR (*(__IO uint32_t*)0xFC014010U) /**< \brief (SSC1) Receive Clock Mode Register */
  #define REG_SSC1_RFMR (*(__IO uint32_t*)0xFC014014U) /**< \brief (SSC1) Receive Frame Mode Register */
  #define REG_SSC1_TCMR (*(__IO uint32_t*)0xFC014018U) /**< \brief (SSC1) Transmit Clock Mode Register */
  #define REG_SSC1_TFMR (*(__IO uint32_t*)0xFC01401CU) /**< \brief (SSC1) Transmit Frame Mode Register */
  #define REG_SSC1_RHR  (*(__I  uint32_t*)0xFC014020U) /**< \brief (SSC1) Receive Holding Register */
  #define REG_SSC1_THR  (*(__O  uint32_t*)0xFC014024U) /**< \brief (SSC1) Transmit Holding Register */
  #define REG_SSC1_RSHR (*(__I  uint32_t*)0xFC014030U) /**< \brief (SSC1) Receive Sync. Holding Register */
  #define REG_SSC1_TSHR (*(__IO uint32_t*)0xFC014034U) /**< \brief (SSC1) Transmit Sync. Holding Register */
  #define REG_SSC1_RC0R (*(__IO uint32_t*)0xFC014038U) /**< \brief (SSC1) Receive Compare 0 Register */
  #define REG_SSC1_RC1R (*(__IO uint32_t*)0xFC01403CU) /**< \brief (SSC1) Receive Compare 1 Register */
  #define REG_SSC1_SR   (*(__I  uint32_t*)0xFC014040U) /**< \brief (SSC1) Status Register */
  #define REG_SSC1_IER  (*(__O  uint32_t*)0xFC014044U) /**< \brief (SSC1) Interrupt Enable Register */
  #define REG_SSC1_IDR  (*(__O  uint32_t*)0xFC014048U) /**< \brief (SSC1) Interrupt Disable Register */
  #define REG_SSC1_IMR  (*(__I  uint32_t*)0xFC01404CU) /**< \brief (SSC1) Interrupt Mask Register */
  #define REG_SSC1_WPMR (*(__IO uint32_t*)0xFC0140E4U) /**< \brief (SSC1) Write Protection Mode Register */
  #define REG_SSC1_WPSR (*(__I  uint32_t*)0xFC0140E8U) /**< \brief (SSC1) Write Protection Status Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAMA5D4_SSC1_INSTANCE_ */
