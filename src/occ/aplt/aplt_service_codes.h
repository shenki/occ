/* IBM_PROLOG_BEGIN_TAG                                                   */
/* This is an automatically generated prolog.                             */
/*                                                                        */
/* $Source: src/occ/aplt/aplt_service_codes.h $                           */
/*                                                                        */
/* OpenPOWER OnChipController Project                                     */
/*                                                                        */
/* Contributors Listed Below - COPYRIGHT 2011,2014                        */
/* [+] Google Inc.                                                        */
/* [+] International Business Machines Corp.                              */
/*                                                                        */
/* Licensed under the Apache License, Version 2.0 (the "License");        */
/* you may not use this file except in compliance with the License.       */
/* You may obtain a copy of the License at                                */
/*                                                                        */
/*     http://www.apache.org/licenses/LICENSE-2.0                         */
/*                                                                        */
/* Unless required by applicable law or agreed to in writing, software    */
/* distributed under the License is distributed on an "AS IS" BASIS,      */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or        */
/* implied. See the License for the specific language governing           */
/* permissions and limitations under the License.                         */
/*                                                                        */
/* IBM_PROLOG_END_TAG                                                     */

#ifndef _APLT_SERVICE_CODES_H_
#define _APLT_SERVICE_CODES_H_

//*************************************************************************
// Includes
//*************************************************************************
#include <comp_ids.h>
//*************************************************************************
// Externs
//*************************************************************************

//*************************************************************************
// Macros
//*************************************************************************

//*************************************************************************
// Defines/Enums
//*************************************************************************
enum apltModuleId
{
    APLT_MID_INIT_APPLET_MNGR       =  APLT_COMP_ID | 0x00,
    APLT_MID_RUN_APPLET             =  APLT_COMP_ID | 0x01,
    APLT_MID_START_APPLET           =  APLT_COMP_ID | 0x02,
    APLT_MNGR_THREAD                =  APLT_COMP_ID | 0x03,
    APLT_MID_INIT_APPLET_ADDR       =  APLT_COMP_ID | 0x04,

    TEST_APLT_MODID_ERRLTEST        =  APLT_COMP_ID | 0xF0,
    TEST_APLT_MODID_SENSORTEST      =  APLT_COMP_ID | 0xF1,
};

//*************************************************************************
// Structures
//*************************************************************************

//*************************************************************************
// Globals
//*************************************************************************

//*************************************************************************
// Function Prototypes
//*************************************************************************

//*************************************************************************
// Functions
//*************************************************************************

#endif /* #ifndef _APLT_SERVICE_CODES_H_ */