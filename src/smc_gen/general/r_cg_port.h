/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2021, 2023 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : r_cg_port.h
* Version          : 1.0.0
* Device(s)        : R9A02G021xxxx
* Description      : General header file for PORT peripheral.
* Creation Date    : yyyy-mm-dd
***********************************************************************************************************************/

#ifndef     PORT_H
#define     PORT_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/*
    Port Control Register 3 (PCNTR3)
*/
/* Pn11 pin output set (POSR) */
#define     _0800_POSRn11_OUTPUT_HIGH                       (0x0800U)    /* Pn11 output set high output */
/* Pn10 pin output set (POSR) */
#define     _0400_POSRn10_OUTPUT_HIGH                       (0x0400U)    /* Pn10 output set high output */
/* Pn09 pin output set (POSR) */
#define     _0200_POSRn09_OUTPUT_HIGH                       (0x0200U)    /* Pn09 output set high output */
/* Pn08 pin output set (POSR) */
#define     _0100_POSRn08_OUTPUT_HIGH                       (0x0100U)    /* Pn08 output set high output */
/* Pn07 pin output set (POSR) */
#define     _0080_POSRn07_OUTPUT_HIGH                       (0x0080U)    /* Pn07 output set high output */
/* Pn06 pin output set (POSR) */
#define     _0040_POSRn06_OUTPUT_HIGH                       (0x0040U)    /* Pn06 output set high output */
/* Pn05 pin output set (POSR) */
#define     _0020_POSRn05_OUTPUT_HIGH                       (0x0020U)    /* Pn05 output set high output */
/* Pn04 pin output set (POSR) */
#define     _0010_POSRn04_OUTPUT_HIGH                       (0x0010U)    /* Pn04 output set high output */
/* Pn03 pin output set (POSR) */
#define     _0008_POSRn03_OUTPUT_HIGH                       (0x0008U)    /* Pn03 output set high output */
/* Pn02 pin output set (POSR) */
#define     _0004_POSRn02_OUTPUT_HIGH                       (0x0004U)    /* Pn02 output set high output */
/* Pn01 pin output set (POSR) */
#define     _0002_POSRn01_OUTPUT_HIGH                       (0x0002U)    /* Pn01 output set high output */
/* Pn00 pin output set (POSR) */
#define     _0001_POSRn00_OUTPUT_HIGH                       (0x0001U)    /* Pn00 output set high output */
    
/* Pn11 pin output reset (PORR) */
#define     _0800_PORRn11_OUTPUT_LOW                        (0x0800U)    /* Pn11 output set low output */
/* Pn10 pin output reset (PORR) */
#define     _0400_PORRn10_OUTPUT_LOW                        (0x0400U)    /* Pn10 output set low output */
/* Pn09 pin output reset (PORR) */
#define     _0200_PORRn09_OUTPUT_LOW                        (0x0200U)    /* Pn09 output set low output */
/* Pn08 pin output reset (PORR) */
#define     _0100_PORRn08_OUTPUT_LOW                        (0x0100U)    /* Pn08 output set low output */
/* Pn07 pin output reset (PORR) */
#define     _0080_PORRn07_OUTPUT_LOW                        (0x0080U)    /* Pn07 output set low output */
/* Pn06 pin output reset (PORR) */
#define     _0040_PORRn06_OUTPUT_LOW                        (0x0040U)    /* Pn06 output set low output */
/* Pn05 pin output reset (PORR) */
#define     _0020_PORRn05_OUTPUT_LOW                        (0x0020U)    /* Pn05 output set low output */
/* Pn04 pin output reset (PORR) */
#define     _0010_PORRn04_OUTPUT_LOW                        (0x0010U)    /* Pn04 output set low output */
/* Pn03 pin output reset (PORR) */
#define     _0008_PORRn03_OUTPUT_LOW                        (0x0008U)    /* Pn03 output set low output */
/* Pn02 pin output reset (PORR) */
#define     _0004_PORRn02_OUTPUT_LOW                        (0x0004U)    /* Pn02 output set low output */
/* Pn01 pin output reset (PORR) */
#define     _0002_PORRn01_OUTPUT_LOW                        (0x0002U)    /* Pn01 output set low output */
/* Pn00 pin output reset (PORR) */
#define     _0001_PORRn00_OUTPUT_LOW                        (0x0001U)    /* Pn00 output set low output */

/*
    Port Control Register 4 (PCNTR4)
*/
/* Pn11 pin event output set (EOSR) */
#define     _0000_EOSRn11_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0800_EOSRn11_EVENT_OUTPUT_HIGH                 (0x0800U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn11 */
/* Pn10 pin event output set (EOSR) */
#define     _0000_EOSRn10_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0400_EOSRn10_EVENT_OUTPUT_HIGH                 (0x0400U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn10 */
/* Pn09 pin event output set (EOSR) */
#define     _0000_EOSRn09_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0200_EOSRn09_EVENT_OUTPUT_HIGH                 (0x0200U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn09 */
/* Pn08 pin event output set (EOSR) */
#define     _0000_EOSRn08_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0100_EOSRn08_EVENT_OUTPUT_HIGH                 (0x0100U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn08 */
/* Pn07 pin event output set (EOSR) */
#define     _0000_EOSRn07_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0080_EOSRn07_EVENT_OUTPUT_HIGH                 (0x0080U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn07 */
/* Pn06 pin event output set (EOSR) */
#define     _0000_EOSRn06_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0040_EOSRn06_EVENT_OUTPUT_HIGH                 (0x0040U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn06 */
/* Pn05 pin event output set (EOSR) */
#define     _0000_EOSRn05_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0020_EOSRn05_EVENT_OUTPUT_HIGH                 (0x0020U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn05 */
/* Pn04 pin event output set (EOSR) */
#define     _0000_EOSRn04_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0010_EOSRn04_EVENT_OUTPUT_HIGH                 (0x0010U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn04 */
/* Pn03 pin event output set (EOSR) */
#define     _0000_EOSRn03_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0008_EOSRn03_EVENT_OUTPUT_HIGH                 (0x0008U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn03 */
/* Pn02 pin event output set (EOSR) */
#define     _0000_EOSRn02_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0004_EOSRn02_EVENT_OUTPUT_HIGH                 (0x0004U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn02 */
/* Pn01 pin event output set (EOSR) */
#define     _0000_EOSRn01_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0002_EOSRn01_EVENT_OUTPUT_HIGH                 (0x0002U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn01 */
/* Pn00 pin event output set (EOSR) */
#define     _0000_EOSRn00_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0001_EOSRn00_EVENT_OUTPUT_HIGH                 (0x0001U)    /* when an ELC_PORTx signal occurs,
                                                                            high output Pn00 */

/* Pn11 pin event output reset (EORR) */
#define     _0000_EORRn11_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0800_EORRn11_EVENT_OUTPUT_LOW                  (0x0800U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn11 */
/* Pn10 pin event output reset (EORR) */
#define     _0000_EORRn10_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0400_EORRn10_EVENT_OUTPUT_LOW                  (0x0400U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn10 */
/* Pn09 pin event output reset (EORR) */
#define     _0000_EORRn09_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0200_EORRn09_EVENT_OUTPUT_LOW                  (0x0200U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn09 */
/* Pn08 pin event output reset (EORR) */
#define     _0000_EORRn08_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0100_EORRn08_EVENT_OUTPUT_LOW                  (0x0100U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn08 */
/* Pn07 pin event output reset (EORR) */
#define     _0000_EORRn07_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0080_EORRn07_EVENT_OUTPUT_LOW                  (0x0080U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn07 */
/* Pn06 pin event output reset (EORR) */
#define     _0000_EORRn06_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0040_EORRn06_EVENT_OUTPUT_LOW                  (0x0040U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn06 */
/* Pn05 pin event output reset (EORR) */
#define     _0000_EORRn05_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0020_EORRn05_EVENT_OUTPUT_LOW                  (0x0020U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn05 */
/* Pn04 pin event output reset (EORR) */
#define     _0000_EORRn04_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0010_EORRn04_EVENT_OUTPUT_LOW                  (0x0010U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn04 */
/* Pn03 pin event output reset (EORR) */
#define     _0000_EORRn03_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
																			no effect on output*/
#define     _0008_EORRn03_EVENT_OUTPUT_LOW                  (0x0008U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn03 */
/* Pn02 pin event output reset (EORR) */
#define     _0000_EORRn02_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0004_EORRn02_EVENT_OUTPUT_LOW                  (0x0004U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn02 */
/* Pn01 pin event output reset (EORR) */
#define     _0000_EORRn01_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0002_EORRn01_EVENT_OUTPUT_LOW                  (0x0002U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn01 */
/* Pn00 pin event output reset (EORR) */
#define     _0000_EORRn00_EVENT_OUTPUT_NOEFFECT             (0x0000U)    /* when an ELC_PORTx signal occurs,
                                                                            no effect on output*/
#define     _0001_EORRn00_EVENT_OUTPUT_LOW                  (0x0001U)    /* when an ELC_PORTx signal occurs,
                                                                            low output Pn00 */

/*
    Port mn Pin Function Select Register (PmnPFS)
*/
/* Pn11 pin I/O mode selection (PDR) */
#define     _00000004_Pn11PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn11 as output mode */
#define     _00000000_Pn11PFS_MODE_INPUT                    (0x00000000U)    /* use Pn11 as input mode */
#define     _00000000_Pn11PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn11 as digital I/O */
/* Pn10 pin I/O mode selection (PDR) */
#define     _00000004_Pn10PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn10 as output mode */
#define     _00000000_Pn10PFS_MODE_INPUT                    (0x00000000U)    /* use Pn10 as input mode */
#define     _00000000_Pn10PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn10 as digital I/O */
/* Pn09 pin I/O mode selection (PDR) */
#define     _00000004_Pn09PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn09 as output mode */
#define     _00000000_Pn09PFS_MODE_INPUT                    (0x00000000U)    /* use Pn09 as input mode */
#define     _00000000_Pn09PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn09 as digital I/O */
/* Pn08 pin I/O mode selection (PDR) */
#define     _00000004_Pn08PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn08 as output mode */
#define     _00000000_Pn08PFS_MODE_INPUT                    (0x00000000U)    /* use Pn08 as input mode */
#define     _00000000_Pn08PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn08 as digital I/O */
/* Pn07 pin I/O mode selection (PDR) */
#define     _00000004_Pn07PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn07 as output mode */
#define     _00000000_Pn07PFS_MODE_INPUT                    (0x00000000U)    /* use Pn07 as input mode */
#define     _00000000_Pn07PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn07 as digital I/O */
/* Pn06 pin I/O mode selection (PDR) */
#define     _00000004_Pn06PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn06 as output mode */
#define     _00000000_Pn06PFS_MODE_INPUT                    (0x00000000U)    /* use Pn06 as input mode */
#define     _00000000_Pn06PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn06 as digital I/O */
/* Pn05 pin I/O mode selection (PDR) */
#define     _00000004_Pn05PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn05 as output mode */
#define     _00000000_Pn05PFS_MODE_INPUT                    (0x00000000U)    /* use Pn05 as input mode */
#define     _00000000_Pn05PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn05 as digital I/O */
/* Pn04 pin I/O mode selection (PDR) */
#define     _00000004_Pn04PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn04 as output mode */
#define     _00000000_Pn04PFS_MODE_INPUT                    (0x00000000U)    /* use Pn04 as input mode */
#define     _00000000_Pn04PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn04 as digital I/O */
/* Pn03 pin I/O mode selection (PDR) */
#define     _00000004_Pn03PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn03 as output mode */
#define     _00000000_Pn03PFS_MODE_INPUT                    (0x00000000U)    /* use Pn03 as input mode */
#define     _00000000_Pn03PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn03 as digital I/O */
/* Pn02 pin I/O mode selection (PDR) */
#define     _00000004_Pn02PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn02 as output mode */
#define     _00000000_Pn02PFS_MODE_INPUT                    (0x00000000U)    /* use Pn02 as input mode */
#define     _00000000_Pn02PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn02 as digital I/O */
/* Pn01 pin I/O mode selection (PDR) */
#define     _00000004_Pn01PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn01 as output mode */
#define     _00000000_Pn01PFS_MODE_INPUT                    (0x00000000U)    /* use Pn01 as input mode */
#define     _00000000_Pn01PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn01 as digital I/O */
/* Pn00 pin I/O mode selection (PDR) */
#define     _00000004_Pn00PFS_MODE_OUTPUT                   (0x00000004U)    /* use Pn00 as output mode */
#define     _00000000_Pn00PFS_MODE_INPUT                    (0x00000000U)    /* use Pn00 as input mode */
#define     _00000000_Pn00PFS_MODE_UNUSED                   (0x00000000U)    /* not use Pn00 as digital I/O */

/* Pn11 pin output latch selection (PODR) */
#define     _00000000_Pn11PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn11 as low output */
#define     _00000001_Pn11PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn11 as high output */
/* Pn10 pin output latch selection (PODR) */
#define     _00000000_Pn10PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn10 as low output */
#define     _00000001_Pn10PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn10 as high output */
/* Pn09 pin output latch selection (PODR) */
#define     _00000000_Pn09PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn09 as low output */
#define     _00000001_Pn09PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn09 as high output */
/* Pn08 pin output latch selection (PODR) */
#define     _00000000_Pn08PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn08 as low output */
#define     _00000001_Pn08PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn08 as high output */
/* Pn07 pin output latch selection (PODR) */
#define     _00000000_Pn07PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn07 as low output */
#define     _00000001_Pn07PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn07 as high output */
/* Pn06 pin output latch selection (PODR) */
#define     _00000000_Pn06PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn06 as low output */
#define     _00000001_Pn06PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn06 as high output */
/* Pn05 pin output latch selection (PODR) */
#define     _00000000_Pn05PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn05 as low output */
#define     _00000001_Pn05PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn05 as high output */
/* Pn04 pin output latch selection (PODR) */
#define     _00000000_Pn04PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn04 as low output */
#define     _00000001_Pn04PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn04 as high output */
/* Pn03 pin output latch selection (PODR) */
#define     _00000000_Pn03PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn03 as low output */
#define     _00000001_Pn03PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn03 as high output */
/* Pn02 pin output latch selection (PODR) */
#define     _00000000_Pn02PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn02 as low output */
#define     _00000001_Pn02PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn02 as high output */
/* Pn01 pin output latch selection (PODR) */
#define     _00000000_Pn01PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn01 as low output */
#define     _00000001_Pn01PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn01 as high output */
/* Pn00 pin output latch selection (PODR) */
#define     _00000000_Pn00PFS_OUTPUT_LOW                    (0x00000000U)    /* use Pn00 as low output */
#define     _00000001_Pn00PFS_OUTPUT_HIGH                   (0x00000001U)    /* use Pn00 as high output */

/* Pn11 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn11PFS_PULLUP_OFF                    (0x00000000U)    /* Pn11 pull-up resistor not connected */
#define     _00000010_Pn11PFS_PULLUP_ON                     (0x00000010U)    /* Pn11 pull-up resistor connected */
/* Pn10 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn10PFS_PULLUP_OFF                    (0x00000000U)    /* Pn10 pull-up resistor not connected */
#define     _00000010_Pn10PFS_PULLUP_ON                     (0x00000010U)    /* Pn10 pull-up resistor connected */
/* Pn09 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn09PFS_PULLUP_OFF                    (0x00000000U)    /* Pn09 pull-up resistor not connected */
#define     _00000010_Pn09PFS_PULLUP_ON                     (0x00000010U)    /* Pn09 pull-up resistor connected */
/* Pn08 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn08PFS_PULLUP_OFF                    (0x00000000U)    /* Pn08 pull-up resistor not connected */
#define     _00000010_Pn08PFS_PULLUP_ON                     (0x00000010U)    /* Pn08 pull-up resistor connected */
/* Pn07 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn07PFS_PULLUP_OFF                    (0x00000000U)    /* Pn07 pull-up resistor not connected */
#define     _00000010_Pn07PFS_PULLUP_ON                     (0x00000010U)    /* Pn07 pull-up resistor connected */
/* Pn06 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn06PFS_PULLUP_OFF                    (0x00000000U)    /* Pn06 pull-up resistor not connected */
#define     _00000010_Pn06PFS_PULLUP_ON                     (0x00000010U)    /* Pn06 pull-up resistor connected */
/* Pn05 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn05PFS_PULLUP_OFF                    (0x00000000U)    /* Pn05 pull-up resistor not connected */
#define     _00000010_Pn05PFS_PULLUP_ON                     (0x00000010U)    /* Pn05 pull-up resistor connected */
/* Pn04 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn04PFS_PULLUP_OFF                    (0x00000000U)    /* Pn04 pull-up resistor not connected */
#define     _00000010_Pn04PFS_PULLUP_ON                     (0x00000010U)    /* Pn04 pull-up resistor connected */
/* Pn03 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn03PFS_PULLUP_OFF                    (0x00000000U)    /* Pn03 pull-up resistor not connected */
#define     _00000010_Pn03PFS_PULLUP_ON                     (0x00000010U)    /* Pn03 pull-up resistor connected */
/* Pn02 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn02PFS_PULLUP_OFF                    (0x00000000U)    /* Pn02 pull-up resistor not connected */
#define     _00000010_Pn02PFS_PULLUP_ON                     (0x00000010U)    /* Pn02 pull-up resistor connected */
/* Pn01 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn01PFS_PULLUP_OFF                    (0x00000000U)    /* Pn01 pull-up resistor not connected */
#define     _00000010_Pn01PFS_PULLUP_ON                     (0x00000010U)    /* Pn01 pull-up resistor connected */
/* Pn00 pin pull-up resistor selection (PCR) */
#define     _00000000_Pn00PFS_PULLUP_OFF                    (0x00000000U)    /* Pn00 pull-up resistor not connected */
#define     _00000010_Pn00PFS_PULLUP_ON                     (0x00000010U)    /* Pn00 pull-up resistor connected */

/* Pn11 pin output mode selection (NCODR) */
#define     _00000000_Pn11PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn11 cmos output */
#define     _00000040_Pn11PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn11 nmos open-drain output */
/* Pn10 pin output mode selection (NCODR) */
#define     _00000000_Pn10PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn10 cmos output */
#define     _00000040_Pn10PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn10 nmos open-drain output */
/* Pn09 pin output mode selection (NCODR) */
#define     _00000000_Pn09PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn09 cmos output */
#define     _00000040_Pn09PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn09 nmos open-drain output */
/* Pn08 pin output mode selection (NCODR) */
#define     _00000000_Pn08PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn08 cmos output */
#define     _00000040_Pn08PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn08 nmos open-drain output */
/* Pn07 pin output mode selection (NCODR) */
#define     _00000000_Pn07PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn07 cmos output */
#define     _00000040_Pn07PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn07 nmos open-drain output */
/* Pn06 pin output mode selection (NCODR) */
#define     _00000000_Pn06PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn06 cmos output */
#define     _00000040_Pn06PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn06 nmos open-drain output */
/* Pn05 pin output mode selection (NCODR) */
#define     _00000000_Pn05PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn05 cmos output */
#define     _00000040_Pn05PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn05 nmos open-drain output */
/* Pn04 pin output mode selection (NCODR) */
#define     _00000000_Pn04PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn04 cmos output */
#define     _00000040_Pn04PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn04 nmos open-drain output */
/* Pn03 pin output mode selection (NCODR) */
#define     _00000000_Pn03PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn03 cmos output */
#define     _00000040_Pn03PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn03 nmos open-drain output */
/* Pn02 pin output mode selection (NCODR) */
#define     _00000000_Pn02PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn02 cmos output */
#define     _00000040_Pn02PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn02 nmos open-drain output */
/* Pn01 pin output mode selection (NCODR) */
#define     _00000000_Pn01PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn01 cmos output */
#define     _00000040_Pn01PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn01 nmos open-drain output */
/* Pn00 pin output mode selection (NCODR) */
#define     _00000000_Pn00PFS_CMOS_OUTPUT                   (0x00000000U)    /* Pn00 cmos output */
#define     _00000040_Pn00PFS_NMOS_OUTPUT                   (0x00000040U)    /* Pn00 nmos open-drain output */

/* Pn11 pin output current selection (DSCR) */
#define     _00000000_Pn11PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn11 output 2ma current */
#define     _00000400_Pn11PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn11 output 5ma current */
#define     _00000800_Pn11PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn11 output 10ma current */
/* Pn10 pin output current selection (DSCR) */
#define     _00000000_Pn10PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn10 output 2ma current */
#define     _00000400_Pn10PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn10 output 5ma current */
#define     _00000800_Pn10PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn10 output 10ma current */
/* Pn09 pin output current selection (DSCR) */
#define     _00000000_Pn09PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn09 output 2ma current */
#define     _00000400_Pn09PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn09 output 5ma current */
#define     _00000800_Pn09PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn09 output 10ma current */
/* Pn08 pin output current selection (DSCR) */
#define     _00000000_Pn08PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn08 output 2ma current */
#define     _00000400_Pn08PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn08 output 5ma current */
#define     _00000800_Pn08PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn08 output 10ma current */
/* Pn07 pin output current selection (DSCR) */
#define     _00000000_Pn07PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn07 output 2ma current */
#define     _00000400_Pn07PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn07 output 5ma current */
#define     _00000800_Pn07PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn07 output 10ma current */
/* Pn06 pin output current selection (DSCR) */
#define     _00000000_Pn06PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn06 output 2ma current */
#define     _00000400_Pn06PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn06 output 5ma current */
#define     _00000800_Pn06PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn06 output 10ma current */
/* Pn05 pin output current selection (DSCR) */
#define     _00000000_Pn05PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn05 output 2ma current */
#define     _00000400_Pn05PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn05 output 5ma current */
#define     _00000800_Pn05PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn05 output 10ma current */
/* Pn04 pin output current selection (DSCR) */
#define     _00000000_Pn04PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn04 output 2ma current */
#define     _00000400_Pn04PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn04 output 5ma current */
#define     _00000800_Pn04PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn04 output 10ma current */
/* Pn03 pin output current selection (DSCR) */
#define     _00000000_Pn03PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn03 output 2ma current */
#define     _00000400_Pn03PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn03 output 5ma current */
#define     _00000800_Pn03PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn03 output 10ma current */
/* Pn02 pin output current selection (DSCR) */
#define     _00000000_Pn02PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn02 output 2ma current */
#define     _00000400_Pn02PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn02 output 5ma current */
#define     _00000800_Pn02PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn02 output 10ma current */
/* Pn01 pin output current selection (DSCR) */
#define     _00000000_Pn01PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn01 output 2ma current */
#define     _00000400_Pn01PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn01 output 5ma current */
#define     _00000800_Pn01PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn01 output 10ma current */
/* Pn00 pin output current selection (DSCR) */
#define     _00000000_Pn00PFS_CURRENT_OUTPUT_2MA            (0x00000000U)    /* Pn00 output 2ma current */
#define     _00000400_Pn00PFS_CURRENT_OUTPUT_5MA            (0x00000400U)    /* Pn00 output 5ma current */
#define     _00000800_Pn00PFS_CURRENT_OUTPUT_10MA           (0x00000800U)    /* Pn00 output 10ma current */

/* Pn11 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn11PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn11 elc detect no edge */
#define     _00001000_Pn11PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn11 elc detect raising edge */
#define     _00002000_Pn11PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn11 elc detect falling edge */
#define     _00003000_Pn11PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn11 elc detect both edge */
/* Pn10 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn10PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn10 elc detect no edge */
#define     _00001000_Pn10PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn10 elc detect raising edge */
#define     _00002000_Pn10PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn10 elc detect falling edge */
#define     _00003000_Pn10PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn10 elc detect both edge */
/* Pn09 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn09PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn09 elc detect no edge */
#define     _00001000_Pn09PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn09 elc detect raising edge */
#define     _00002000_Pn09PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn09 elc detect falling edge */
#define     _00003000_Pn09PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn09 elc detect both edge */
/* Pn08 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn08PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn08 elc detect no edge */
#define     _00001000_Pn08PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn08 elc detect raising edge */
#define     _00002000_Pn08PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn08 elc detect falling edge */
#define     _00003000_Pn08PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn08 elc detect both edge */
/* Pn07 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn07PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn07 elc detect no edge */
#define     _00001000_Pn07PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn07 elc detect raising edge */
#define     _00002000_Pn07PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn07 elc detect falling edge */
#define     _00003000_Pn07PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn07 elc detect both edge */
/* Pn06 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn06PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn06 elc detect no edge */
#define     _00001000_Pn06PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn06 elc detect raising edge */
#define     _00002000_Pn06PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn06 elc detect falling edge */
#define     _00003000_Pn06PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn06 elc detect both edge */
/* Pn05 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn05PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn05 elc detect no edge */
#define     _00001000_Pn05PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn05 elc detect raising edge */
#define     _00002000_Pn05PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn05 elc detect falling edge */
#define     _00003000_Pn05PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn05 elc detect both edge */
/* Pn04 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn04PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn04 elc detect no edge */
#define     _00001000_Pn04PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn04 elc detect raising edge */
#define     _00002000_Pn04PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn04 elc detect falling edge */
#define     _00003000_Pn04PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn04 elc detect both edge */
/* Pn03 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn03PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn03 elc detect no edge */
#define     _00001000_Pn03PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn03 elc detect raising edge */
#define     _00002000_Pn03PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn03 elc detect falling edge */
#define     _00003000_Pn03PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn03 elc detect both edge */
/* Pn02 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn02PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn02 elc detect no edge */
#define     _00001000_Pn02PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn02 elc detect raising edge */
#define     _00002000_Pn02PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn02 elc detect falling edge */
#define     _00003000_Pn02PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn02 elc detect both edge */
/* Pn01 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn01PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn01 elc detect no edge */
#define     _00001000_Pn01PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn01 elc detect raising edge */
#define     _00002000_Pn01PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn01 elc detect falling edge */
#define     _00003000_Pn01PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn01 elc detect both edge */
/* Pn00 pin ELC input edge detect (EOFR) */
#define     _00000000_Pn00PFS_ELC_EDGE_DETECT_NONE          (0x00000000U)    /* Pn00 elc detect no edge */
#define     _00001000_Pn00PFS_ELC_EDGE_DETECT_RAISE         (0x00001000U)    /* Pn00 elc detect raising edge */
#define     _00002000_Pn00PFS_ELC_EDGE_DETECT_FALL          (0x00002000U)    /* Pn00 elc detect falling edge */
#define     _00003000_Pn00PFS_ELC_EDGE_DETECT_BOTH          (0x00003000U)    /* Pn00 elc detect both edge */

/* Pn11 pin port mode control (PMR) */
#define     _00000000_Pn11PFS_GPIO_USED                     (0x00000000U)    /* Pn11 use as GPIO */
/* Pn10 pin port mode control (PMR) */
#define     _00000000_Pn10PFS_GPIO_USED                     (0x00000000U)    /* Pn10 use as GPIO */
/* Pn09 pin port mode control (PMR) */
#define     _00000000_Pn09PFS_GPIO_USED                     (0x00000000U)    /* Pn09 use as GPIO */
/* Pn08 pin port mode control (PMR) */
#define     _00000000_Pn08PFS_GPIO_USED                     (0x00000000U)    /* Pn08 use as GPIO */
/* Pn07 pin port mode control (PMR) */
#define     _00000000_Pn07PFS_GPIO_USED                     (0x00000000U)    /* Pn07 use as GPIO */
/* Pn06 pin port mode control (PMR) */
#define     _00000000_Pn06PFS_GPIO_USED                     (0x00000000U)    /* Pn06 use as GPIO */
/* Pn05 pin port mode control (PMR) */
#define     _00000000_Pn05PFS_GPIO_USED                     (0x00000000U)    /* Pn05 use as GPIO */
/* Pn04 pin port mode control (PMR) */
#define     _00000000_Pn04PFS_GPIO_USED                     (0x00000000U)    /* Pn04 use as GPIO */
/* Pn03 pin port mode control (PMR) */
#define     _00000000_Pn03PFS_GPIO_USED                     (0x00000000U)    /* Pn03 use as GPIO */
/* Pn02 pin port mode control (PMR) */
#define     _00000000_Pn02PFS_GPIO_USED                     (0x00000000U)    /* Pn02 use as GPIO */
/* Pn01 pin port mode control (PMR) */
#define     _00000000_Pn01PFS_GPIO_USED                     (0x00000000U)    /* Pn01 use as GPIO */
/* Pn00 pin port mode control (PMR) */
#define     _00000000_Pn00PFS_GPIO_USED                     (0x00000000U)    /* Pn00 use as GPIO */

/*
    Output Current Control Enable Register (CCDE)
*/
/* CCDE00 (P100) output control function */
#define     _01_P100_OUTPUT_CURRENT_ON                      (0x01U)    /* enable P100 current control function */
#define     _00_P100_OUTPUT_CURRENT_OFF                     (0x00U)    /* disable P100 current control function */
/* CCDE00 (P302) output control function */
#define     _02_P302_OUTPUT_CURRENT_ON                      (0x02U)    /* enable P302 current control function */
#define     _00_P302_OUTPUT_CURRENT_OFF                     (0x00U)    /* disable P302 current control function */
/* CCDE00 (P303) output control function */
#define     _04_P303_OUTPUT_CURRENT_ON                      (0x04U)    /* enable P303 current control function */
#define     _00_P303_OUTPUT_CURRENT_OFF                     (0x00U)    /* disable P303 current control function */
/*
    Port Read Wait Control Register (PRWCNTR)
*/
#define    _01_PORT_PRWCNTR_READ_WAIT                       (0x01U)    /* insert a 1-cycle wait */
#define    _02_PORT_PRWCNTR_READ_WAIT                       (0x02U)    /* insert a 2-cycle wait */
#define    _03_PORT_PRWCNTR_READ_WAIT                       (0x03U)    /* insert a 3-cycle wait */

/*
    Output Current Control Trimming Register (CCTRM)
*/
#define     _00_PORT_CCTRM_CURRENT_TRIM_LEVE15              (0x00U)    /* output current trim level15 */
#define     _01_PORT_CCTRM_CURRENT_TRIM_LEVE14              (0x01U)    /* output current trim level14 */
#define     _02_PORT_CCTRM_CURRENT_TRIM_LEVE13              (0x02U)    /* output current trim level13 */
#define     _03_PORT_CCTRM_CURRENT_TRIM_LEVE12              (0x03U)    /* output current trim level12 */
#define     _04_PORT_CCTRM_CURRENT_TRIM_LEVE11              (0x04U)    /* output current trim level11 */
#define     _05_PORT_CCTRM_CURRENT_TRIM_LEVE10              (0x05U)    /* output current trim level10 */
#define     _06_PORT_CCTRM_CURRENT_TRIM_LEVE9               (0x06U)    /* output current trim level9 */
#define     _07_PORT_CCTRM_CURRENT_TRIM_LEVE8               (0x07U)    /* output current trim level8 */
#define     _08_PORT_CCTRM_CURRENT_TRIM_LEVE7               (0x08U)    /* output current trim level7 */
#define     _09_PORT_CCTRM_CURRENT_TRIM_LEVE6               (0x09U)    /* output current trim level6 */
#define     _0A_PORT_CCTRM_CURRENT_TRIM_LEVE5               (0x0AU)    /* output current trim level5 */
#define     _0B_PORT_CCTRM_CURRENT_TRIM_LEVE4               (0x0BU)    /* output current trim level4 */
#define     _0C_PORT_CCTRM_CURRENT_TRIM_LEVE3               (0x0CU)    /* output current trim level3 */
#define     _0D_PORT_CCTRM_CURRENT_TRIM_LEVE2               (0x0DU)    /* output current trim level2 */
#define     _0E_PORT_CCTRM_CURRENT_TRIM_LEVE1               (0x0EU)    /* output current trim level1 */
#define     _0F_PORT_CCTRM_CURRENT_TRIM_LEVE0               (0x0FU)    /* output current trim level0 */


/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif

