/* Copyright 2021 lujoga
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "kezboard.h"

led_config_t g_led_config = {
    {
        { 77, 76,     68, 67, 57,     NO_LED, 48,     47, 37,     36,     26, 25,     16,     15,     6,      5 },
        { 78, 75,     69, 66, 58,     56,     49,     46, 38,     35,     27, 24,     17,     NO_LED, 7,      4 },
        { 79, NO_LED, 70, 65, 59,     55,     50,     45, 39,     34,     28, 23,     18,     14,     NO_LED, 3 },
        { 80, NO_LED, 71, 64, 60,     54,     51,     44, 40,     33,     29, 22,     19,     13,     8,      2 },
        { 81, 74,     72, 63, 61,     53,     52,     43, 41,     32,     30, 21,     NO_LED, 12,     9,      1 },
        { 82, NO_LED, 73, 62, NO_LED, NO_LED, NO_LED, 42, NO_LED, NO_LED, 31, NO_LED, 20,     11,     10,     0 },
    },
    {
        { 217, 77 }, { 217, 63 }, { 217, 49 }, { 217, 35 }, { 217, 21 }, { 217,  7 },
        { 203,  7 }, { 196, 21 },              { 201, 42 }, { 203, 63 }, { 203, 77 },
        { 189, 77 }, { 184, 63 }, { 186, 49 }, { 182, 35 },              { 186,  7 },
        { 172,  7 }, { 175, 21 }, { 168, 35 }, { 172, 49 },              { 172, 77 },
                     { 164, 63 }, { 158, 49 }, { 154, 35 }, { 161, 21 }, { 158,  7 },
        { 144,  7 }, { 147, 21 }, { 140, 35 }, { 144, 49 }, { 150, 63 }, { 152, 77 },
                     { 136, 63 }, { 130, 49 }, { 126, 35 }, { 133, 21 }, { 126,  7 },
        { 112,  7 }, { 119, 21 }, { 112, 35 }, { 116, 49 }, { 122, 63 },
        { 100, 77 }, { 108, 63 }, { 102, 49 }, {  98, 35 }, { 105, 21 }, {  98,  7 },
        {  84,  7 }, {  91, 21 }, {  84, 35 }, {  88, 49 }, {  94, 63 },
                     {  80, 63 }, {  74, 49 }, {  70, 35 }, {  77, 21 },
        {  66,  7 }, {  63, 21 }, {  56, 35 }, {  60, 49 }, {  66, 63 },
        {  47, 77 }, {  52, 63 }, {  46, 49 }, {  42, 35 }, {  49, 21 }, {  52,  7 },
        {  38,  7 }, {  35, 21 }, {  28, 35 }, {  32, 49 }, {  38, 63 }, {  30, 77 },
                     {  24, 63 },                           {  21, 21 }, {  24,  7 },
        {   7,  7 }, {   7, 21 }, {  10, 35 }, {  12, 49 }, {   9, 63 }, {  10, 77 },
    },
    { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 },
};
