/***************************************************************************//**
 * @file
 * @brief Board Control
 *******************************************************************************
 * # License
 * <b>Copyright 2022 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef SL_BOARD_CONTROL_CONFIG_H
#define SL_BOARD_CONTROL_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

// <q SL_BOARD_ENABLE_VCOM> Enable Virtual COM UART
// <i> Default: 0
#define SL_BOARD_ENABLE_VCOM                    1

// <q SL_BOARD_ENABLE_DISPLAY> Enable Display
// <i> Default: 0
#define SL_BOARD_ENABLE_DISPLAY                 0

// <q SL_BOARD_ENABLE_SENSOR_RHT> Enable Relative Humidity and Temperature sensor
// <i> Default: 0
#define SL_BOARD_ENABLE_SENSOR_RHT              0

// <q SL_BOARD_ENABLE_SENSOR_HALL> Enable Hall Effect sensor
// <i> Default: 0
#define SL_BOARD_ENABLE_SENSOR_HALL             0

// <q SL_BOARD_ENABLE_SENSOR_MICROPHONE> Enable Microphone
// <i> Default: 0
#define SL_BOARD_ENABLE_SENSOR_MICROPHONE       0

// <q SL_BOARD_ENABLE_MEMORY_QSPI> Enable QSPI Flash
// <i> Default: 0
#define SL_BOARD_ENABLE_MEMORY_QSPI             0

// <q SL_BOARD_ENABLE_MEMORY_SDCARD> Enable SD Card
// <i> Default: 0
#define SL_BOARD_ENABLE_MEMORY_SDCARD           0

// <<< end of configuration section >>>

// <<< sl:start pin_tool >>>

// <gpio> SL_BOARD_ENABLE_VCOM
// $[GPIO_SL_BOARD_ENABLE_VCOM]
#ifndef SL_BOARD_ENABLE_VCOM_PORT               
#define SL_BOARD_ENABLE_VCOM_PORT                gpioPortE
#endif
#ifndef SL_BOARD_ENABLE_VCOM_PIN                
#define SL_BOARD_ENABLE_VCOM_PIN                 1
#endif
// [GPIO_SL_BOARD_ENABLE_VCOM]$

// <gpio> SL_BOARD_ENABLE_DISPLAY
// $[GPIO_SL_BOARD_ENABLE_DISPLAY]
#ifndef SL_BOARD_ENABLE_DISPLAY_PORT            
#define SL_BOARD_ENABLE_DISPLAY_PORT             gpioPortA
#endif
#ifndef SL_BOARD_ENABLE_DISPLAY_PIN             
#define SL_BOARD_ENABLE_DISPLAY_PIN              9
#endif
// [GPIO_SL_BOARD_ENABLE_DISPLAY]$

// <gpio> SL_BOARD_ENABLE_SENSOR_RHT
// $[GPIO_SL_BOARD_ENABLE_SENSOR_RHT]
#ifndef SL_BOARD_ENABLE_SENSOR_RHT_PORT         
#define SL_BOARD_ENABLE_SENSOR_RHT_PORT          gpioPortB
#endif
#ifndef SL_BOARD_ENABLE_SENSOR_RHT_PIN          
#define SL_BOARD_ENABLE_SENSOR_RHT_PIN           3
#endif
// [GPIO_SL_BOARD_ENABLE_SENSOR_RHT]$

// <gpio> SL_BOARD_ENABLE_SENSOR_HALL
// $[GPIO_SL_BOARD_ENABLE_SENSOR_HALL]
#ifndef SL_BOARD_ENABLE_SENSOR_HALL_PORT        
#define SL_BOARD_ENABLE_SENSOR_HALL_PORT         gpioPortB
#endif
#ifndef SL_BOARD_ENABLE_SENSOR_HALL_PIN         
#define SL_BOARD_ENABLE_SENSOR_HALL_PIN          3
#endif
// [GPIO_SL_BOARD_ENABLE_SENSOR_HALL]$

// <gpio> SL_BOARD_ENABLE_SENSOR_MICROPHONE
// $[GPIO_SL_BOARD_ENABLE_SENSOR_MICROPHONE]
#ifndef SL_BOARD_ENABLE_SENSOR_MICROPHONE_PORT  
#define SL_BOARD_ENABLE_SENSOR_MICROPHONE_PORT   gpioPortD
#endif
#ifndef SL_BOARD_ENABLE_SENSOR_MICROPHONE_PIN   
#define SL_BOARD_ENABLE_SENSOR_MICROPHONE_PIN    0
#endif
// [GPIO_SL_BOARD_ENABLE_SENSOR_MICROPHONE]$

// <gpio> SL_BOARD_ENABLE_MEMORY_QSPI
// $[GPIO_SL_BOARD_ENABLE_MEMORY_QSPI]
#ifndef SL_BOARD_ENABLE_MEMORY_QSPI_PORT        
#define SL_BOARD_ENABLE_MEMORY_QSPI_PORT         gpioPortG
#endif
#ifndef SL_BOARD_ENABLE_MEMORY_QSPI_PIN         
#define SL_BOARD_ENABLE_MEMORY_QSPI_PIN          13
#endif
// [GPIO_SL_BOARD_ENABLE_MEMORY_QSPI]$

// <gpio> SL_BOARD_ENABLE_MEMORY_SDCARD
// $[GPIO_SL_BOARD_ENABLE_MEMORY_SDCARD]
#ifndef SL_BOARD_ENABLE_MEMORY_SDCARD_PORT      
#define SL_BOARD_ENABLE_MEMORY_SDCARD_PORT       gpioPortE
#endif
#ifndef SL_BOARD_ENABLE_MEMORY_SDCARD_PIN       
#define SL_BOARD_ENABLE_MEMORY_SDCARD_PIN        7
#endif
// [GPIO_SL_BOARD_ENABLE_MEMORY_SDCARD]$

// <<< sl:end pin_tool >>>

#endif // SL_BOARD_CONTROL_CONFIG_H
