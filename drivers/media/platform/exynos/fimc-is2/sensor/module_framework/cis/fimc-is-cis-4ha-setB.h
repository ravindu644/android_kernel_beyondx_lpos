/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_4HA_SET_B_H
#define FIMC_IS_CIS_4HA_SET_B_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-4ha.h"

/* Reference : 4HA_EVT00_Setfile_������_REV08.xlsx */

const u32 sensor_4ha_setfile_B_Global[] = {
	0x0100, 0x00, 0x01,
	0x0A02, 0x7F, 0x01,
	0x3B45, 0x01, 0x01,
	0x3264, 0x01, 0x01,
	0x3290, 0x10, 0x01,
	0x0B05, 0x01, 0x01,
	0x3069, 0xC7, 0x01,
	0x3074, 0x06, 0x01,
	0x3075, 0x32, 0x01,
	0x3068, 0xF7, 0x01,
	0x30C6, 0x01, 0x01,
	0x301F, 0x20, 0x01,
	0x306B, 0x9A, 0x01,
	0x3091, 0x1F, 0x01,
	0x306E, 0x71, 0x01,
	0x306F, 0x28, 0x01,
	0x306D, 0x08, 0x01,
	0x3084, 0x16, 0x01,
	0x3070, 0x0F, 0x01,
	0x306A, 0x79, 0x01,
	0x30B0, 0xFF, 0x01,
	0x30C2, 0x05, 0x01,
	0x30C4, 0x06, 0x01,
	0x3081, 0x07, 0x01,
	0x307B, 0x85, 0x01,
	0x307A, 0x0A, 0x01,
	0x3079, 0x0A, 0x01,
	0x308A, 0x20, 0x01,
	0x308B, 0x08, 0x01,
	0x308C, 0x0B, 0x01,
	0x392F, 0x01, 0x01,
	0x3930, 0x00, 0x01,
	0x3924, 0x7F, 0x01,
	0x3925, 0xFD, 0x01,
	0x3C08, 0xFF, 0x01,
	0x3C09, 0xFF, 0x01,
	0x3C31, 0xFF, 0x01,
	0x3C32, 0xFF, 0x01,
};

/* 26M_3Lane */
const u32 sensor_4ha_setfile_B_3264x2448_30fps[] = {
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	0x0301, 0x04, 0x01,
	0x0305, 0x05, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0x6C, 0x01,
	0x3C1F, 0x00, 0x01,
	0x030D, 0x05, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xB4, 0x01,
	0x3C17, 0x00, 0x01,
	0x0340, 0x09, 0x01,
	0x0341, 0xE2, 0x01,
	0x0342, 0x0E, 0x01,
	0x0343, 0x68, 0x01,
	0x0344, 0x00, 0x01,
	0x0345, 0x08, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x08, 0x01,
	0x0348, 0x0C, 0x01,
	0x0349, 0xC7, 0x01,
	0x034A, 0x09, 0x01,
	0x034B, 0x97, 0x01,
	0x034C, 0x0C, 0x01,
	0x034D, 0xC0, 0x01,
	0x034E, 0x09, 0x01,
	0x034F, 0x90, 0x01,
	0x0381, 0x01, 0x01,
	0x0383, 0x01, 0x01,
	0x0385, 0x01, 0x01,
	0x0387, 0x01, 0x01,
	0x0900, 0x00, 0x01,
	0x0901, 0x00, 0x01,
	0x0204, 0x00, 0x01,
	0x0205, 0x20, 0x01,
	0x0200, 0x0D, 0x01,
	0x0201, 0xD8, 0x01,
	0x0202, 0x00, 0x01,
	0x0203, 0x02, 0x01,
	0x0820, 0x03, 0x01,
	0x0821, 0xA8, 0x01,
	0x0822, 0x00, 0x01,
	0x0823, 0x00, 0x01,
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	0x3929, 0x2F, 0x01,
	0x0101, 0x00, 0x01,
};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_3264x1836_30fps[] = {
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	0x0301, 0x04, 0x01,
	0x0305, 0x05, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0x6C, 0x01,
	0x3C1F, 0x00, 0x01,
	0x030D, 0x05, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xB4, 0x01,
	0x3C17, 0x00, 0x01,
	0x0340, 0x09, 0x01,
	0x0341, 0xE2, 0x01,
	0x0342, 0x0E, 0x01,
	0x0343, 0x68, 0x01,
	0x0344, 0x00, 0x01,
	0x0345, 0x08, 0x01,
	0x0346, 0x01, 0x01,
	0x0347, 0x3A, 0x01,
	0x0348, 0x0C, 0x01,
	0x0349, 0xC7, 0x01,
	0x034A, 0x08, 0x01,
	0x034B, 0x65, 0x01,
	0x034C, 0x0C, 0x01,
	0x034D, 0xC0, 0x01,
	0x034E, 0x07, 0x01,
	0x034F, 0x2C, 0x01,
	0x0381, 0x01, 0x01,
	0x0383, 0x01, 0x01,
	0x0385, 0x01, 0x01,
	0x0387, 0x01, 0x01,
	0x0900, 0x00, 0x01,
	0x0901, 0x00, 0x01,
	0x0204, 0x00, 0x01,
	0x0205, 0x20, 0x01,
	0x0200, 0x0D, 0x01,
	0x0201, 0xD8, 0x01,
	0x0202, 0x00, 0x01,
	0x0203, 0x02, 0x01,
	0x0820, 0x03, 0x01,
	0x0821, 0xA8, 0x01,
	0x0822, 0x00, 0x01,
	0x0823, 0x00, 0x01,
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	0x3929, 0x2F, 0x01,
	0x0101, 0x00, 0x01,

};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_3264x1588_30fps[] = {
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	0x0301, 0x04, 0x01,
	0x0305, 0x05, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0x6C, 0x01,
	0x3C1F, 0x00, 0x01,
	0x030D, 0x05, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xB4, 0x01,
	0x3C17, 0x00, 0x01,
	0x0340, 0x09, 0x01,
	0x0341, 0xE2, 0x01,
	0x0342, 0x0E, 0x01,
	0x0343, 0x68, 0x01,
	0x0344, 0x00, 0x01,
	0x0345, 0x08, 0x01,
	0x0346, 0x01, 0x01,
	0x0347, 0xB6, 0x01,
	0x0348, 0x0C, 0x01,
	0x0349, 0xC7, 0x01,
	0x034A, 0x07, 0x01,
	0x034B, 0xE9, 0x01,
	0x034C, 0x0C, 0x01,
	0x034D, 0xC0, 0x01,
	0x034E, 0x06, 0x01,
	0x034F, 0x34, 0x01,
	0x0381, 0x01, 0x01,
	0x0383, 0x01, 0x01,
	0x0385, 0x01, 0x01,
	0x0387, 0x01, 0x01,
	0x0900, 0x00, 0x01,
	0x0901, 0x00, 0x01,
	0x0204, 0x00, 0x01,
	0x0205, 0x20, 0x01,
	0x0200, 0x0D, 0x01,
	0x0201, 0xD8, 0x01,
	0x0202, 0x00, 0x01,
	0x0203, 0x02, 0x01,
	0x0820, 0x03, 0x01,
	0x0821, 0xA8, 0x01,
	0x0822, 0x00, 0x01,
	0x0823, 0x00, 0x01,
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	0x3929, 0x2F, 0x01,
	0x0101, 0x00, 0x01,
};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_2448x2448_30fps[] = {
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	0x0301, 0x04, 0x01,
	0x0305, 0x05, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0x6C, 0x01,
	0x3C1F, 0x00, 0x01,
	0x030D, 0x05, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xB4, 0x01,
	0x3C17, 0x00, 0x01,
	0x0340, 0x09, 0x01,
	0x0341, 0xE2, 0x01,
	0x0342, 0x0E, 0x01,
	0x0343, 0x68, 0x01,
	0x0344, 0x01, 0x01,
	0x0345, 0xA0, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x08, 0x01,
	0x0348, 0x0B, 0x01,
	0x0349, 0x2F, 0x01,
	0x034A, 0x09, 0x01,
	0x034B, 0x97, 0x01,
	0x034C, 0x09, 0x01,
	0x034D, 0x90, 0x01,
	0x034E, 0x09, 0x01,
	0x034F, 0x90, 0x01,
	0x0381, 0x01, 0x01,
	0x0383, 0x01, 0x01,
	0x0385, 0x01, 0x01,
	0x0387, 0x01, 0x01,
	0x0900, 0x00, 0x01,
	0x0901, 0x00, 0x01,
	0x0204, 0x00, 0x01,
	0x0205, 0x20, 0x01,
	0x0200, 0x0D, 0x01,
	0x0201, 0xD8, 0x01,
	0x0202, 0x00, 0x01,
	0x0203, 0x02, 0x01,
	0x0820, 0x03, 0x01,
	0x0821, 0xA8, 0x01,
	0x0822, 0x00, 0x01,
	0x0823, 0x00, 0x01,
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	0x3929, 0x2F, 0x01,
	0x0101, 0x00, 0x01,
};

#if 0
/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_1640x1228_7fps[] = {};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_1640x1228_15fps[] = {};
#endif

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_1632x1224_30fps[] = {
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	0x0301, 0x04, 0x01,
	0x0305, 0x05, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0x6C, 0x01,
	0x3C1F, 0x00, 0x01,
	0x030D, 0x05, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xB4, 0x01,
	0x3C17, 0x00, 0x01,
	0x0340, 0x09, 0x01,
	0x0341, 0xE2, 0x01,
	0x0342, 0x0E, 0x01,
	0x0343, 0x68, 0x01,
	0x0344, 0x00, 0x01,
	0x0345, 0x08, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x08, 0x01,
	0x0348, 0x0C, 0x01,
	0x0349, 0xC7, 0x01,
	0x034A, 0x09, 0x01,
	0x034B, 0x97, 0x01,
	0x034C, 0x06, 0x01,
	0x034D, 0x60, 0x01,
	0x034E, 0x04, 0x01,
	0x034F, 0xC8, 0x01,
	0x0381, 0x01, 0x01,
	0x0383, 0x01, 0x01,
	0x0385, 0x01, 0x01,
	0x0387, 0x03, 0x01,
	0x0900, 0x01, 0x01,
	0x0901, 0x22, 0x01,
	0x0204, 0x00, 0x01,
	0x0205, 0x20, 0x01,
	0x0200, 0x0D, 0x01,
	0x0201, 0xD8, 0x01,
	0x0202, 0x00, 0x01,
	0x0203, 0x02, 0x01,
	0x0820, 0x03, 0x01,
	0x0821, 0xA8, 0x01,
	0x0822, 0x00, 0x01,
	0x0823, 0x00, 0x01,
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	0x3929, 0x2F, 0x01,
	0x0101, 0x00, 0x01,
};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_1632x1224_60fps[] = {
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	0x0301, 0x04, 0x01,
	0x0305, 0x05, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0x6C, 0x01,
	0x3C1F, 0x00, 0x01,
	0x030D, 0x05, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xB4, 0x01,
	0x3C17, 0x00, 0x01,
	0x0340, 0x04, 0x01,
	0x0341, 0xF0, 0x01,
	0x0342, 0x0E, 0x01,
	0x0343, 0x68, 0x01,
	0x0344, 0x00, 0x01,
	0x0345, 0x08, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x08, 0x01,
	0x0348, 0x0C, 0x01,
	0x0349, 0xC7, 0x01,
	0x034A, 0x09, 0x01,
	0x034B, 0x97, 0x01,
	0x034C, 0x06, 0x01,
	0x034D, 0x60, 0x01,
	0x034E, 0x04, 0x01,
	0x034F, 0xC8, 0x01,
	0x0381, 0x01, 0x01,
	0x0383, 0x01, 0x01,
	0x0385, 0x01, 0x01,
	0x0387, 0x03, 0x01,
	0x0900, 0x01, 0x01,
	0x0901, 0x22, 0x01,
	0x0204, 0x00, 0x01,
	0x0205, 0x20, 0x01,
	0x0200, 0x0D, 0x01,
	0x0201, 0xD8, 0x01,
	0x0202, 0x00, 0x01,
	0x0203, 0x02, 0x01,
	0x0820, 0x03, 0x01,
	0x0821, 0xA8, 0x01,
	0x0822, 0x00, 0x01,
	0x0823, 0x00, 0x01,
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	0x3929, 0x2F, 0x01,
	0x0101, 0x00, 0x01,
};

#if 0
/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_1640x924_60fps[] = {};

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_816x604_115fps[] = {};
#endif

/* 16x10 margin, EXTCLK 26Mhz */
const u32 sensor_4ha_setfile_B_800x600_120fps[] = {
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	0x0301, 0x04, 0x01,
	0x0305, 0x05, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0x6C, 0x01,
	0x3C1F, 0x00, 0x01,
	0x030D, 0x05, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xB4, 0x01,
	0x3C17, 0x00, 0x01,
	0x0340, 0x02, 0x01,
	0x0341, 0x78, 0x01,
	0x0342, 0x0E, 0x01,
	0x0343, 0x68, 0x01,
	0x0344, 0x00, 0x01,
	0x0345, 0x28, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x20, 0x01,
	0x0348, 0x0C, 0x01,
	0x0349, 0xA7, 0x01,
	0x034A, 0x09, 0x01,
	0x034B, 0x7F, 0x01,
	0x034C, 0x03, 0x01,
	0x034D, 0x20, 0x01,
	0x034E, 0x02, 0x01,
	0x034F, 0x58, 0x01,
	0x0381, 0x01, 0x01,
	0x0383, 0x01, 0x01,
	0x0385, 0x01, 0x01,
	0x0387, 0x07, 0x01,
	0x0900, 0x01, 0x01,
	0x0901, 0x44, 0x01,
	0x0204, 0x00, 0x01,
	0x0205, 0x20, 0x01,
	0x0200, 0x0D, 0x01,
	0x0201, 0xD8, 0x01,
	0x0202, 0x00, 0x01,
	0x0203, 0x02, 0x01,
	0x0820, 0x03, 0x01,
	0x0821, 0xA8, 0x01,
	0x0822, 0x00, 0x01,
	0x0823, 0x00, 0x01,
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	0x3929, 0x2F, 0x01,
	0x0101, 0x00, 0x01,
};

const struct sensor_pll_info_compact sensor_4ha_pllinfo_B_3264x2448_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	910000000,			/* mipi_datarate = OPSYCK */
	280800000,			/* VT picxel clk */
	2530,				/* frame_length_lines */
	3688,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_4ha_pllinfo_B_3264x1836_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	910000000,			/* mipi_datarate = OPSYCK */
	280800000,			/* VT picxel clk */
	2530,				/* frame_length_lines */
	3688,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_4ha_pllinfo_B_3264x1588_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	910000000,			/* mipi_datarate = OPSYCK */
	280800000,			/* VT picxel clk */
	2530,				/* frame_length_lines */
	3688,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_4ha_pllinfo_B_2448x2448_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	910000000,			/* mipi_datarate = OPSYCK */
	280800000,			/* VT picxel clk */
	2530,				/* frame_length_lines */
	3688,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_4ha_pllinfo_B_1632x1224_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	910000000,			/* mipi_datarate = OPSYCK */
	280800000,			/* VT picxel clk */
	2530,				/* frame_length_lines */
	3688,				/* line_length_pck */
};

const struct sensor_pll_info_compact sensor_4ha_pllinfo_B_1632x1224_60fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	910000000,			/* mipi_datarate = OPSYCK */
	280800000,			/* VT picxel clk */
	1264,				/* frame_length_lines */
	3688,				/* line_length_pck */
};
 
const struct sensor_pll_info_compact sensor_4ha_pllinfo_B_800x600_120fps = {
	EXT_CLK_Mhz * 1000 * 1000,	/* ext_clk */
	910000000,			/* mipi_datarate = OPSYCK */
	280800000,			/* VT picxel clk */
	632,				/* frame_length_lines */
	3688,				/* line_length_pck */
};

static const u32 *sensor_4ha_setfiles_B[] = {
	/* 16x10 margin */
	sensor_4ha_setfile_B_3264x2448_30fps,
	sensor_4ha_setfile_B_3264x1836_30fps,
	sensor_4ha_setfile_B_3264x1588_30fps,
	sensor_4ha_setfile_B_2448x2448_30fps,
	sensor_4ha_setfile_B_1632x1224_30fps,
	sensor_4ha_setfile_B_1632x1224_60fps,
	sensor_4ha_setfile_B_800x600_120fps,
};

static const u32 sensor_4ha_setfile_B_sizes[] = {
	/* 16x10 margin */
	sizeof(sensor_4ha_setfile_B_3264x2448_30fps) / sizeof(sensor_4ha_setfile_B_3264x2448_30fps[0]),
	sizeof(sensor_4ha_setfile_B_3264x1836_30fps) / sizeof(sensor_4ha_setfile_B_3264x1836_30fps[0]),
	sizeof(sensor_4ha_setfile_B_3264x1588_30fps) / sizeof(sensor_4ha_setfile_B_3264x1588_30fps[0]),
	sizeof(sensor_4ha_setfile_B_2448x2448_30fps) / sizeof(sensor_4ha_setfile_B_2448x2448_30fps[0]),
	sizeof(sensor_4ha_setfile_B_1632x1224_30fps) / sizeof(sensor_4ha_setfile_B_1632x1224_30fps[0]),
	sizeof(sensor_4ha_setfile_B_1632x1224_60fps) / sizeof(sensor_4ha_setfile_B_1632x1224_60fps[0]),
	sizeof(sensor_4ha_setfile_B_800x600_120fps) / sizeof(sensor_4ha_setfile_B_800x600_120fps[0]),
};

static const struct sensor_pll_info_compact *sensor_4ha_pllinfos_B[] = {
	/* 16x10 margin */
	&sensor_4ha_pllinfo_B_3264x2448_30fps,
	&sensor_4ha_pllinfo_B_3264x1836_30fps,
	&sensor_4ha_pllinfo_B_3264x1588_30fps,
	&sensor_4ha_pllinfo_B_2448x2448_30fps,
	&sensor_4ha_pllinfo_B_1632x1224_30fps,
	&sensor_4ha_pllinfo_B_1632x1224_60fps,
	&sensor_4ha_pllinfo_B_800x600_120fps,
};

#endif

