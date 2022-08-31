#ifndef CALCULATEUR_RTC_H
#define CALCULATEUR_RTC_H

#include <WatchyRTC.h>

class CalculateurRTC : public WatchyRTC {
    public:
        void clearAlarm(byte min, byte hour, byte day, byte weekday);
};

#endif