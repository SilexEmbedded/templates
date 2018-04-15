/** @file ${file_base}.c
 *  @author Matteo Scordino
 *  @date ${date}
 *  @version 1.0.0
 *  @copyright Copyright (c) 2017 ${copyright_holder}. All Rights Reserved. 
 *             Neither the whole nor any part of the information contained in, nor the product described in,
 *             this document may be adapted or reproduced in any material form except with the written permission
 *             of ${copyright_holder}. Distribution outside of ${copyright_holder} is strictly forbidden.
 *
 *  @brief The implementation for ${file_base}.
 * 
 *  This is the implementation file for @todo ADD_DESCRIPTION HERE
 */
 
/******************************************************************************
 * Includes
 *******************************************************************************/
#include "${file_base}.h"			/* For this modules definitions */
#include <xxx.h>				    /* For Hardware definitions     */

/******************************************************************************
 * Module Preprocessor Constants
 *******************************************************************************/

/******************************************************************************
 * Module Preprocessor Macros
 *******************************************************************************/

/******************************************************************************
 * Module Typedefs
 *******************************************************************************/

/******************************************************************************
 * Module Variable Definitions
 *******************************************************************************/
/**
 *  Defines a table of pointers to the peripheral input register on the microcontroller.
 */
static TYPE volatile * const DataIn[NUM_PORTS] =
{
	(TYPE*)&REGISTER1, (TYPE*)&REGISTER2, 
};

/******************************************************************************
 * Function Prototypes
 *******************************************************************************/

/******************************************************************************
 * Function Definitions
 *******************************************************************************/
/******************************************************************************
 * Function : ${file_base}_init()
 *//** 
 * \b Description:
 *
 * This function is used to initialize the ${file_base} 
 *  
 * PRE-CONDITION: Configuration table needs to populated (sizeof > 0) <br>
 * PRE-CONDITION: NUMBER_OF_CHANNELS_PER_PORT > 0 <br>
 * PRE-CONDITION: NUMBER_OF_PORTS > 0 <br>
 * PRE-CONDITION: The MCU clocks must be configured and enabled.
 *
 * POST-CONDITION: The ${file_base} peripheral is setup with the configuration settings.
 *
 * @param  		Config is a pointer to the configuration table that contains
 *				the initialization for the peripheral.
 *
 * @return 		void
 *
 * \b Example:
 * @code
 * 	const DioConfig_t *DioConfig = Dio_ConfigGet();
 *
 * 	Dio_Init(DioConfig);
 * @endcode
 *
 * @see Dio_Init
 * @see Dio_ChannelRead
 * @see Dio_ChannelWrite
 * @see Dio_ChannelToggle
 * @see Dio_ChannelModeSet
 * @see Dio_ChannelDirectionSet
 * @see Dio_RegisterWrite
 * @see Dio_RegisterRead
 * @see Dio_CallbackRegister
 *
 * <br><b> - HISTORY OF CHANGES - </b>
 *  
 * <table align="left" style="width:800px">
 * <tr><td> Date       </td><td> Software Version </td><td> Initials </td><td> Description </td></tr>
 * <tr><td> 09/01/2015 </td><td> 0.5.0            </td><td> JWB      </td><td> Interface Created </td></tr>
 * <tr><td> 11/10/2015 </td><td> 1.0.0            </td><td> JWB      </td><td> Interface Created </td></tr>
 * </table><br><br>
 * <hr>
 *******************************************************************************/
void Dio_Init(const DioConfig_t * Config)
{
	/* TODO: Define implementation */
}


/*************** END OF FUNCTIONS ***************************************************************************/
