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

// Special for GTM32 PRO
const temp_entry_t temptable_1001[] PROGMEM = {
{ OV(1),400 },
{ OV(20),295 },
{ OV(22),291 },
{ OV(25),285 },
{ OV(27),278 },
{ OV(30),274 },
{ OV(32),269 },
{ OV(35),263 },
{ OV(40),255 },
{ OV(45),247 },
{ OV(50),241 },
{ OV(60),231 },
{ OV(70),223 },
{ OV(80),215 },
{ OV(90),209 },
{ OV(100),203 },
{ OV(110),198 },
{ OV(120),194 },
{ OV(150),182 },
{ OV(175),175 },
{ OV(200),168 },
{ OV(250),156 },
{ OV(300),144 },
{ OV(350),136 },
{ OV(400),128 },
{ OV(550),110 },
{ OV(600),103 },
{ OV(650),95 },
{ OV(700),89 },
{ OV(750),75 },
{ OV(800),66 },
{ OV(850),66 },
{ OV(900),58 },
{ OV(925),50 },
{ OV(950),45 },
{ OV(980),37 },
{ OV(985),35 },
{ OV(990),33 },
{ OV(995),30 },
{ OV(1000),28 },
{ OV(1005),27 },
{ OV(1010),25 },
{ OV(1015),20 },
{ OV(1020),15 },
{ OV(1024),0 }
};
