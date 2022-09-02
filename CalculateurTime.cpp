#include "CalculateurTime.h"

#define SEC_D 86400
#define SEC_H 3600
#define SEC_M 60

void CalculateurTime::drawWatchFace() {
  calculateur();
  int x = 100;
  int y = 125;
    
  int16_t x1, y1;
  uint16_t w, h;
  String displayTime;

  display.fillScreen(GxEPD_BLACK);
  display.setTextColor(GxEPD_WHITE);

  if (decimal_minutes == 0) {
    displayTime = "NEW";

  } else {
    displayTime = String(1000 - decimal_minutes);
  }  

  // center time on dsiplay
  display.setFont(&MADE_Sunflower_PERSONAL_USE39pt7b);
  display.setTextWrap(false);
  display.getTextBounds(displayTime, x, y, &x1, &y1, &w, &h);
  display.setCursor(x - w / 2, y);
  display.print(displayTime); 
}

// calculate decimal time and set new alarm
void CalculateurTime::calculateur(){
  RTC.read(currentTime);

  int seconds = currentTime.Hour*SEC_H + currentTime.Minute*SEC_M + currentTime.Second;
  decimal_minutes = round(seconds/SEC_D*1000);

}