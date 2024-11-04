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
* File Name        : Config_ADC.c
* Component Version: 1.0.0
* Device(s)        : R9A02G0214CNE
* Description      : This file implements device driver for Config_ADC.
* Creation Date    : 
***********************************************************************************************************************/

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "Config_ADC.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Create
* Description  : This function initializes the ADC module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_ADC_Create(void)
{
    R_MSTP->MSTPCRD_b.MSTPD16 = 0U;    /* cancel the module-stop state */
    R_CLIC->clicintie34_b.IE = 0U;    /* disable ADC_ENDI interrupt */
    R_ICU->IELSR15 &= 0xFFFEFFFFU;    /* clear ADC_ENDI interrupt flag */
    /* Set INTAD priority */
    R_CLIC->clicintctl34 = _0F_INT_PRIORITY_15;    /* set ADC_ENDI interrupt level 15 priority */
    R_CLIC->clicintattr34 = _C3_INT_VECTOR_MODE;    /* set ADC_ENDI interrupt to vector mode */
    R_ICU->IELSR15 &= 0xFFFFFFE0U;
    R_ICU->IELSR15 |= 0x1FU;    /* set value of ADC_ENDI interrupt event selection */
    /* Set ANI0 pin */
    R_PFS->P002PFS_b.PMR = 0U;
    R_PFS->P002PFS_b.PCR = 0U;
    R_PFS->P002PFS_b.PDR = 0U;
    R_PFS->P002PFS_b.ASEL = 1U;
    R_ADC120->ADM0 = _00_AD_OPERMODE_SELECT | _00_AD_CONVERSION_CLOCK_32 | _00_AD_TIME_MODE_NORMAL_1;
    R_ADC120->ADM1 = _00_AD_TRIGGER_SOFTWARE | _00_AD_PCLKB_BETWEEN_4_48 | _00_AD_CONVMODE_CONSELECT;
    R_ADC120->ADM2 = _00_AD_NEGATIVE_VSS | _00_AD_AREA_MODE_1 | _00_AD_RESOLUTION_10BIT;
    R_ADC120->ADUL = _FF_AD_ADUL_VALUE;
    R_ADC120->ADLL = _00_AD_ADLL_VALUE;
    R_ADC120->ADS = _00_AD_INPUT_CHANNEL_0;
    R_ADC120->ADM2 &= _3F_AD_POSITIVE_CLEAR;    /* clear ADREFP1 and ADREFP0 */
    R_ADC120->ADM2 |= _00_AD_POSITIVE_VCC;    /* set the reference voltage */

    /* VCC, AVREFP is selected, Reference voltage stability wait time(A), 4.8us */
    R_BSP_DelayCycle(AD_WAITTIME_A);

    R_Config_ADC_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Start
* Description  : This function starts the AD converter.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_ADC_Start(void)
{
    R_ICU->IELSR15 &= 0xFFFEFFFFU;    /* clear ADC_ENDI interrupt flag */
    R_CLIC->clicintie34_b.IE = 1U;    /* enable ADC_ENDI interrupt */
    R_ADC120->ADM0_b.ADCS = 1U;    /* enables conversion operation */
}

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Stop
* Description  : This function stops the AD converter.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_ADC_Stop(void)
{
    R_ADC120->ADM0_b.ADCS = 0U;    /* stops conversion operation */

    /* Wait 0.2us */
    R_BSP_DelayCycle(AD_WAITTIME);
    R_CLIC->clicintie34_b.IE = 0U;    /* disable ADC_ENDI interrupt */
    R_ICU->IELSR15 &= 0xFFFEFFFFU;    /* clear ADC_ENDI interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Set_OperationOn
* Description  : This function enables AD voltage comparator operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_ADC_Set_OperationOn(void)
{
    R_ADC120->ADM0_b.ADCE = 1U;    /* enable AD comparator */

    /* Reference voltage stability wait time (B) 1us */
    R_BSP_DelayCycle(AD_WAITTIME_B);
}

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Set_OperationOff
* Description  : This function disables AD voltage comparator operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_ADC_Set_OperationOff(void)
{
    R_ADC120->ADM0_b.ADCE = 0U;    /* disable AD comparator */
}

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Set_SnoozeOn
* Description  : This function enables AD wakeup function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_ADC_Set_SnoozeOn(void)
{
    R_ADC120->ADM2_b.AWC = 1U;    /* use wakeup function */
}

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Set_SnoozeOff
* Description  : This function disables AD wakeup function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_ADC_Set_SnoozeOff(void)
{
    R_ADC120->ADM2_b.AWC = 0U;    /* stop wakeup function */
}

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Get_Result_10bit
* Description  : This function returns the high 10 bits conversion result in the buffer.
* Arguments    : buffer -
*                    the address where to write the conversion result
* Return Value : None
***********************************************************************************************************************/
void R_Config_ADC_Get_Result_10bit(uint16_t * const buffer)
{
    *buffer = (uint16_t)(R_ADC120->ADCR0 >> 6U);
}

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Set_ADChannel
* Description  : This function selects analog input channel.
* Arguments    : channel -
*                    analog input channel
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_ADC_Set_ADChannel(e_ad_channel_t channel)
{
    MD_STATUS status = MD_OK;

    if (((channel > ADCHANNEL5) && (channel < ADCHANNEL16)) || ((channel > ADCHANNEL19)
        && (channel < ADTEMPERSENSOR0)) || (channel > ADINTERREFVOLT))
    {
        status = MD_ARGERROR;
    }
    else
    {
        R_ADC120->ADS = (uint8_t)channel;
    }

    return (status);
}

/***********************************************************************************************************************
* Function Name: R_Config_ADC_Set_TestChannel
* Description  : This function sets test function.
* Arguments    : channel -
*                    sets test channel
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_ADC_Set_TestChannel(e_test_channel_t channel)
{
    MD_STATUS status = MD_OK;

    if ((1U == channel) || (4U <= channel))
    {
        status = MD_ARGERROR;
    }
    else
    {
        R_ADC120->ADTES = (uint8_t)channel;
    }

    return (status);
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
