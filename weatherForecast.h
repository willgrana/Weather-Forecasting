//This is my WeatherForecast class. It represents a day as a struct and stores the days in a vector.
//
#ifndef WEATHER_FORECAST_WEATHERFORECAST_H
#define WEATHER_FORECAST_WEATHERFORECAST_H

#include "temperature.h"
#include <vector>

enum days{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

struct Day {
    Day(int h, int l, days d);
    days day;
    Temps tempHigh;
    Temps tempLow;
    void setHigh(int h);
    void setLow( int l);
    Temps getHigh();
    Temps getLow();
    days getDay();
    std::string daysToString(days d);

};

class WeatherForecast {
private:
    std::vector<Day> daysOfWeek;
    int numberOfDays;
public:
    WeatherForecast();
    void addDay(Day l);
    int getNumberOfDays();
    void printForecast();
    Temps findLow();
    Temps findHigh();


};


#endif //WEATHER_FORECAST_WEATHERFORECAST_H
