#include "CalculateurRTC.h"

void CalculateurRTC::clearAlarm(byte min, byte hour, byte day, byte weekday)
{
    // TODO: support the other RTC? nah...
    rtc_pcf.clearAlarm();
    rtc_pcf.setAlarm(min, hour, day, weekday);
}