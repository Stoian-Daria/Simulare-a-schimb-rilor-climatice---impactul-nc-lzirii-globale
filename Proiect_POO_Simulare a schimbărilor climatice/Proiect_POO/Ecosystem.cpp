#include "Ecosystem.h"

Ecosystem::Ecosystem(const std::string& ecoName, double bioInit)
    : name(ecoName), biodiversity(bioInit), health(100) {}

void Ecosystem::affectEcosystem(double tempRise, double pollution) {
    // Impact negativ asupra sanatatii ecosistemului din cauza temperaturii si poluarii
    double tempImpact = tempRise * 0.01; // Exemplu: scade 0.01% sanatatea pe grad Celsius
    double pollutionImpact = pollution * 0.1; // Exemplu: scade 0.02% sanatatea pe unitate de poluare

    health -= (tempImpact + pollutionImpact);
    if (health < 0) health = 0;

    // Impact asupra biodiversitatii
    biodiversity -= (tempRise * 0.01 + pollution * 0.1);
    if (biodiversity < 0) biodiversity = 0;
}

double Ecosystem::getBiodiversity() const {
    return biodiversity;
}

double Ecosystem::getHealth() const {
    return health;
}

std::string Ecosystem::getName() const {
    return name;
}
