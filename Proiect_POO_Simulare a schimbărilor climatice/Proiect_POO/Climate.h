#ifndef CLIMATE_H
#define CLIMATE_H

class Climate {
private:
    double temperature; // Temperatura medie
    double precipitation; // Precipitatii medii anuale
    double co2Level; // Nivel de CO2 in atmosfera

public:
    Climate(double temp, double precip, double co2);
    void updateClimate(double tempChange, double co2Change);
    double getTemperature() const;
    double getPrecipitation() const;
    double getCO2Level() const;
};

#endif
