#include "Region.h"
#include <iostream>

Region::Region(const std::string& regionName, Climate clm, Glacier glc, Ecosystem eco)
    : name(regionName), climate(clm), glacier(glc), ecosystem(eco) {}

void Region::simulateYear(double tempChange, double co2Change, double pollution) {
    climate.updateClimate(tempChange, co2Change);
    glacier.melt(climate.getTemperature());
    ecosystem.affectEcosystem(climate.getTemperature(), pollution);
}

void Region::displayStatus() const {
    std::cout << "  Regiune: " << name << "\n";
    std::cout << "  Tip ecosistem: " << ecosystem.getName() << "\n";
    std::cout << "  Temperatura medie: " << climate.getTemperature() << " grade Celsius\n";
    std::cout << "  Nivelul CO2: " << climate.getCO2Level() << " ppm\n";

    if (glacier.getIceMass() > 0) {
        std::cout << "  Masa ghetarilor: " << glacier.getIceMass() << " gigatone\n";
    }

    std::cout << "  Nivelul marii: " << glacier.getSeaLevel() << " mm\n";
    std::cout << "  Biodiversitate: " << ecosystem.getBiodiversity() << "%\n";
    std::cout << "  Sanatatea ecosistemului: " << ecosystem.getHealth() << "%\n";
}
