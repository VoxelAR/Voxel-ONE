#include <ST7789_AVR.h>
#include <math.h>

#define TFT_CS  -1
#define TFT_RST  9
#define TFT_DC   10

#define SCREEN_WIDTH  240
#define SCREEN_HEIGHT 240

ST7789_AVR tft(TFT_DC, TFT_RST, TFT_CS);

const int NUM_LINES = 200;
const float ROTATION_SPEED = 0.08;
const int LINE_LENGTH = 120;
float rotationAngle = 0.0;

void setup() 
{
  Serial.begin(115200);
  tft.init(SCREEN_WIDTH, SCREEN_HEIGHT);
  tft.fillScreen(BLACK);
}

void loop()
{
  unsigned long startTime = millis();

  int centerX = SCREEN_WIDTH / 2;
  int centerY = SCREEN_HEIGHT / 2;

  tft.fillRect(centerX - LINE_LENGTH, centerY - LINE_LENGTH, 2 * LINE_LENGTH, 2 * LINE_LENGTH, BLACK);

  for (int i = 0; i < NUM_LINES; ++i) 
  {
    float angle = (2 * PI * i / NUM_LINES) + rotationAngle;
    int endX = centerX + (int)(LINE_LENGTH * cos(angle));
    int endY = centerY + (int)(LINE_LENGTH * sin(angle));

    uint8_t red   = (uint8_t)(128 + 127 * sin(angle));
    uint8_t green = (uint8_t)(128 + 127 * sin(angle + 2 * PI / 3));
    uint8_t blue  = (uint8_t)(128 + 127 * sin(angle + 4 * PI / 3));

    uint16_t color = tft.color565(red, green, blue);
    tft.drawLine(centerX, centerY, endX, endY, color);
  }

  rotationAngle += ROTATION_SPEED;
  if (rotationAngle > 2 * PI) rotationAngle -= 2 * PI;

  delay(10);
}
