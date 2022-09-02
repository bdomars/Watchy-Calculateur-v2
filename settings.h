#ifndef SETTINGS_H
#define SETTINGS_H

#include <Watchy.h>

//Weather Settings
#define CITY_ID "5128581"
#define OPENWEATHERMAP_APIKEY "f058fe1cad2afe8e2ddc5d063a64cecb"
#define OPENWEATHERMAP_URL "http://api.openweathermap.org/data/2.5/weather?id="
#define TEMP_UNIT "metric"
#define TEMP_LANG "en"
#define WEATHER_UPDATE_INTERVAL 30
//NTP Settings
#define NTP_SERVER "pool.ntp.org"
#define GMT_OFFSET_SEC 3600 * 3
#define DST_OFFSET_SEC 3600

watchySettings settings{
    CITY_ID,
    OPENWEATHERMAP_APIKEY,
    OPENWEATHERMAP_URL,
    TEMP_UNIT,
    TEMP_LANG,
    WEATHER_UPDATE_INTERVAL,
    NTP_SERVER,
    GMT_OFFSET_SEC,
    DST_OFFSET_SEC
};

#endif