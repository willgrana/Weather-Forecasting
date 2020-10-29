
#ifndef WEATHER_FORECAST_TEMPERATURE_H
#define WEATHER_FORECAST_TEMPERATURE_H

#include <ostream>

class Temps {
    //Fields
    double fFahrenheit;
public:
    // Defualt Constructor
    // Requires: Nothing
    // Modifies: fFahrenheit
    // Effects: Sets fields to defaults
    Temps();

    // Getters
    // Requires: Nothing
    // Modifies: Nothing
    // Effects: Returns value of field
    double getFahrenheit();

    double getCelsius() const;

    // Setters
    // Requires: integer or double
    // Modifies: Field being set
    // Effects: Assigns input value to field
    void setFahrenheit(double pTemp);

    void setCelsius(int pCelsius);

    friend bool operator == (Temps &lhs, Temps &rhs);

    friend bool operator < (const Temps &lhs, const Temps &rhs);

    friend std::ostream& operator << (std::ostream& outs, const Temps &lec);
};

#endif //WEATHER_FORECAST_TEMPERATURE_H
