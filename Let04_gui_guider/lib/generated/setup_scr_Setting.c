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

void setup_scr_Setting(lv_ui *ui)
{
	// Write codes Setting
	ui->Setting = lv_obj_create(NULL);
	lv_obj_set_size(ui->Setting, 320, 240);
	lv_obj_add_flag(ui->Setting, LV_OBJ_FLAG_CLICKABLE);

	// Write style for Setting, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Setting, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Setting, lv_color_hex(0x22272c), LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Setting_img_1
	ui->Setting_img_1 = lv_img_create(ui->Setting);
	lv_obj_add_flag(ui->Setting_img_1, LV_OBJ_FLAG_CLICKABLE);
	lv_obj_add_flag(ui->Setting_img_1, LV_OBJ_FLAG_CLICK_FOCUSABLE);

	lv_img_set_src(ui->Setting_img_1, &_left_alpha_40x40);
	lv_img_set_pivot(ui->Setting_img_1, 50, 50);
	lv_img_set_angle(ui->Setting_img_1, 0);
	lv_obj_set_pos(ui->Setting_img_1, 19, 10);
	lv_obj_set_size(ui->Setting_img_1, 40, 40);

	// Write style for Setting_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_opa(ui->Setting_img_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Setting_roller_1
	ui->Setting_roller_1 = lv_roller_create(ui->Setting);
	lv_roller_set_options(ui->Setting_roller_1, "T\nR\nS\n4\n5", LV_ROLLER_MODE_INFINITE);
	lv_roller_set_visible_row_count(ui->Setting_roller_1, 2);
	lv_obj_set_pos(ui->Setting_roller_1, 111, 65);
	lv_obj_set_width(ui->Setting_roller_1, 150);

	// Write style for Setting_roller_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_radius(ui->Setting_roller_1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Setting_roller_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Setting_roller_1, lv_color_hex(0x383c40), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Setting_roller_1, lv_color_hex(0x333333), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Setting_roller_1, &lv_font_arial_14, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Setting_roller_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->Setting_roller_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Setting_roller_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write style for Setting_roller_1, Part: LV_PART_SELECTED, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Setting_roller_1, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Setting_roller_1, lv_color_hex(0xffffff), LV_PART_SELECTED | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Setting_roller_1, lv_color_hex(0x000000), LV_PART_SELECTED | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Setting_roller_1, &lv_font_arial_20, LV_PART_SELECTED | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Setting_roller_1, LV_TEXT_ALIGN_CENTER, LV_PART_SELECTED | LV_STATE_DEFAULT);

	// Write codes Setting_slider_1
	ui->Setting_slider_1 = lv_slider_create(ui->Setting);
	lv_slider_set_range(ui->Setting_slider_1, 0, 100);
	lv_slider_set_mode(ui->Setting_slider_1, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->Setting_slider_1, 50, LV_ANIM_OFF);
	lv_obj_set_pos(ui->Setting_slider_1, 111, 186);
	lv_obj_set_size(ui->Setting_slider_1, 150, 5);

	// Write style for Setting_slider_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Setting_slider_1, 60, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Setting_slider_1, lv_color_hex(0x4c4f52), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Setting_slider_1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->Setting_slider_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Setting_slider_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write style for Setting_slider_1, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Setting_slider_1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Setting_slider_1, lv_color_hex(0xffffff), LV_PART_INDICATOR | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Setting_slider_1, 50, LV_PART_INDICATOR | LV_STATE_DEFAULT);

	// Write style for Setting_slider_1, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->Setting_slider_1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->Setting_slider_1, lv_color_hex(0xffffff), LV_PART_KNOB | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Setting_slider_1, 50, LV_PART_KNOB | LV_STATE_DEFAULT);

	// Write codes Setting_label_2
	ui->Setting_label_2 = lv_label_create(ui->Setting);
	lv_label_set_text(ui->Setting_label_2, "Type");
	lv_label_set_long_mode(ui->Setting_label_2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Setting_label_2, 19, 87);
	lv_obj_set_size(ui->Setting_label_2, 60, 16);

	// Write style for Setting_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Setting_label_2, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Setting_label_2, &lv_font_arial_15, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Setting_label_2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Setting_label_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Setting_label_4
	ui->Setting_label_4 = lv_label_create(ui->Setting);
	lv_label_set_text(ui->Setting_label_4, "Light");
	lv_label_set_long_mode(ui->Setting_label_4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->Setting_label_4, 19, 177);
	lv_obj_set_size(ui->Setting_label_4, 77, 23);

	// Write style for Setting_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->Setting_label_4, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->Setting_label_4, &lv_font_arial_15, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->Setting_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->Setting_label_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Setting_line_1
	ui->Setting_line_1 = lv_line_create(ui->Setting);
	static lv_point_t Setting_line_1[] = {
		{0, 0},
		{320, 0},
	};
	lv_line_set_points(ui->Setting_line_1, Setting_line_1, 2);
	lv_obj_set_pos(ui->Setting_line_1, 0, 145);
	lv_obj_set_size(ui->Setting_line_1, 320, 2);

	// Write style for Setting_line_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_line_width(ui->Setting_line_1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->Setting_line_1, lv_color_hex(0x373b3f), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->Setting_line_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_rounded(ui->Setting_line_1, true, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Setting_line_2
	ui->Setting_line_2 = lv_line_create(ui->Setting);
	static lv_point_t Setting_line_2[] = {
		{0, 0},
		{320, 0},
	};
	lv_line_set_points(ui->Setting_line_2, Setting_line_2, 2);
	lv_obj_set_pos(ui->Setting_line_2, 0, 222);
	lv_obj_set_size(ui->Setting_line_2, 320, 2);
	lv_obj_add_flag(ui->Setting_line_2, LV_OBJ_FLAG_HIDDEN);

	// Write style for Setting_line_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_line_width(ui->Setting_line_2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->Setting_line_2, lv_color_hex(0x373b3f), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->Setting_line_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_rounded(ui->Setting_line_2, true, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Write codes Setting_line_3
	ui->Setting_line_3 = lv_line_create(ui->Setting);
	static lv_point_t Setting_line_3[] = {
		{0, 0},
		{320, 0},
	};
	lv_line_set_points(ui->Setting_line_3, Setting_line_3, 2);
	lv_obj_set_pos(ui->Setting_line_3, 0, 63);
	lv_obj_set_size(ui->Setting_line_3, 320, 2);
	lv_obj_add_flag(ui->Setting_line_3, LV_OBJ_FLAG_HIDDEN);

	// Write style for Setting_line_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_line_width(ui->Setting_line_3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->Setting_line_3, lv_color_hex(0x373b3f), LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->Setting_line_3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	lv_obj_set_style_line_rounded(ui->Setting_line_3, true, LV_PART_MAIN | LV_STATE_DEFAULT);

	// Update current screen layout.
	lv_obj_update_layout(ui->Setting);

	// Init events for screen.
	events_init_Setting(ui);
}
