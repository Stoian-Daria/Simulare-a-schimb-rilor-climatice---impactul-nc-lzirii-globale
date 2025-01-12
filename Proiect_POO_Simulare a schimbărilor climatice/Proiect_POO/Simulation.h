#ifndef SIMULATION_H
#define SIMULATION_H

#include "Region.h"
#include <vector>

class Simulation {
private:
    std::vector<Region> regions;

public:
    Simulation();
    void addRegion(const Region& region);
    void runSimulation(int years);
};

#endif
