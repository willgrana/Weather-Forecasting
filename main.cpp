//Main function to demonstrate the functionality of the weatherForecast class.

#include <iostream>
#include "temperature.h"
#include "weatherForecast.h"
using namespace std;

int main() {
    //Testing overloaded operators
    Temps myTemp;
    Temps myTemp2;
    Temps myTemp3;
    myTemp.setFahrenheit(80);
    myTemp2.setFahrenheit(50);
    myTemp3.setFahrenheit(80);
    if (myTemp2 < myTemp) {
        cout << myTemp2 << " is less than " << myTemp << endl;
    }
    if (myTemp == myTemp2) {
        cout << "this shouldn't print" << endl;
    }
    if (myTemp == myTemp3) {
        cout << myTemp << " is equal to " << myTemp3 << endl;
    }

    //Testing WeatherForecast class

    WeatherForecast newForecast;
    Day monday = Day(80,40, Monday);
    Day tuesday = Day(72,35, Tuesday);
    Day wednesday = Day(71,55, Wednesday);
    Day thursday = Day(85,31, Thursday);
    Day friday = Day(82,20, Friday);
    Day saturday = Day(70,48, Saturday);
    Day sunday = Day(68,51, Sunday);
    newForecast.addDay(sunday);
    newForecast.addDay(monday);
    newForecast.addDay(tuesday);
    newForecast.addDay(wednesday);
    newForecast.addDay(thursday);
    newForecast.addDay(friday);
    newForecast.addDay(saturday);

    newForecast.printForecast();
    cout << newForecast.findLow() << endl;
    cout << newForecast.findHigh() << endl;







    return 0;
}