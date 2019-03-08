/*
    __bihall_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __bihall_driver.h
@brief    BI_HALL Driver
@mainpage BI_HALL Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   BIHALL
@brief      BI_HALL Click Driver
@{

| Global Library Prefix | **BIHALL** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Oct 2018.**      |
| Developer             | **Nenad Filipovic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _BIHALL_H_
#define _BIHALL_H_

/** 
 * @macro T_BIHALL_P
 * @brief Driver Abstract type 
 */
#define T_BIHALL_P    const uint8_t*

/** @defgroup BIHALL_COMPILE Compilation Config */              /** @{ */

//  #define   __BIHALL_DRV_SPI__                            /**<     @macro __BIHALL_DRV_SPI__  @brief SPI driver selector */
//  #define   __BIHALL_DRV_I2C__                            /**<     @macro __BIHALL_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __BIHALL_DRV_UART__                           /**<     @macro __BIHALL_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup BIHALL_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup BIHALL_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup BIHALL_INIT Driver Initialization */              /** @{ */

#ifdef   __BIHALL_DRV_SPI__
void bihall_spiDriverInit(T_BIHALL_P gpioObj, T_BIHALL_P spiObj);
#endif
#ifdef   __BIHALL_DRV_I2C__
void bihall_i2cDriverInit(T_BIHALL_P gpioObj, T_BIHALL_P i2cObj, uint8_t slave);
#endif
#ifdef   __BIHALL_DRV_UART__
void bihall_uartDriverInit(T_BIHALL_P gpioObj, T_BIHALL_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void bihall_gpioDriverInit(T_BIHALL_P gpioObj);
                                                                       /** @} */
/** @defgroup BIHALL_FUNC Driver Functions */                   /** @{ */


/**
 * @brief Detecting south & north pole magnetic fields status function
 *
 * @return State of INT pin:
 * 0 - north pole magnetic fields;
 * 1 - south pole magnetic fields;
 *
 * Function detecting south & north pole magnetic fields status and returns the state of the INT pin.
 * INT pin can be configured to show are data registers updated with the new values or not.
 */
uint8_t bihall_detectingMagneticFields();




                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_BI_HALL_STM.c
    @example Click_BI_HALL_TIVA.c
    @example Click_BI_HALL_CEC.c
    @example Click_BI_HALL_KINETIS.c
    @example Click_BI_HALL_MSP.c
    @example Click_BI_HALL_PIC.c
    @example Click_BI_HALL_PIC32.c
    @example Click_BI_HALL_DSPIC.c
    @example Click_BI_HALL_AVR.c
    @example Click_BI_HALL_FT90x.c
    @example Click_BI_HALL_STM.mbas
    @example Click_BI_HALL_TIVA.mbas
    @example Click_BI_HALL_CEC.mbas
    @example Click_BI_HALL_KINETIS.mbas
    @example Click_BI_HALL_MSP.mbas
    @example Click_BI_HALL_PIC.mbas
    @example Click_BI_HALL_PIC32.mbas
    @example Click_BI_HALL_DSPIC.mbas
    @example Click_BI_HALL_AVR.mbas
    @example Click_BI_HALL_FT90x.mbas
    @example Click_BI_HALL_STM.mpas
    @example Click_BI_HALL_TIVA.mpas
    @example Click_BI_HALL_CEC.mpas
    @example Click_BI_HALL_KINETIS.mpas
    @example Click_BI_HALL_MSP.mpas
    @example Click_BI_HALL_PIC.mpas
    @example Click_BI_HALL_PIC32.mpas
    @example Click_BI_HALL_DSPIC.mpas
    @example Click_BI_HALL_AVR.mpas
    @example Click_BI_HALL_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __bihall_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */