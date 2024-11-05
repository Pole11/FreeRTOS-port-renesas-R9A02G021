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
* File Name        : r_cg_ad.h
* Version          : 1.0.30
* Device(s)        : R9A02G0214CNE
* Description      : General header file for ADC peripheral.
* Creation Date    : 
***********************************************************************************************************************/


#ifndef ADC_H
#define ADC_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    AD Converter Mode Register 0 (ADM0)
*/
/* AD conversion operation control (ADCS) */
#define _00_AD_CONVERSION_DISABLE              (0x00U)    /* disable AD conversion operation control */
#define _80_AD_CONVERSION_ENABLE               (0x80U)    /* enable AD conversion operation control */
/* Specification of AD conversion operation mode (ADMD) */
#define _00_AD_OPERMODE_SELECT                 (0x00U)    /* select operation mode */
#define _40_AD_OPERMODE_SCAN                   (0x40U)    /* scan operation mode */
/* AD conversion clock selection (FR[2:0]) */
#define _00_AD_CONVERSION_CLOCK_32             (0x00U)    /* PCLKB/32 */
#define _08_AD_CONVERSION_CLOCK_16             (0x08U)    /* PCLKB/16 */
#define _10_AD_CONVERSION_CLOCK_8              (0x10U)    /* PCLKB/8 */
#define _18_AD_CONVERSION_CLOCK_4              (0x18U)    /* PCLKB/4 */
#define _20_AD_CONVERSION_CLOCK_2              (0x20U)    /* PCLKB/2 */
#define _28_AD_CONVERSION_CLOCK_1              (0x28U)    /* PCLKB */
/* Specification AD conversion time mode(LV[1:0]) */
#define _00_AD_TIME_MODE_NORMAL_1              (0x00U)    /* normal 1 mode */
#define _02_AD_TIME_MODE_NORMAL_2              (0x02U)    /* normal 2 mode */
#define _04_AD_TIME_MODE_LOWVOLTAGE_1          (0x04U)    /* low-voltage 1 mode */
#define _06_AD_TIME_MODE_LOWVOLTAGE_2          (0x06U)    /* low-voltage 2 mode */
/* AD comparator operation control (ADCE) */
#define _00_AD_COMPARATOR_DISABLE              (0x00U)    /* disable comparator operation control */
#define _01_AD_COMPARATOR_ENABLE               (0x01U)    /* enable comparator operation control */

/*
    AD Converter Mode Register 1 (ADM1)
*/
/* AD trigger mode selection (ADTMD[1:0]) */
#define _00_AD_TRIGGER_SOFTWARE                (0x00U)    /* software trigger mode (wait and no wait) */
#define _80_AD_TRIGGER_HARDWARE_NOWAIT         (0x80U)    /* hardware trigger mode (no wait) */
#define _C0_AD_TRIGGER_HARDWARE_WAIT           (0xC0U)    /* hardware trigger mode (wait) */
/* AD conversion mode selection (ADSCM)*/
#define _00_AD_CONVMODE_CONSELECT              (0x00U)    /* continuous conversion mode */
#define _20_AD_CONVMODE_ONESELECT              (0x20U)    /* one-shot conversion mode */
/* PCLKB input frequency setting (ADLSP)*/
#define _00_AD_PCLKB_BETWEEN_4_48              (0x00U)    /* 4 MHz < PCLKB = 48 MHz */
#define _08_AD_PCLKB_BETWEEN_1_4               (0x08U)    /* 1 MHz = PCLKB = 4 MHz */
/* Trigger signal selection (ADTRS[2:0]) */
#define _00_AD_TRIGGER_TAU0_ENDI1              (0x00U)    /* TAU0_ENDI1 */
#define _02_AD_TRIGGER_RTC_ALM_OR_PRD          (0x02U)    /* RTC_ALM_OR_PRD */
#define _03_AD_TRIGGER_TML32_OUTI              (0x03U)    /* TML32_OUTI */
#define _04_AD_TRIGGER_ELC                     (0x04U)    /* event input from ELC*/

/*
    AD Converter Mode Register 2 (ADM2)
*/
/* AD VREF(+) selection (ADREFP[1:0]) */
#define _00_AD_POSITIVE_VCC                    (0x00U)    /* use VCC as VREF(+) */
#define _40_AD_POSITIVE_AVREFP                 (0x40U)    /* use AVREFP as VREF(+) */
#define _80_AD_POSITIVE_INTERVOLT              (0x80U)    /* use internal voltage as VREF(+) */
#define _C0_AD_POSITIVE_DISCHARGE              (0xC0U)    /* discharge */
#define _3F_AD_POSITIVE_CLEAR                  (0x3FU)    /* clear ADREFP1 and ADREFP0 */
/* AD VREF(-) selection (ADREFM) */
#define _00_AD_NEGATIVE_VSS                    (0x00U)    /* use VSS as VREF(-) */
#define _20_AD_NEGATIVE_AVREFM                 (0x20U)    /* use AVREFM as VREF(-) */
/* AD conversion result upper/lower bound value selection (ADRCK) */
#define _00_AD_AREA_MODE_1                     (0x00U)    /* generates ADC_ENDI when ADLL <= ADCRn <= ADUL */
#define _08_AD_AREA_MODE_2_3                   (0x08U)    /* generates ADC_ENDI when ADUL < ADCRn or ADLL > ADCRn */
/* Specification of the SNOOZE mode (AWC) */
#define _00_AD_WAKEUP_OFF                      (0x00U)    /* do not use the Snooze mode */
#define _04_AD_WAKEUP_ON                       (0x04U)    /* use the Snooze mode */
/* AD resolution selection (ADTYP[1:0]) */
#define _00_AD_RESOLUTION_10BIT                (0x00U)    /* 10 bits */
#define _01_AD_RESOLUTION_8BIT                 (0x01U)    /* 8 bits */
#define _02_AD_RESOLUTION_12BIT                (0x02U)    /* 12 bits */

/*
    Analog Input Channel Specification Register(ADS)
*/
/* Specification of analog input channel(ADISS, ADS[4:0]) */
/* Select mode */
#define _00_AD_INPUT_CHANNEL_0                 (0x00U)    /* ANI0 */
#define _01_AD_INPUT_CHANNEL_1                 (0x01U)    /* ANI1 */
#define _02_AD_INPUT_CHANNEL_2                 (0x02U)    /* ANI2 */
#define _03_AD_INPUT_CHANNEL_3                 (0x03U)    /* ANI3 */
#define _04_AD_INPUT_CHANNEL_4                 (0x04U)    /* ANI4 */
#define _05_AD_INPUT_CHANNEL_5                 (0x05U)    /* ANI5 */
#define _10_AD_INPUT_CHANNEL_16                (0x10U)    /* ANI16 */
#define _11_AD_INPUT_CHANNEL_17                (0x11U)    /* ANI17 */
#define _12_AD_INPUT_CHANNEL_18                (0x12U)    /* ANI18 */
#define _13_AD_INPUT_CHANNEL_19                (0x13U)    /* ANI19 */
#define _80_AD_INPUT_TEMPERSENSOR_0            (0x80U)    /* temperature sensor output voltage */
#define _81_AD_INPUT_INTERREFVOLT              (0x81U)    /* internal reference voltage */
/* Scan mode */
#define _00_AD_INPUT_CHANNEL_0_3               (0x00U)    /* ANI0 - ANI3 */
#define _01_AD_INPUT_CHANNEL_1_4               (0x01U)    /* ANI1 - ANI4 */
#define _02_AD_INPUT_CHANNEL_2_5               (0x02U)    /* ANI2 - ANI5 */

/*
    AD Test Register (ADTES)
*/
/* AD test mode signal (ADTES[1:0])*/
#define _00_AD_NORMAL_INPUT                    (0x00U)    /* normal mode */
#define _02_AD_TEST_AVREFM                     (0x02U)    /* use AVREFM as test signal */
#define _03_AD_TEST_AVREFP                     (0x03U)    /* use AVREFP as test signal */

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
