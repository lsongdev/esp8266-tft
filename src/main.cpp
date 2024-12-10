#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup()
{
    tft.init();
    tft.setTextSize(3);
    tft.setCursor(0, 0);
    tft.println("Hello World!");
}

void loop()
{
}