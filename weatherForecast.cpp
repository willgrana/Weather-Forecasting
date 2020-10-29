//CPP file for defining constructor and methods for WeatherForecast class.
#include "weatherForecast.h"
#include "temperature.h"
#include <iostream>


//struct Day definitions

Day::Day(int h, int l, days d) {
    tempHigh.setFahrenheit(h);
    tempLow.setFahrenheit(l);
    day = d;
}
void Day::setHigh(int h) {
    tempHigh.setFahrenheit(h);
}
void Day::setLow(int l) {
    tempLow.setFahrenheit(l);
}
Temps Day::getHigh() {
    return tempHigh;
}
Temps Day::getLow() {
    return tempLow;
}
days Day::getDay() {
    return day;
}

std::string daysToString(days d) {
    switch(d) {
        case Sunday: return "Sunday";
        case Monday: return "Monday";
        case Tuesday: return "Tuesday";
        case Wednesday: return "Wednesday";
        case Thursday: return "Thursday";
        case Friday: return "Friday";
        case Saturday: return "Saturday";
    }
}

//weatherForecast class definitions

WeatherForecast::WeatherForecast() {
    numberOfDays = 7;

}

void WeatherForecast::addDay(Day l) {
    daysOfWeek.push_back(l);
}

int WeatherForecast::getNumberOfDays() {
    return numberOfDays;
}

void WeatherForecast::printForecast() {
    for (int i = 0; i<daysOfWeek.size(); i++) {
        std::cout << daysToString(daysOfWeek[i].getDay()) << " || High: " << daysOfWeek[i].getHigh() << " || Low:" << daysOfWeek[i].getLow() << std::endl;
        std::cout << "-------------------------------------" << std::endl;
    }
}

Temps WeatherForecast::findLow() {
    Temps t = Temps();
    for (int i = 0; i<daysOfWeek.size(); i++) {
        if (daysOfWeek[i].getLow() < t) {
            t = daysOfWeek[i].getLow();
        }
    }
    return t;
}

Temps WeatherForecast::findHigh() {
    Temps t = Temps();
    for (int i = 0; i<daysOfWeek.size(); i++) {
        if (t < daysOfWeek[i].getHigh()) {
            t = daysOfWeek[i].getHigh();
        }
    }
    return t;
}

