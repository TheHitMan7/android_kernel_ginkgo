/* Copyright (c) 2016-2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef MSM_CSIPHY_5_0_1_HWREG_H
#define MSM_CSIPHY_5_0_1_HWREG_H

#define ULPM_WAKE_UP_TIMER_MODE                   2

#include <sensor/csiphy/msm_csiphy.h>

static struct csiphy_reg_parms_t csiphy_v5_0_1 = {
	.mipi_csiphy_interrupt_status0_addr = 0x8B0,
	.mipi_csiphy_interrupt_clear0_addr = 0x858,
	.mipi_csiphy_glbl_irq_cmd_addr = 0x828,
	.combo_clk_mask = 0x10,
};

static struct csiphy_reg_3ph_parms_t csiphy_v5_0_1_3ph = {
	/*MIPI CSI PHY registers*/
	{0x814, 0xD5},
	{0x818, 0x1},
	{0x188, 0x7F},
	{0x18C, 0x7F},
	{0x190, 0x0},
	{0x104, 0x6},
	{0x108, 0x1},
	{0x10c, 0x12},
	{0x114, 0x20},
	{0x118, 0x3E},
	{0x11c, 0x41},
	{0x120, 0x41},
	{0x124, 0x7F},
	{0x128, 0x0},
	{0x12c, 0x0},
	{0x130, 0x1},
	{0x134, 0x0},
	{0x138, 0x0},
	{0x13C, 0x10},
	{0x140, 0x1},
	{0x144, 0x12},
	{0x148, 0xFE},
	{0x14C, 0x1},
	{0x154, 0x0},
	{0x15C, 0x63},
	{0x160, ULPM_WAKE_UP_TIMER_MODE},
	{0x164, 0x00},
	{0x168, 0xAC},
	{0x16C, 0xA5},
	{0x170, 0x41},
	{0x174, 0x41},
	{0x178, 0x3E},
	{0x17C, 0x0},
	{0x180, 0x0},
	{0x184, 0x7F},
	{0x1cc, 0x41},
	{0x81c, 0x2},
	{0x82c, 0xFF},
	{0x830, 0xFF},
	{0x834, 0xFB},
	{0x838, 0xFF},
	{0x83c, 0x7F},
	{0x840, 0xFF},
	{0x844, 0xFF},
	{0x848, 0xEF},
	{0x84c, 0xFF},
	{0x850, 0xFF},
	{0x854, 0xFF},
	{0x28, 0x0},
	{0x800, 0x0},
	{0x4, 0xC},
	{0x8, 0x14},
	{0x8, 0x14},
	{0x10, 0x52},
	{0x14, 0x60},
	{0x14, 0x60},
	{0x1C, 0xa},
	{0x1c, 0xa},
	{0x38, 0x1},
	{0x3C, 0xB8},
	{0x3C, 0xB8},
	{0x14, 0x0},
	{0x14, 0x0},
	{0x700, 0xC0},
	{0x150, 0},
	{0x1dc, 0x51},
	{0x2C, 0x1},
	{0x34, 0xf},
	{0x728, 0x4},
	{0x0, 0x91},
	{0x70C, 0xA5},
	{0x38, 0xFE},
	{0x81c, 0x2},
	{0x700, 0x80},
	{0x724, 0x04},
	{0x024, 0x04},
};

static struct csiphy_settings_t csiphy_combo_mode_v5_0_1 = {
	{
		{0x818, 0x1},
		{0x81c, 0x2},
		{0x004, 0x0C},
		{0x704, 0x0C},
		{0x204, 0x0C},
		{0x404, 0x0C},
		{0x604, 0x0C},
		{0x02c, 0x1},
		{0x22c, 0x1},
		{0x42c, 0x1},
		{0x62c, 0x1},
		{0x72c, 0x1},
		{0x034, 0x0f},
		{0x234, 0x0f},
		{0x434, 0x0f},
		{0x634, 0x0f},
		{0x734, 0x0f},
		{0x01c, 0x0a},
		{0x21c, 0x0a},
		{0x41c, 0x0a},
		{0x61c, 0x0a},
		{0x71c, 0x0a},
		{0x014, 0x60},
		{0x214, 0x60},
		{0x414, 0x60},
		{0x614, 0x60},
		{0x714, 0x60},
		{0x728, 0x4},
		{0x428, 0x0a},
		{0x628, 0x0e},
		{0x03c, 0xb8},
		{0x73c, 0xb8},
		{0x23c, 0xb8},
		{0x43c, 0xb8},
		{0x63c, 0xb8},
		{0x000, 0x91},
		{0x700, 0x80},
		{0x200, 0x91},
		{0x400, 0x91},
		{0x600, 0x80},
		{0x70c, 0xA5},
		{0x60c, 0xA5},
		{0x010, 0x52},
		{0x710, 0x52},
		{0x210, 0x52},
		{0x410, 0x52},
		{0x610, 0x52},
		{0x038, 0xfe},
		{0x738, 0x1f},
		{0x238, 0xfe},
		{0x438, 0xfe},
		{0x638, 0x1f},
	}
};
#endif
