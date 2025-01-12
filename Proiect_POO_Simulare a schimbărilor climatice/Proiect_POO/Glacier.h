#ifndef GLACIER_H
#define GLACIER_H

class Glacier {
private:
    double iceMass; // Masa ghetarilor in gigatone
    double seaLevel; // Cresterea nivelului marii in mm

public:
    Glacier(double initialMass);
    void melt(double temperatureRise);
    double getIceMass() const;
    double getSeaLevel() const;
};

#endif
