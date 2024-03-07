/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *Main;
	bool Main_del;
	lv_obj_t *g_kb_Main;
	lv_obj_t *Main_val_ch_5;
	lv_obj_t *Main_val_ch_4;
	lv_obj_t *Main_val_ch_3;
	lv_obj_t *Main_val_ch_2;
	lv_obj_t *Main_val_ch_1;
	lv_obj_t *Main_label_ch_5;
	lv_obj_t *Main_label_ch_4;
	lv_obj_t *Main_label_ch_3;
	lv_obj_t *Main_label_ch_2;
	lv_obj_t *Main_label_ch_1;
	lv_obj_t *Main_btn_1;
	lv_obj_t *Main_btn_1_label;
	lv_obj_t *Main_line_1;
	lv_obj_t *Main_line_2;
	lv_obj_t *Main_line_3;
	lv_obj_t *Main_line_4;
	lv_obj_t *Setting;
	bool Setting_del;
	lv_obj_t *Setting_roller_1;
	lv_obj_t *Setting_slider_1;
	lv_obj_t *Setting_label_2;
	lv_obj_t *Setting_label_4;
	lv_obj_t *Setting_line_1;
	lv_obj_t *Setting_line_2;
	lv_obj_t *Setting_line_3;
	lv_obj_t *Setting_img_1;
}lv_ui;

void ui_init_style(lv_style_t * style);
void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;

void setup_scr_Main(lv_ui *ui);
void setup_scr_Setting(lv_ui *ui);
LV_IMG_DECLARE(_left_alpha_40x40);

LV_FONT_DECLARE(lv_font_arial_28)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_arial_20)
LV_FONT_DECLARE(lv_font_arial_32)
LV_FONT_DECLARE(lv_font_montserratMedium_12)
LV_FONT_DECLARE(lv_font_arial_14)
LV_FONT_DECLARE(lv_font_arial_15)
LV_FONT_DECLARE(lv_font_simsun_18)


#ifdef __cplusplus
}
#endif
#endif
