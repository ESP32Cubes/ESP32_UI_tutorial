#include <Arduino.h>
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "gui_guider.h"
#include "custom.h"

lv_ui guider_ui;

void setup()
{
  Serial.begin(115200);
  lv_port_disp_init();
  lv_port_indev_init();

  setup_ui(&guider_ui);
}

void loop()
{
  static long last_time = millis();

  // lv_label_set_text_fmt(guider_ui.Main_val_ch_4, "5");

  if (millis() - last_time > 5)
  {
    last_time = millis();
    lv_timer_handler(); // Call lvgl's timer handler
    lv_tick_inc(5);     // Update lvgl's tick
  }
}
