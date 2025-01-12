#include "Simulation.h"
#include <iostream>

Simulation::Simulation() {}

void Simulation::addRegion(const Region& region) {
    regions.push_back(region);
}

void Simulation::runSimulation(int years) {
    for (int i = 0; i < years; ++i) {
        std::cout << "\nAnul " << (i + 1) << " din simulare:\n";
        for (auto& region : regions) {
            region.simulateYear(0.01 * (i + 1), 0.01 * (i + 1), 0.1 * (i + 1));
            region.displayStatus();
        }
    }
}
