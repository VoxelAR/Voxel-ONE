#include <ST7789_AVR.h>
#include <math.h>

#define TFT_CS  -1
#define TFT_RST  9
#define TFT_DC   10

#define SCREEN_WIDTH  240
#define SCREEN_HEIGHT 240

ST7789_AVR tft = ST7789_AVR(TFT_DC, TFT_RST, TFT_CS);

const float ANIMATION_SPEED = 0.02;
const float COLOR_SCALE     = 50.0;

float animationTime   = 0.0;

void setup() 
{
  Serial.begin(115200);

  tft.init(SCREEN_WIDTH, SCREEN_HEIGHT);
  tft.fillScreen(BLACK);
}

void loop() 
{
  unsigned long startTime = millis();
  
  for (int y = 0; y < SCREEN_HEIGHT; y++)
  {
    for (int x = 0; x < SCREEN_WIDTH; x++)
    {
      uint8_t red = (uint8_t)(128 + 127 * sin(x / COLOR_SCALE + animationTime));
      uint8_t green = (uint8_t)(128 + 127 * sin(y / COLOR_SCALE + animationTime + 2.094));
      uint8_t blue = (uint8_t)(128 + 127 * sin((x + y) / COLOR_SCALE + animationTime + 4.189));
      uint16_t color = tft.color565(red, green, blue);
      tft.drawPixel(x, y, color);
    }
  }
  
  animationTime += ANIMATION_SPEED;
  
  if (animationTime > 6.283) 
  {
    animationTime -= 6.283;
  }
  
  unsigned long endTime = millis();
  Serial.print("Frame time: ");
  Serial.print(endTime - startTime);
  Serial.println(" ms");
  
  delay(10);
}
