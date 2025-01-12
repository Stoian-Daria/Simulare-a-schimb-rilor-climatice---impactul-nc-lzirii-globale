#ifndef REGION_H
#define REGION_H

#include "Climate.h"
#include "Glacier.h"
#include "Ecosystem.h"
#include <string>

class Region {
private:
    std::string name;
    Climate climate;
    Glacier glacier;
    Ecosystem ecosystem;

public:
    Region(const std::string& regionName, Climate clm, Glacier glc, Ecosystem eco);
    void simulateYear(double tempChange, double co2Change, double pollution);
    void displayStatus() const;
};

#endif
