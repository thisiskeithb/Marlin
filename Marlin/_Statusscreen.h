/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            7
#define STATUS_LOGO_WIDTH       45

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00011000,B00000000,B00000001,B10110110,B00110000, // ...........##..................##.##.##...##....
  B00111101,B10111110,B01001101,B11000001,B11111110,B00111000, // ..####.##.#####..#..##.###.....########...###...
  B01111101,B11100110,B01101101,B11011101,B10011011,B00110000, // .#####.####..##..##.##.###.###.##..##.##..##....
  B11001101,B11100110,B01101101,B11011101,B10011011,B01110000, // ##..##.####..##..##.##.###.###.##..##.##.###....
  B11001101,B11000110,B01101111,B11011101,B10011011,B01100000, // ##..##.###...##..##.######.###.##..##.##.##.....
  B11001101,B10000110,B01101110,B11111101,B10011001,B11100000, // ##..##.##....##..##.###.######.##..##..####.....
  B11001101,B10000110,B01101110,B11101101,B10011001,B11000000, // ##..##.##....##..##.###.###.##.##..##..###......
  B11011101,B10000110,B01101100,B11101101,B11110001,B11000000, // ##.###.##....##..##.##..###.##.#####...###......
  B11111101,B10000110,B01101100,B11101101,B10100000,B11000000, // ######.##....##..##.##..###.##.##.#.....##......
  B01101101,B10000011,B11000000,B11001101,B10000001,B10000000, // .##.##.##.....####......##..##.##......##.......
  B00001100,B00000011,B11000000,B11001111,B10000001,B10000000, // ....##........####......##..#####......##.......
  B01101100,B00000000,B00000000,B00000001,B10000001,B10000000, // .##.##.........................##......##.......
  B00111000,B00000000,B00000000,B00000000,B00000000,B00000000  // ..###...........................................
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
