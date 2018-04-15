/** @file ${file_base}.h
 *  @author Matteo Scordino
 *  @date ${date}
 *  @version 1.0.0
 *  @copyright Copyright (c) 2017 ${copyright_holder}. All Rights Reserved. 
 *             Neither the whole nor any part of the information contained in, nor the product described in,
 *             this document may be adapted or reproduced in any material form except with the written permission
 *             of ${copyright_holder}. Distribution outside of ${copyright_holder} is strictly forbidden.
 *
 *  @brief The interface definition for ${file_base}.
 * 
 *  This is the header file for @todo ADD_DESCRIPTION HERE
 */
 
#ifndef ${include_guard_symbol}
#define ${include_guard_symbol}

/******************************************************************************
 * Includes
 *******************************************************************************/
#include <stdint.h>		    /* For standard type definitions */

/******************************************************************************
 * Preprocessor Constants
 *******************************************************************************/


/******************************************************************************
 * Configuration Constants
 *******************************************************************************/


/******************************************************************************
 * Macros
 *******************************************************************************/


	
/******************************************************************************
 * Typedefs
 *******************************************************************************/


/******************************************************************************
 * Variables
 *******************************************************************************/


/******************************************************************************
 * Function Prototypes
 *******************************************************************************/
#ifdef __cplusplus
extern "C"{
#endif

void Dio_Init(const DioConfig_t * const Config);
DioPinState_t Dio_ChannelRead(DioChannel_t Channel);
void Dio_ChannelWrite(DioChannel_t Channel, DioPinState_t State);
void Dio_ChannelToggle(DioChannel_t Channel);
void Dio_ChannelModeSet(DioChannel_t Channel, DioMode_t Mode);
void Dio_ChannelDirectionSet(DioChannel_t Channel, PinModeEnum_t Mode);
void Dio_RegisterWrite(uint32_t Address, TYPE Value);
TYPE Dio_RegisterRead(uint32_t Address);
void Dio_CallbackRegister(DioCallback_t Function, TYPE (*CallbackFunction)(type));

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* ${include_guard_symbol} */

/*** End of File **************************************************************/
