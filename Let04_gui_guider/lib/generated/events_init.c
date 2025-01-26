/*
 * Copyright 2024 NXP
 * NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

static void Main_btn_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		// Write the load screen code.
		lv_obj_t *act_scr = lv_scr_act();
		lv_disp_t *d = lv_obj_get_disp(act_scr);
		if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr))
		{
			lv_obj_clean(act_scr);
			if (guider_ui.Setting_del == true)
			{
				setup_scr_Setting(&guider_ui);
			}
			lv_scr_load_anim(guider_ui.Setting, LV_SCR_LOAD_ANIM_MOVE_LEFT, 200, 200, true);
			// guider_ui.Main_del = true;
		}
		break;
	}
	default:
		break;
	}
}
void events_init_Main(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Main_btn_1, Main_btn_1_event_handler, LV_EVENT_ALL, NULL);
}

static void Setting_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code)
	{
	case LV_EVENT_PRESSED:
	{
		// Write the load screen code.
		lv_obj_t *act_scr = lv_scr_act();
		lv_disp_t *d = lv_obj_get_disp(act_scr);
		if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr))
		{
			if (guider_ui.Main_del == true)
			{
				setup_scr_Main(&guider_ui);
			}
			lv_scr_load_anim(guider_ui.Main, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 200, true);
			guider_ui.Setting_del = true;
		}
		break;
	}
	default:
		break;
	}
}

static void Setting_img_1_event_handler(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);

	switch (code)
	{
	case LV_EVENT_CLICKED:
	{
		// Write the load screen code.
		lv_obj_t *act_scr = lv_scr_act();
		lv_disp_t *d = lv_obj_get_disp(act_scr);
		if (d->prev_scr == NULL && (d->scr_to_load == NULL || d->scr_to_load == act_scr))
		{
			if (guider_ui.Main_del == true)
			{
				setup_scr_Main(&guider_ui);
			}
			lv_scr_load_anim(guider_ui.Main, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 200, 200, true);
			guider_ui.Setting_del = true;
		}
		break;
	}
	default:
		break;
	}
}
void events_init_Setting(lv_ui *ui)
{
	lv_obj_add_event_cb(ui->Setting, Setting_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->Setting_img_1, Setting_img_1_event_handler, LV_EVENT_ALL, NULL);
}

void events_init(lv_ui *ui)
{
}
