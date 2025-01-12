#include "Climate.h"

Climate::Climate(double temp, double precip, double co2)
    : temperature(temp), precipitation(precip), co2Level(co2) {}

void Climate::updateClimate(double tempChange, double co2Change) {
    temperature += tempChange;
    co2Level += co2Change;
}

double Climate::getTemperature() const {
    return temperature;
}

double Climate::getPrecipitation() const {
    return precipitation;
}

double Climate::getCO2Level() const {
    return co2Level;
}
