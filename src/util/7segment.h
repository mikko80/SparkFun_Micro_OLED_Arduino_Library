/****************************************************************************** 
7segment.h
Definition for 7-segment font

This file was imported from the MicroView library, written by GeekAmmo
(https://github.com/geekammo/MicroView-Arduino-Library), and released under 
the terms of the GNU General Public License as published by the Free Software 
Foundation, either version 3 of the License, or (at your option) any later 
version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Modified by:
Emil Varughese @ Edwin Robotics Pvt. Ltd.
July 27, 2015
https://github.com/emil01/SparkFun_Micro_OLED_Arduino_Library/

******************************************************************************/
#ifndef FONT7SEGMENT_H
#define FONT7SEGMENT_H

#if defined(ARDUINO_ARCH_MBED)
	// ARDUINO_ARCH_MBED (APOLLO3 v2) does not support or require pgmspace.h
	static const unsigned char sevensegment [] = {
#elif defined(__AVR__) || defined(__arm__) || defined(__ARDUINO_ARC__)
	#include <avr/pgmspace.h>
	static const unsigned char sevensegment [] PROGMEM = {
#else
	#include <pgmspace.h>
	static const unsigned char sevensegment [] PROGMEM = {
#endif
	// first row defines - FONTWIDTH, FONTHEIGHT, ASCII START CHAR, TOTAL CHARACTERS, FONT MAP WIDTH HIGH, FONT MAP WIDTH LOW (2,56 meaning 256)
	10,16,46,13,1,30,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	
	0x00, 0x00, 0x00, 0x00, 0x78, 0xFC, 0x02, 0x03, 0x03, 0x03, 0x03, 0x02, 0xFC, 0x78, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7E, 0x00, 0x00, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 
	0xFC, 0x78, 0x00, 0x00, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0xFC, 0x78, 0x7E, 0xFF, 0x00, 0x80, 
	0x80, 0x80, 0x80, 0x00, 0xFF, 0x7E, 0x78, 0xFC, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0x00, 0x00,
	0x78, 0xFC, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0x00, 0x00, 0x00, 0x02, 0x03, 0x03, 0x03, 0x03,
	0x03, 0x02, 0xFC, 0x78, 0x78, 0xFC, 0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0xFC, 0x78, 0x78, 0xFC,
	0x02, 0x83, 0x83, 0x83, 0x83, 0x02, 0xFC, 0x78, 0x00, 0x00, 0x00, 0X00, 0x18, 0x3C, 0x3C, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF0, 0xF0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x3F, 0x40, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0x3F, 0x1E,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7E, 0x1C, 0x3E, 0x41, 0xC1, 0xC1, 0xC1,
	0xC1, 0x41, 0x00, 0x00, 0x00, 0x00, 0x41, 0xC1, 0xC1, 0xC1, 0xC1, 0x41, 0x3E, 0x1C, 0x00, 0x00,
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0x7E, 0x00, 0x00, 0x41, 0xC1, 0xC1, 0xC1, 0xC1, 0x41,
	0x3E, 0x1C, 0x1C, 0x3E, 0x41, 0xC1, 0xC1, 0xC1, 0xC1, 0x41, 0x3E, 0x1C, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xFF, 0x7E, 0x1C, 0x3E, 0x41, 0xC1, 0xC1, 0xC1, 0xC1, 0x41, 0x3E, 0x1C,
	0x00, 0x00, 0x41, 0xC1, 0xC1, 0xC1, 0xC1, 0x41, 0x3E, 0x1C, 0x00, 0x00, 0x00, 0X00, 0x18, 0x3C,
	0x3C, 0x18, 0x00, 0x00
};
#endif
