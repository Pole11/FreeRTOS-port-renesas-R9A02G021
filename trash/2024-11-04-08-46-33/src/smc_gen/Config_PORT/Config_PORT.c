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
* File Name        : Config_PORT.c
* Component Version: 1.0.1
* Device(s)        : R9A02G0214CNE
* Description      : This file implements device driver for Config_PORT.
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
#include "Config_PORT.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_PORT_Create
* Description  : This function initializes the port I/O.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_PORT_Create(void)
{
    R_PFS->PRWCNTR = _01_PORT_PRWCNTR_READ_WAIT;

    /* Set PORT1 registers */
    R_PFS->P111PFS = _00000000_Pn11PFS_PULLUP_OFF | _00000000_Pn11PFS_CMOS_OUTPUT | 
                     _00000000_Pn11PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn11PFS_OUTPUT_LOW | 
                     _00000000_Pn11PFS_MODE_UNUSED;
    R_PFS->P110PFS = _00000000_Pn10PFS_PULLUP_OFF | _00000000_Pn10PFS_CMOS_OUTPUT | 
                     _00000000_Pn10PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn10PFS_OUTPUT_LOW | 
                     _00000000_Pn10PFS_MODE_UNUSED;
    R_PFS->P109PFS = _00000000_Pn09PFS_PULLUP_OFF | _00000000_Pn09PFS_CMOS_OUTPUT | 
                     _00000000_Pn09PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn09PFS_OUTPUT_LOW | 
                     _00000000_Pn09PFS_MODE_UNUSED;
    R_PFS->P108PFS = _00000000_Pn08PFS_PULLUP_OFF | _00000000_Pn08PFS_CMOS_OUTPUT | 
                     _00000000_Pn08PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn08PFS_OUTPUT_LOW | 
                     _00000000_Pn08PFS_MODE_UNUSED;
    R_PFS->P107PFS = _00000000_Pn07PFS_PULLUP_OFF | _00000000_Pn07PFS_CMOS_OUTPUT | 
                     _00000000_Pn07PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn07PFS_OUTPUT_LOW | 
                     _00000000_Pn07PFS_MODE_UNUSED;
    R_PFS->P106PFS = _00000000_Pn06PFS_PULLUP_OFF | _00000000_Pn06PFS_CMOS_OUTPUT | 
                     _00000000_Pn06PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn06PFS_OUTPUT_LOW | 
                     _00000000_Pn06PFS_MODE_UNUSED;
    R_PFS->P105PFS = _00000000_Pn05PFS_PULLUP_OFF | _00000000_Pn05PFS_CMOS_OUTPUT | 
                     _00000000_Pn05PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn05PFS_OUTPUT_LOW | 
                     _00000000_Pn05PFS_MODE_UNUSED;
    R_PFS->P104PFS = _00000000_Pn04PFS_PULLUP_OFF | _00000000_Pn04PFS_CMOS_OUTPUT | 
                     _00000000_Pn04PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn04PFS_OUTPUT_LOW | 
                     _00000000_Pn04PFS_MODE_UNUSED;
    R_PFS->P103PFS = _00000000_Pn03PFS_PULLUP_OFF | _00000000_Pn03PFS_CMOS_OUTPUT | 
                     _00000000_Pn03PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn03PFS_OUTPUT_LOW | 
                     _00000000_Pn03PFS_MODE_UNUSED;
    R_PFS->P102PFS = _00000000_Pn02PFS_PULLUP_OFF | _00000000_Pn02PFS_CMOS_OUTPUT | 
                     _00000000_Pn02PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn02PFS_OUTPUT_LOW | 
                     _00000000_Pn02PFS_MODE_UNUSED;
    R_PFS->P101PFS = _00000000_Pn01PFS_PULLUP_OFF | _00000000_Pn01PFS_CMOS_OUTPUT | 
                     _00000000_Pn01PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn01PFS_OUTPUT_LOW | 
                     _00000000_Pn01PFS_MODE_UNUSED;
    R_PFS->P100PFS = _00000000_Pn00PFS_PULLUP_OFF | _00000000_Pn00PFS_CMOS_OUTPUT | 
                     _00000000_Pn00PFS_ELC_EDGE_DETECT_NONE | _00000000_Pn00PFS_OUTPUT_LOW | 
                     _00000004_Pn00PFS_MODE_OUTPUT | _00000000_Pn00PFS_GPIO_USED;
    R_PORT1->EOSR = _0000_EOSRn11_EVENT_OUTPUT_NOEFFECT | _0000_EOSRn10_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EOSRn09_EVENT_OUTPUT_NOEFFECT | _0000_EOSRn08_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EOSRn07_EVENT_OUTPUT_NOEFFECT | _0000_EOSRn06_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EOSRn05_EVENT_OUTPUT_NOEFFECT | _0000_EOSRn04_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EOSRn03_EVENT_OUTPUT_NOEFFECT | _0000_EOSRn02_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EOSRn01_EVENT_OUTPUT_NOEFFECT | _0000_EOSRn00_EVENT_OUTPUT_NOEFFECT;
    R_PORT1->EORR = _0000_EORRn11_EVENT_OUTPUT_NOEFFECT | _0000_EORRn10_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EORRn09_EVENT_OUTPUT_NOEFFECT | _0000_EORRn08_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EORRn07_EVENT_OUTPUT_NOEFFECT | _0000_EORRn06_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EORRn05_EVENT_OUTPUT_NOEFFECT | _0000_EORRn04_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EORRn03_EVENT_OUTPUT_NOEFFECT | _0000_EORRn02_EVENT_OUTPUT_NOEFFECT | 
                    _0000_EORRn01_EVENT_OUTPUT_NOEFFECT | _0000_EORRn00_EVENT_OUTPUT_NOEFFECT;

    R_Config_PORT_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_PORT_Set_Output_Level
* Description  : This function set pin output level.
* Arguments    : Pmn -
*                    the pin you want to set, ex:'P101'.
*                outputLevel -
*                    define high/low output level : 0 (No effect on output) , 1 (low level) , 2 (high level).
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_PORT_Set_Output_Level(char Pmn[], e_output_level_t outputLevel)
{
    MD_STATUS status = MD_OK;

    uint16_t w_regval;
    char * w_port_name = Pmn;
    uint16_t w_length = 0U;

    while (*w_port_name++)
    {
        w_length++;
    }

    if (4U == w_length)
    {
        uint16_t w_port_unit = Pmn[1] - '0';
        uint16_t w_pin_channel = ((Pmn[2] - '0') * 10) + (Pmn[3] -'0');

        if ((outputLevel > 2U) || (w_port_unit > 4U) || (w_pin_channel > 15U))
        {
            status = MD_ARGERROR;
        }
        else
        {
            w_regval = (uint16_t)(1U << w_pin_channel);

            if (HIGH == outputLevel)
            {
                if (0U == w_port_unit)
                {
                    R_PORT0->PORR &= (uint16_t)~w_regval;
                    R_PORT0->POSR |= w_regval;
                }
                else if (1U == w_port_unit)
                {
                    R_PORT1->PORR &= (uint16_t)~w_regval;
                    R_PORT1->POSR |= w_regval;
                }
                else if (2U == w_port_unit)
                {
                    R_PORT2->PORR &= (uint16_t)~w_regval;
                    R_PORT2->POSR |= w_regval;
                }
                else if (3U == w_port_unit)
                {
                    R_PORT3->PORR &= (uint16_t)~w_regval;
                    R_PORT3->POSR |= w_regval;
                }
                else
                {
                    R_PORT4->PORR &= (uint16_t)~w_regval;
                    R_PORT4->POSR |= w_regval;
                }
            }
            else if (LOW == outputLevel)
            {
                if (0U == w_port_unit)
                {
                    R_PORT0->POSR &= (uint16_t)~w_regval;
                    R_PORT0->PORR |= w_regval;
                }
                else if (1U == w_port_unit)
                {
                    R_PORT1->POSR &= (uint16_t)~w_regval;
                    R_PORT1->PORR |= w_regval;
                }
                else if (2U == w_port_unit)
                {
                    R_PORT2->POSR &= (uint16_t)~w_regval;
                    R_PORT2->PORR |= w_regval;
                }
                else if (3U == w_port_unit)
                {
                    R_PORT3->POSR &= (uint16_t)~w_regval;
                    R_PORT3->PORR |= w_regval;
                }
                else
                {
                    R_PORT4->POSR &= (uint16_t)~w_regval;
                    R_PORT4->PORR |= w_regval;
                }
            }
            else
            {
                if (0U == w_port_unit)
                {
                    R_PORT0->POSR &= (uint16_t)~w_regval;
                    R_PORT0->PORR &= (uint16_t)~w_regval;
                }
                else if (1U == w_port_unit)
                {
                    R_PORT1->POSR &= (uint16_t)~w_regval;
                    R_PORT1->PORR &= (uint16_t)~w_regval;
                }
                else if (2U == w_port_unit)
                {
                    R_PORT2->POSR &= (uint16_t)~w_regval;
                    R_PORT2->PORR &= (uint16_t)~w_regval;
                }
                else if (3U == w_port_unit)
                {
                    R_PORT3->POSR &= (uint16_t)~w_regval;
                    R_PORT3->PORR &= (uint16_t)~w_regval;
                }
                else
                {
                    R_PORT4->POSR &= (uint16_t)~w_regval;
                    R_PORT4->PORR &= (uint16_t)~w_regval;
                }
            }
        }
    }
    else
    {
        status = MD_ARGERROR;
    }

    return (status);
}

/***********************************************************************************************************************
* Function Name: R_Config_PORT_Set_Output_Level_ELC
* Description  : This function set pin output level When an ELC_PORTx signal occurs.
* Arguments    : Pmn -
*                    the pin you want to set, ex:'P101'.
*                outputLevel -
*                    define high/low output level : 0 (No effect on output) , 1 (low level) , 2 (high level).
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_PORT_Set_Output_Level_ELC(char Pmn[], e_output_level_t outputLevel)
{
    MD_STATUS status = MD_OK;

    uint16_t w_regval;
    char * w_port_name = Pmn;
    uint16_t w_length = 0U;

    while (*w_port_name++)
    {
        w_length++;
    }

    if (4U == w_length)
    {
        uint16_t w_port_unit = Pmn[1] - '0';
        uint16_t w_pin_channel = ((Pmn[2] - '0') * 10) + (Pmn[3] -'0');

        if ((outputLevel > 2U) || (w_port_unit < 1U) || (w_port_unit > 2U) || (w_pin_channel > 15U))
        {
            status = MD_ARGERROR;
        }
        else
        {
            w_regval = (uint16_t)(1U << w_pin_channel);

            if (HIGH == outputLevel)
            {
                if (1U == w_port_unit)
                {
                    R_PORT1->EORR &= (uint16_t)~w_regval;
                    R_PORT1->EOSR |= w_regval;
                }
                else
                {
                    R_PORT2->EORR &= (uint16_t)~w_regval;
                    R_PORT2->EOSR |= w_regval;
                }
            }
            else if (LOW == outputLevel)
            {
                if (1U == w_port_unit)
                {
                    R_PORT1->EOSR &= (uint16_t)~w_regval;
                    R_PORT1->EORR |= w_regval;
                }
                else
                {
                    R_PORT2->EOSR &= (uint16_t)~w_regval;
                    R_PORT2->EORR |= w_regval;
                }
            }
            else
            {
                if (1U == w_port_unit)
                {
                    R_PORT1->EOSR &= (uint16_t)~w_regval;
                    R_PORT1->EORR &= (uint16_t)~w_regval;
                }
                else
                {
                    R_PORT2->EOSR &= (uint16_t)~w_regval;
                    R_PORT2->EORR &= (uint16_t)~w_regval;
                }
            }
        }
    }
    else
    {
        status = MD_ARGERROR;
    }

    return (status);
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
