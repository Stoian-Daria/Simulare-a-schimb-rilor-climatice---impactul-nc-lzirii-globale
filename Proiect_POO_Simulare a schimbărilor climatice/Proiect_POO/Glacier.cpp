#include "Glacier.h"

Glacier::Glacier(double initialMass)
    : iceMass(initialMass), seaLevel(0) {}

void Glacier::melt(double temperatureRise) {
    double meltRate = 0;

    if (temperatureRise > 0) 
        meltRate = temperatureRise * 0.00001; // Crestem rata topirii pe baza temperaturii
    else
        meltRate = (- 1) * temperatureRise * 0.00001; // Crestem rata topirii pe baza temperaturii

    iceMass -= iceMass * meltRate;
    if (iceMass < 0) iceMass = 0;

    seaLevel += meltRate * 10; 
}

double Glacier::getIceMass() const {
    return iceMass;
}

double Glacier::getSeaLevel() const {
    return seaLevel;
}
