#ifndef ECOSYSTEM_H
#define ECOSYSTEM_H

#include <string>

class Ecosystem {
private:
    std::string name;
    double biodiversity; // Procent din biodiversitatea initiala
    double health; // Sanatatea ecosistemului (0-100)

public:
    Ecosystem(const std::string& ecoName, double bioInit);
    void affectEcosystem(double tempRise, double pollution);
    double getBiodiversity() const;
    double getHealth() const;
    std::string getName() const;
};

#endif
