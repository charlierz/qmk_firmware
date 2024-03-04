/* Copyright 2022 splitkb.com <support@splitkb.com>
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

#pragma once

// Not yet available in `info.json`
#ifdef OLED_ENABLE
#   define OLED_FONT_H "keyboards/splitkb/aurora/lily58/glcdfont.c"
#endif

#define MK_3_SPEED

#define MK_C_OFFSET_0 2
#define MK_C_INTERVAL_0 8
#define MK_C_OFFSET_1 4
#define MK_C_INTERVAL_1 8
#define MK_C_OFFSET_2 8
#define MK_C_INTERVAL_2 8

#define TAPPING_TERM 200
#define PERMISSIVE_HOLD

#define SPLIT_LED_STATE_ENABLE
