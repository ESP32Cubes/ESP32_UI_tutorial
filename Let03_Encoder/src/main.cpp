#include <Arduino.h>
#include <TFT_eSPI.h>
#include <lvgl.h>
#include "encoder_a.h"

/*Change to your screen resolution*/
static const uint16_t screenWidth = 320;
static const uint16_t screenHeight = 240;

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */

/* Serial debugging */
void my_print(const char *buf)
{
  Serial.printf(buf);
  Serial.flush();
}

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp_drv, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors((uint16_t *)&color_p->full, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp_drv);
}

/* Button click event callback */
static void btn_click_event(lv_event_t *e)
{
  lv_event_code_t code = lv_event_get_code(e);
  // Serial.println(code);
  if (code == LV_EVENT_CLICKED)
  {
    static bool is_white = false;    // 静态变量，用于跟踪颜色状态
    lv_obj_t *screen = lv_scr_act(); // 获取当前活动的屏幕

    if (is_white)
    {
      lv_obj_set_style_bg_color(screen, lv_color_hex(0x0000FF), 0); // 设置背景颜色为黑色
    }
    else
    {
      lv_obj_set_style_bg_color(screen, lv_color_hex(0xFFFFFF), 0); // 设置背景颜色为白色
    }

    is_white = !is_white; // 切换颜色状态
  }
}

void setup()
{
  Serial.begin(115200);

  lv_init();
  lv_log_register_print_cb(my_print);

  tft.init();
  tft.setRotation(3);

  static lv_disp_draw_buf_t draw_buf;
  static lv_color_t buf[screenWidth * 10];
  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * 10);

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /*Change the following line to your display resolution*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  lv_port_indev_init();

  /* Create simple label */
  lv_obj_t *label = lv_label_create(lv_scr_act());
  lv_label_set_text(label, "Hello ESP32Cube!");
  lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

  /* Create button below the label */
  lv_obj_t *button = lv_btn_create(lv_scr_act());
  lv_obj_align(button, LV_ALIGN_CENTER, 0, 50); /* Adjust the second parameter to set the vertical distance between label and button */

  lv_obj_t *label_btn = lv_label_create(button);
  lv_label_set_text(label_btn, "OK");

  /* Set button click event callback */
  lv_obj_add_event_cb(button, btn_click_event, LV_EVENT_ALL, NULL);
  // lv_obj_add_event_cb(button, btn_click_event, LV_EVENT_CLICKED, NULL);
}

void loop()
{
  static long last_time = millis();
  if (millis() - last_time > 5)
  {
    last_time = millis();
    lv_timer_handler(); // Call lvgl's timer handler
    lv_tick_inc(5);     // Update lvgl's tick
  }
}
