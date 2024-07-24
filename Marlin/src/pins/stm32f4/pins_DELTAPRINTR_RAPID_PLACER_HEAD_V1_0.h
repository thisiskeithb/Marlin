/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2024 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Deltaprintr Rapid Placer Head V1.0 pin assignments
 * Schematic: Link TBD
 * STM32F401RCT6
 */

#include "env_validate.h"

#ifndef BOARD_INFO_NAME
  #define BOARD_INFO_NAME "Rapid Placer V1.0"
#endif

#define BOARD_WEBSITE_URL "deltaprintr.com"

//
// LED
//
#ifndef LED_PIN
  #define LED_PIN                           PC9   // U$35
#endif

// Onboard I2C EEPROM
#if ANY(NO_EEPROM_SELECTED, I2C_EEPROM)
  #undef NO_EEPROM_SELECTED
  #define I2C_EEPROM
  #define SOFT_I2C_EEPROM                         // Force the use of Software I2C
  #define I2C_SCL_PIN                       PB8
  #define I2C_SDA_PIN                       PB9
  #define MARLIN_EEPROM_SIZE              0x1000  // 4K
#endif

//
// Limit Switches
//
// TMC2208s: Must use G92 to set home positions since there are no physical endstops on the toolhead.
// TMC2209s: Can use Sensorless homing.
//
#define X_DIAG_PIN                          PB5
#define Y_DIAG_PIN                          PB6
#define I_DIAG_PIN                          PB7
#define J_DIAG_PIN                          PC15

#define X_STOP_PIN                    X_DIAG_PIN
#define Y_STOP_PIN                    Y_DIAG_PIN
#define I_STOP_PIN                    I_DIAG_PIN
#define J_STOP_PIN                    J_DIAG_PIN

//
// Steppers
//
#define X_ENABLE_PIN                        PC10  // J1
#define X_STEP_PIN                          PC11
#define X_DIR_PIN                           PC12

#define Y_ENABLE_PIN                        PB2   // J2
#define Y_STEP_PIN                          PB1
#define Y_DIR_PIN                           PB0

#define Z_ENABLE_PIN                        -1
#define Z_STEP_PIN                          PA10  // Unused. Assigned so Marlin will compile
#define Z_DIR_PIN                           -1

#define I_ENABLE_PIN                        PC3   // U$34
#define I_STEP_PIN                          PC2
#define I_DIR_PIN                           PC1

#define J_ENABLE_PIN                        PB13  // U$33
#define J_STEP_PIN                          PB12
#define J_DIR_PIN                           PB10

#if HAS_TMC_UART
  /**
   * TMC220x stepper drivers
   * Hardware serial communication ports
   */
  #define X_HARDWARE_SERIAL   MSerial6
  #define Y_HARDWARE_SERIAL   MSerial6
  #define I_HARDWARE_SERIAL   MSerial6
  #define J_HARDWARE_SERIAL   MSerial6

  // Default TMC slave addresses
  #ifndef X_SLAVE_ADDRESS
    #define X_SLAVE_ADDRESS                     0
  #endif
  #ifndef Y_SLAVE_ADDRESS
    #define Y_SLAVE_ADDRESS                     1
  #endif
  #ifndef I_SLAVE_ADDRESS
    #define I_SLAVE_ADDRESS                     3
  #endif
  #ifndef J_SLAVE_ADDRESS
    #define J_SLAVE_ADDRESS                     2
  #endif
  static_assert(X_SLAVE_ADDRESS == 0, "X_SLAVE_ADDRESS must be 0 for BOARD_DELTAPRINTR_RAPID_PLACER_HEAD_V1_0.");
  static_assert(Y_SLAVE_ADDRESS == 1, "Y_SLAVE_ADDRESS must be 1 for BOARD_DELTAPRINTR_RAPID_PLACER_HEAD_V1_0.");
  static_assert(I_SLAVE_ADDRESS == 3, "I_SLAVE_ADDRESS must be 3 for BOARD_DELTAPRINTR_RAPID_PLACER_HEAD_V1_0.");
  static_assert(J_SLAVE_ADDRESS == 2, "J_SLAVE_ADDRESS must be 2 for BOARD_DELTAPRINTR_RAPID_PLACER_HEAD_V1_0.");
#endif
