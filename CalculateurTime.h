#ifndef CALCULATEUR_TIME_H
#define CALCULATEUR_TIME_H

#include <Watchy.h>
#include "fonts/MadeSunflower39pt7b.h"
//#include "CalculateurRTC.h"

class CalculateurTime : public Watchy{
    using Watchy::Watchy;
    public:
        void drawWatchFace();
        // void deepSleep();
        void calculateur();

        // static CalculateurRTC RTC;
    private:
        int decimal_minutes;
};

#endif