#include <Arduino.h>

#include <TFT_eSPI.h> // Graphics and font library for ILI9341 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI(); // Invoke library

void setup()
{
  Serial.begin(115200);

  tft.init();
  tft.setRotation(3);
}

void loop()
{
  tft.fillScreen(TFT_BLUE);
  tft.setCursor(50, 50, 4);
  tft.setTextColor(TFT_WHITE);
  tft.println("Hello ESP32Cube!");
  delay(2000);
}
