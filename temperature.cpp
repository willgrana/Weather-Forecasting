//
// This is the cpp file for the Temps class.
// Here the methods within the class are defined.
// TODO: The getCelsius method needs fixing.
// TODO: The setCelsius method is buggy.

#include "temperature.h"
#include <ostream>

Temps::Temps() : fFahrenheit(32) {

}
double Temps::getFahrenheit() {
    return fFahrenheit;
}
void Temps::setFahrenheit(double pTemp) {
    fFahrenheit = pTemp;
}
double Temps::getCelsius() const {
    return (fFahrenheit-32)*(5/9);        // NEED TO FIX
}
void Temps::setCelsius(int pCelsius) {
    fFahrenheit=(pCelsius*(9/5)+32);
} //BUGGY

bool operator == (Temps &lhs, Temps &rhs) {
    // Compare the unique attribute (in this case, name)
    return lhs.fFahrenheit == rhs.fFahrenheit;
}

bool operator < (const Temps &lhs, const Temps &rhs) {
    return lhs.fFahrenheit < rhs.fFahrenheit;
}

std::ostream& operator << (std::ostream& outs, const Temps &lec) {
    outs << lec.fFahrenheit;
    return outs;
}


