/****************************************************************************
* Title                 :   ${file_base}
* Filename              :   ${file_base}.h
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
* IN NO EVENT SHALL BENINGO ENGINEERING OR ITS CONTRIBUTORS BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
*****************************************************************************/
/*************** INTERFACE CHANGE LIST **************************************
*
*    Date		Version   	Author         		Description 
*    ${date}	1.0.0   	Matteo Scordino   	Interface Created.
*
*****************************************************************************/
/** @file ${file_base}.h
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
