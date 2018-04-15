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

/******************************************************************************
 * Preprocessor Constants
 *******************************************************************************/
/**
 * Defines the number of pins on each processor port.
 */
#define NUMBER_OF_CHANNELS_PER_PORT         8U

/**
 *  Defines the number of ports on the processor.
 */
#define NUMBER_OF_PORTS                 8U

/******************************************************************************
 * Configuration Constants
 *******************************************************************************/


/******************************************************************************
 * Macros
 *******************************************************************************/

	
/******************************************************************************
 * Typedefs
 *******************************************************************************/
/**
 * Defines the possible states for a digital output pin.
 */
 typedef enum
 {
    DIO_LOW,             /** Defines digital state ground */
    DIO_HIGH,            /** Defines digital state power */
    DIO_PIN_STATE_MAX	   /** Defines the maximum digital state */
 }DioPinState_t;

/**
 * Defines an enumerated list of all the channels (pins) on the MCU device.  
 * The last element is used to specify the maximum number of enumerated labels.
 */
typedef enum
{
   /* TODO: Populate this list based on available MCU pins */
   FCPU_HB,              /**< PORT1_0 */
   PORT1_1,              /**< PORT1_1 */
   PORT1_2,	             /**< PORT1_2 */
   PORT1_3,	             /**< PORT1_3 */
   UHF_SEL,	             /**< PORT1_4 */
   PORT1_5,	             /**< PORT1_5 */
   PORT1_6,	             /**< PORT1_6 */
   PORT1_7,	             /**< PORT1_7 */
   DIO_MAX_PIN_NUMBER    /**< MAX CHANNELS */	
}DioChannel_t;

/**
 * Defines the possible DIO pin multiplexing values.  The datasheet should be
 * reviewed for proper muxing options.
 */
typedef enum 
{
   /* TODO: Populate with possible mode options */
   DIO_MAX_MODE	
}DioMode_t;

/**
 * Defines the possible states of the channel pull-ups
 */
typedef enum 
{
   DIO_PULLUP_DISABLED,     /*< Used to disable the internal pull-ups */
   DIO_PULLUP_ENABLED,      /*< Used to enable the internal pull-ups */
   DIO_MAX_RESISTOR	        /*< Resistor states should be below this value */
}DioResistor_t;

/**
 * Defines the digital input/output configuration table elements that are used
 * by Dio_Init to configure the Dio peripheral.
 */
typedef struct 
{
	/* TODO: Add additional members for the MCU peripheral */
    DioChannel_t Channel;          /**< The I/O pin								*/
    DioResistor_t Resistor;				 /**< Pullup/Pulldown Resistor - ENABLED or DISABLED	*/
    DioDirection_t Direction;      /**< Data Direction      - OUTPUT or INPUT			*/
    DioPinState_t Data;            /**< Data                - HIGH or LOW				*/
    DioMode_t Function;            /**< Mux Function        - Dio_Peri_Select			*/
}DioConfig_t;	

/**
 * Defines the slew rate settings available
 */
typedef enum
{
  FAST,     /**< Fast slew rate is configured on the corresponding pin, */
  SLOW      /**< Slow slew rate is configured on the corresponding pin, */
}DioSlew_t;

/******************************************************************************
 * Variables
 *******************************************************************************/


/******************************************************************************
 * Function Prototypes
 *******************************************************************************/
#ifdef __cplusplus
extern "C"{
#endif

const DioConfig_t * const Dio_ConfigGet(void);

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* ${include_guard_symbol} */

/*** End of File **************************************************************/
