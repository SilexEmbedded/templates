/*******************************************************************************
* Title                 :   ${file_base}
* Filename              :   ${file_base}.c
* Author                :   Matteo Scordino
* Origin Date           :   ${date}
* Version               :   1.0.0
* Compiler              :   TBD
* Target                :   TBD
* Notes                 :   None
*
* THIS SOFTWARE IS PROVIDED BY SILEX EMBEDDED LTD "AS IS" AND ANY EXPRESSED
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL SILEX EMBEDDED LTD OR ITS CONTRIBUTORS BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
*******************************************************************************/
/*************** INTERFACE CHANGE LIST **************************************
*
*    Date		Version   	Author         		Description 
*    ${date}	1.0.0   	Matteo Scordino   	Implementation Created.
*
*****************************************************************************/
/** @file ${file_base}.c
 *  @brief The implementation for ${file_base}.
 *  @author Matteo Scordino
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
