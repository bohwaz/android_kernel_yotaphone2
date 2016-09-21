/* Copyright (c) 2011-2013, The Linux Foundation. All rights reserved.
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

#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2509,2491,2492,2492,2486},
	.cols		= 5
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1,0},
	.ocv		= {
                                {4320,4316,4311,4304,4290},
                                {4212,4227,4232,4231,4226},
                                {4138,4168,4177,4176,4172},
                                {4077,4112,4124,4123,4120},
                                {4009,4061,4074,4073,4070},
                                {3947,4001,4027,4028,4024},
                                {3904,3951,3984,3984,3982},
                                {3865,3914,3946,3947,3944},
                                {3828,3879,3897,3905,3906},
                                {3804,3848,3856,3858,3857},
                                {3784,3822,3830,3830,3830},
                                {3766,3797,3810,3810,3809},
                                {3747,3772,3792,3792,3792},
                                {3728,3754,3778,3776,3776},
                                {3707,3738,3765,3762,3756},
                                {3682,3726,3752,3746,3735},
                                {3648,3712,3724,3724,3714},
                                {3616,3701,3694,3694,3686},
                                {3580,3688,3684,3677,3668},
                                {3552,3675,3680,3674,3662},
                                {3536,3667,3678,3672,3660},
                                {3516,3657,3676,3670,3659},
                                {3493,3644,3672,3668,3656},
                                {3467,3624,3666,3663,3652},
                                {3438,3600,3650,3652,3638},
                                {3407,3572,3625,3624,3606},
                                {3374,3538,3588,3579,3556},
                                {3342,3496,3530,3516,3492},
                                {3302,3440,3448,3432,3406},
                                {3240,3338,3320,3304,3271},
                                {3000,3000,3000,3000,3000}
	}
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries	= {-20,0,25,40,60},
	.percent	= {100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,16,13,11,10,9,8,7,6,5,4,3,2,1},
	.sf		= {
                                {1235,286,101,85,84},
                                {1235,286,101,85,84},
                                {1183,291,102,87,85},
                                {1139,296,105,90,86},
                                {1092,298,112,92,88},
                                {1056,290,118,96,90},
                                {1055,282,127,99,92},
                                {1053,282,135,108,96},
                                {1055,285,118,111,102},
                                {1076,287,104,90,87},
                                {1112,292,104,88,85},
                                {1158,292,106,90,86},
                                {1204,290,108,93,88},
                                {1253,298,113,94,92},
                                {1315,315,115,93,90},
                                {1428,347,118,93,87},
                                {1710,398,116,93,87},
                                {2053,456,110,95,88},
                                {2438,504,111,90,87},
                                {2616,520,118,92,87},
                                {2640,496,120,93,88},
                                {2945,493,124,95,88},
                                {3350,512,130,97,91},
                                {3921,536,138,101,92},
                                {4682,567,142,104,92},
                                {5775,610,152,104,90},
                                {7138,664,154,103,91},
                                {9158,738,149,104,93},
                                {11744,838,156,112,101},
                                {16773,1105,182,133,132}
	}
};

struct bms_battery_data palladium_2500_data = {
	.fcc			= 2500,
	.fcc_temp_lut		= &fcc_temp,
	.pc_temp_ocv_lut	= &pc_temp_ocv,
	.rbatt_sf_lut		= &rbatt_sf,
	.default_rbatt_mohm	= 165,
	.rbatt_capacitive_mohm	= 50,
	.flat_ocv_threshold_uv	= 3800000,
};
struct bms_battery_data palladium_1500_data = {
        .fcc                    = 1500,
        .fcc_temp_lut           = &fcc_temp,
        .pc_temp_ocv_lut        = &pc_temp_ocv,
        .rbatt_sf_lut           = &rbatt_sf,
        .default_rbatt_mohm     = 236,
        .rbatt_capacitive_mohm  = 50,
        .flat_ocv_threshold_uv  = 3800000,
};
