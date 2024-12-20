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
* File Name        : Config_PORT.h
* Component Version: 1.0.1
* Device(s)        : R9A02G0214CNE
* Description      : This file implements device driver for Config_PORT.
* Creation Date    : 
***********************************************************************************************************************/


/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_port.h"

#ifndef CFG_Config_PORT_H
#define CFG_Config_PORT_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
/* P300 PMR bit default value */
#define _00010000_P300_PMR_DEFAULT_VALUE                    (0x00010000U)
/* P301 PMR bit default value */
#define _00010000_P301_PMR_DEFAULT_VALUE                    (0x00010000U)
/* P302 PMR bit default value */
#define _00010000_P302_PMR_DEFAULT_VALUE                    (0x00010000U)
/* P303 PMR bit default value */
#define _00010000_P303_PMR_DEFAULT_VALUE                    (0x00010000U)

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/
typedef enum
{
    CLEAR, LOW, HIGH
} e_output_level_t;

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Config_PORT_Create (void);
MD_STATUS R_Config_PORT_Set_Output_Level (char Pmn[], e_output_level_t outputlevel);
MD_STATUS R_Config_PORT_Set_Output_Level_ELC (char Pmn[], e_output_level_t outputlevel);
void R_Config_PORT_Create_UserInit (void);
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
