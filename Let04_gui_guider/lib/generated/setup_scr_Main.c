/*
 * Copyright 2024 NXP
 * NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"

void setup_scr_Main(lv_ui *ui)
{
	// Write codes Main
	ui->Main = lv_obj_create(NULL);
	lv_obj_set_size(ui->Main, 320, 240);

	// Write style for Main, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main, lv_color_hex(0x22272c), LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_val_ch_5
	ui->Main_val_ch_5 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_val_ch_5, "-25.66");
	lv_label_set_long_mode(ui->Main_val_ch_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_val_ch_5, 80, 198);
	lv_obj_set_size(ui->Main_val_ch_5, 95, 30);
	lv_obj_add_flag(ui->Main_val_ch_5, LV_OBJ_FLAG_SCROLL_ELASTIC);

	// Write style for Main_val_ch_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_val_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_val_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_val_ch_5, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_val_ch_5, &lv_font_arial_28, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_val_ch_5, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_val_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_val_ch_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_val_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_val_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_val_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_val_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_val_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_val_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_val_ch_4
	ui->Main_val_ch_4 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_val_ch_4, "-25.66");
	lv_label_set_long_mode(ui->Main_val_ch_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_val_ch_4, 80, 152);
	lv_obj_set_size(ui->Main_val_ch_4, 95, 30);
	lv_obj_add_flag(ui->Main_val_ch_4, LV_OBJ_FLAG_SCROLL_ELASTIC);

	// Write style for Main_val_ch_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_val_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_val_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_val_ch_4, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_val_ch_4, &lv_font_arial_28, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_val_ch_4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_val_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_val_ch_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_val_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_val_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_val_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_val_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_val_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_val_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_val_ch_3
	ui->Main_val_ch_3 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_val_ch_3, "-25.66");
	lv_label_set_long_mode(ui->Main_val_ch_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_val_ch_3, 80, 106);
	lv_obj_set_size(ui->Main_val_ch_3, 95, 30);
	lv_obj_add_flag(ui->Main_val_ch_3, LV_OBJ_FLAG_SCROLL_ELASTIC);

	// Write style for Main_val_ch_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_val_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_val_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_val_ch_3, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_val_ch_3, &lv_font_arial_28, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_val_ch_3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_val_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_val_ch_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_val_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_val_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_val_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_val_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_val_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_val_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_val_ch_2
	ui->Main_val_ch_2 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_val_ch_2, "-25.66");
	lv_label_set_long_mode(ui->Main_val_ch_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_val_ch_2, 80, 60);
	lv_obj_set_size(ui->Main_val_ch_2, 95, 30);
	lv_obj_add_flag(ui->Main_val_ch_2, LV_OBJ_FLAG_SCROLL_ELASTIC);

	// Write style for Main_val_ch_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_val_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_val_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_val_ch_2, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_val_ch_2, &lv_font_arial_28, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_val_ch_2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_val_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_val_ch_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_val_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_val_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_val_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_val_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_val_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_val_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_val_ch_1
	ui->Main_val_ch_1 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_val_ch_1, "-25.66");
	lv_label_set_long_mode(ui->Main_val_ch_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_val_ch_1, 80, 14);
	lv_obj_set_size(ui->Main_val_ch_1, 95, 30);
	lv_obj_add_flag(ui->Main_val_ch_1, LV_OBJ_FLAG_SCROLL_ELASTIC);

	// Write style for Main_val_ch_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_val_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_val_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_val_ch_1, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_val_ch_1, &lv_font_arial_28, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_val_ch_1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_val_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_val_ch_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_val_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_val_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_val_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_val_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_val_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_val_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_label_ch_5
	ui->Main_label_ch_5 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_label_ch_5, "CH5");
	lv_label_set_long_mode(ui->Main_label_ch_5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_label_ch_5, 10, 204);
	lv_obj_set_size(ui->Main_label_ch_5, 52, 24);

	// Write style for Main_label_ch_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_label_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_label_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_label_ch_5, lv_color_hex(0x383c40), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_label_ch_5, &lv_font_arial_20, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_label_ch_5, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_label_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_label_ch_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_label_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_label_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_label_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_label_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_label_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_label_ch_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_label_ch_4
	ui->Main_label_ch_4 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_label_ch_4, "CH4");
	lv_label_set_long_mode(ui->Main_label_ch_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_label_ch_4, 10, 158);
	lv_obj_set_size(ui->Main_label_ch_4, 52, 24);

	// Write style for Main_label_ch_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_label_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_label_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_label_ch_4, lv_color_hex(0x383c40), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_label_ch_4, &lv_font_arial_20, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_label_ch_4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_label_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_label_ch_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_label_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_label_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_label_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_label_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_label_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_label_ch_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_label_ch_3
	ui->Main_label_ch_3 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_label_ch_3, "CH3");
	lv_label_set_long_mode(ui->Main_label_ch_3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_label_ch_3, 10, 112);
	lv_obj_set_size(ui->Main_label_ch_3, 52, 24);

	// Write style for Main_label_ch_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_label_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_label_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_label_ch_3, lv_color_hex(0x383c40), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_label_ch_3, &lv_font_arial_20, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_label_ch_3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_label_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_label_ch_3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_label_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_label_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_label_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_label_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_label_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_label_ch_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_label_ch_2
	ui->Main_label_ch_2 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_label_ch_2, "CH2");
	lv_label_set_long_mode(ui->Main_label_ch_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_label_ch_2, 10, 65);
	lv_obj_set_size(ui->Main_label_ch_2, 52, 24);

	// Write style for Main_label_ch_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_label_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_label_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_label_ch_2, lv_color_hex(0x383c40), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_label_ch_2, &lv_font_arial_20, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_label_ch_2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_label_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_label_ch_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_label_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_label_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_label_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_label_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_label_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_label_ch_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_label_ch_1
	ui->Main_label_ch_1 = lv_label_create(ui->Main);
	lv_label_set_text(ui->Main_label_ch_1, "CH1");
	lv_label_set_long_mode(ui->Main_label_ch_1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Main_label_ch_1, 10, 20);
	lv_obj_set_size(ui->Main_label_ch_1, 52, 24);

	// Write style for Main_label_ch_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Main_label_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_label_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_label_ch_1, lv_color_hex(0x383c40), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_label_ch_1, &lv_font_arial_20, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Main_label_ch_1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Main_label_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_label_ch_1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Main_label_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Main_label_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Main_label_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Main_label_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Main_label_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_label_ch_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_btn_1
	ui->Main_btn_1 = lv_btn_create(ui->Main);
	ui->Main_btn_1_label = lv_label_create(ui->Main_btn_1);
	lv_label_set_text(ui->Main_btn_1_label, "T");
	lv_label_set_long_mode(ui->Main_btn_1_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->Main_btn_1_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->Main_btn_1, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->Main_btn_1, 250, 20);
	lv_obj_set_size(ui->Main_btn_1, 48, 48);

	// Write style for Main_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Main_btn_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Main_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Main_btn_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Main_btn_1, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Main_btn_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Main_btn_1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Main_btn_1, &lv_font_arial_32, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Main_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_line_1
	ui->Main_line_1 = lv_line_create(ui->Main);
	static lv_point_t Main_line_1[] = {
		{0, 0},
		{200, 0},
	};
	lv_line_set_points(ui->Main_line_1, Main_line_1, 2);
	lv_obj_set_pos(ui->Main_line_1, 10, 50);
	lv_obj_set_size(ui->Main_line_1, 200, 2);

	// Write style for Main_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_line_width(ui->Main_line_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->Main_line_1, lv_color_hex(0x373b3f), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->Main_line_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_rounded(ui->Main_line_1, true, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_line_2
	ui->Main_line_2 = lv_line_create(ui->Main);
	static lv_point_t Main_line_2[] = {
		{0, 0},
		{200, 0},
	};
	lv_line_set_points(ui->Main_line_2, Main_line_2, 2);
	lv_obj_set_pos(ui->Main_line_2, 10, 96);
	lv_obj_set_size(ui->Main_line_2, 200, 2);

	// Write style for Main_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_line_width(ui->Main_line_2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->Main_line_2, lv_color_hex(0x373b3f), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->Main_line_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_rounded(ui->Main_line_2, true, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_line_3
	ui->Main_line_3 = lv_line_create(ui->Main);
	static lv_point_t Main_line_3[] = {
		{0, 0},
		{200, 0},
	};
	lv_line_set_points(ui->Main_line_3, Main_line_3, 2);
	lv_obj_set_pos(ui->Main_line_3, 10, 142);
	lv_obj_set_size(ui->Main_line_3, 200, 2);

	// Write style for Main_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_line_width(ui->Main_line_3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->Main_line_3, lv_color_hex(0x373b3f), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->Main_line_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_rounded(ui->Main_line_3, true, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Main_line_4
	ui->Main_line_4 = lv_line_create(ui->Main);
	static lv_point_t Main_line_4[] = {
		{0, 0},
		{200, 0},
	};
	lv_line_set_points(ui->Main_line_4, Main_line_4, 2);
	lv_obj_set_pos(ui->Main_line_4, 10, 188);
	lv_obj_set_size(ui->Main_line_4, 200, 2);

	// Write style for Main_line_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_line_width(ui->Main_line_4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->Main_line_4, lv_color_hex(0x373b3f), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->Main_line_4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_rounded(ui->Main_line_4, true, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Update current screen layout.
	lv_obj_update_layout(ui->Main);

	// Init events for screen.
	events_init_Main(ui);
}
