#include <Arduino.h>
#include <TFT_eSPI.h>
#include <lvgl.h>

/*Change to your screen resolution*/
static const uint16_t screenWidth = 320;
static const uint16_t screenHeight = 240;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[screenWidth * screenHeight / 10];

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

void setup()
{
  Serial.begin(115200);

  lv_init();

  lv_log_register_print_cb(my_print); /* register print function for debugging */

  tft.init();
  tft.setRotation(3);
<<<<<<< Updated upstream

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, screenWidth * screenHeight / 10);

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /*Change the following line to your display resolution*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  /* Create simple label */
  lv_obj_t *label = lv_label_create(lv_scr_act());
  lv_label_set_text(label, "Hello ESP32Cube!");
  lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
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
=======

  tft.fillScreen(TFT_BLUE);
  tft.setCursor(50, 50, 4);
  tft.setTextColor(TFT_WHITE);
  tft.println("Hello ESP32Cube!");
  delay(2000);
>>>>>>> Stashed changes
}

void loop()
{
}
