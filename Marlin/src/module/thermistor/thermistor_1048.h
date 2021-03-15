/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

// R25 = 100 kOhm, beta25 = 3950 K, 4.7 kOhm pull-up, QU-BD silicone bed QWG-104F-3950 thermistor
//modified for microbot, which seems to have a constant offset of 5 degrees

#define TT_OFFSET_CUSTOM -5

const temp_entry_t temptable_1048[] PROGMEM = {
  { OV(   1), 938+TT_OFFSET_CUSTOM},
  { OV(  31), 314+TT_OFFSET_CUSTOM },
  { OV(  41), 290+TT_OFFSET_CUSTOM },
  { OV(  51), 272+TT_OFFSET_CUSTOM },
  { OV(  61), 258+TT_OFFSET_CUSTOM },
  { OV(  71), 247+TT_OFFSET_CUSTOM },
  { OV(  81), 237+TT_OFFSET_CUSTOM },
  { OV(  91), 229+TT_OFFSET_CUSTOM },
  { OV( 101), 221+TT_OFFSET_CUSTOM },
  { OV( 111), 215+TT_OFFSET_CUSTOM },
  { OV( 121), 209+TT_OFFSET_CUSTOM },
  { OV( 131), 204+TT_OFFSET_CUSTOM },
  { OV( 141), 199+TT_OFFSET_CUSTOM },
  { OV( 151), 195+TT_OFFSET_CUSTOM },
  { OV( 161), 190+TT_OFFSET_CUSTOM },
  { OV( 171), 187+TT_OFFSET_CUSTOM },
  { OV( 181), 183+TT_OFFSET_CUSTOM },
  { OV( 191), 179+TT_OFFSET_CUSTOM },
  { OV( 201), 176+TT_OFFSET_CUSTOM },
  { OV( 221), 170+TT_OFFSET_CUSTOM },
  { OV( 241), 165+TT_OFFSET_CUSTOM },
  { OV( 261), 160+TT_OFFSET_CUSTOM },
  { OV( 281), 155+TT_OFFSET_CUSTOM },
  { OV( 301), 150+TT_OFFSET_CUSTOM },
  { OV( 331), 144+TT_OFFSET_CUSTOM },
  { OV( 361), 139+TT_OFFSET_CUSTOM },
  { OV( 391), 133+TT_OFFSET_CUSTOM },
  { OV( 421), 128+TT_OFFSET_CUSTOM },
  { OV( 451), 123+TT_OFFSET_CUSTOM },
  { OV( 491), 117+TT_OFFSET_CUSTOM },
  { OV( 531), 111+TT_OFFSET_CUSTOM },
  { OV( 571), 105+TT_OFFSET_CUSTOM },
  { OV( 611), 100+TT_OFFSET_CUSTOM },
  { OV( 641),  95+TT_OFFSET_CUSTOM },
  { OV( 681),  90+TT_OFFSET_CUSTOM },
  { OV( 711),  85+TT_OFFSET_CUSTOM },
  { OV( 751),  79+TT_OFFSET_CUSTOM },
  { OV( 791),  72+TT_OFFSET_CUSTOM },
  { OV( 811),  69+TT_OFFSET_CUSTOM },
  { OV( 831),  65+TT_OFFSET_CUSTOM },
  { OV( 871),  57+TT_OFFSET_CUSTOM },
  { OV( 881),  55+TT_OFFSET_CUSTOM },
  { OV( 901),  51+TT_OFFSET_CUSTOM },
  { OV( 921),  45+TT_OFFSET_CUSTOM },
  { OV( 941),  39+TT_OFFSET_CUSTOM },
  { OV( 971),  28+TT_OFFSET_CUSTOM },
  { OV( 981),  23+TT_OFFSET_CUSTOM },
  { OV( 991),  17+TT_OFFSET_CUSTOM },
  { OV(1001),   9+TT_OFFSET_CUSTOM },
  { OV(1021), -27+TT_OFFSET_CUSTOM }
};
