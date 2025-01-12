#include "Climate.h"
#include "Glacier.h"
#include "Ecosystem.h"
#include "Region.h"
#include "Simulation.h"
#include <iostream>
#include <string>
#include <vector>

void displayMenu() {
    std::cout << "Selectati o zona geografica pentru simulare:\n";
    std::cout << "1. Europa de Nord\n";
    std::cout << "2. Europa de Sud\n";
    std::cout << "3. Europa Centrala\n";
    std::cout << "4. Europa de Est\n";
    std::cout << "5. Europa de Vest\n";
    std::cout << "6. Asia de Nord\n";
    std::cout << "7. Asia de Sud\n";
    std::cout << "8. Asia Centrala\n";
    std::cout << "9. Asia de Est\n";
    std::cout << "10. Asia de Vest\n";
    std::cout << "11. Africa de Nord\n";
    std::cout << "12. Africa de Sud\n";
    std::cout << "13. Africa Centrala\n";
    std::cout << "14. Africa de Est\n";
    std::cout << "15. Africa de Vest\n";
    std::cout << "16. America de Nord\n";
    std::cout << "17. America de Sud\n";
    std::cout << "18. America Centrala\n";
    std::cout << "19. Australia de Nord\n";
    std::cout << "20. Australia de Sud\n";
    std::cout << "21. Australia Centrala\n";
    std::cout << "22. Australia de Est\n";
    std::cout << "23. Australia de Vest\n";
    std::cout << "24. Polul Nord\n";
    std::cout << "25. Polul Sud\n";
    std::cout << "Introduceti numarul optiunii dorite: ";
}

Region createRegion(int choice) {
    switch (choice) {
    case 1:
        return Region("Europa de Nord", Climate(10.0, 600, 400), Glacier(3000), Ecosystem("Tundra Scandinavica", 90));
    case 2:
        return Region("Europa de Sud", Climate(20.0, 400, 400), Glacier(0), Ecosystem("Paduri Mediteraneene", 95));
    case 3:
        return Region("Europa Centrala", Climate(15.0, 800, 410), Glacier(500), Ecosystem("Paduri Temperate Europene", 85));
    case 4:
        return Region("Europa de Est", Climate(12.0, 700, 405), Glacier(100), Ecosystem("Paduri Mixte Continentale", 80));
    case 5:
        return Region("Europa de Vest", Climate(16.0, 900, 410), Glacier(0), Ecosystem("Pajisti si Paduri de Coasta", 90));
    case 6:
        return Region("Asia de Nord", Climate(-5.0, 500, 390), Glacier(2000), Ecosystem("Taiga Siberiana", 85));
    case 7:
        return Region("Asia de Sud", Climate(30.0, 1500, 450), Glacier(1500), Ecosystem("Himalaya si Paduri Tropicale", 90));
    case 8:
        return Region("Asia Centrala", Climate(20.0, 300, 400), Glacier(200), Ecosystem("Deserturi si Stepe Asiatice", 70));
    case 9:
        return Region("Asia de Est", Climate(15.0, 1200, 420), Glacier(2000), Ecosystem("Paduri Temperate Asiatice", 85));
    case 10:
        return Region("Asia de Vest", Climate(25.0, 250, 400), Glacier(100), Ecosystem("Deserturi si Paduri Rare", 75));
    case 11:
        return Region("Africa de Nord", Climate(25.0, 200, 450), Glacier(0), Ecosystem("Desertul Sahara", 70));
    case 12:
        return Region("Africa de Sud", Climate(22.0, 700, 400), Glacier(0), Ecosystem("Savane si Paduri Rare", 85));
    case 13:
        return Region("Africa Centrala", Climate(28.0, 1600, 420), Glacier(0), Ecosystem("Paduri Tropicale Congo", 95));
    case 14:
        return Region("Africa de Est", Climate(24.0, 800, 410), Glacier(0), Ecosystem("Savane si Zone Montane", 80));
    case 15:
        return Region("Africa de Vest", Climate(26.0, 1000, 420), Glacier(0), Ecosystem("Savane si Zone de Trecere", 75));
    case 16:
        return Region("America de Nord", Climate(12.0, 800, 410), Glacier(2500), Ecosystem("Paduri Boreale si Tundra", 88));
    case 17:
        return Region("America de Sud", Climate(22.0, 1600, 420), Glacier(1000), Ecosystem("Padurea Amazoniana", 85));
    case 18:
        return Region("America Centrala", Climate(24.0, 1400, 420), Glacier(0), Ecosystem("Paduri Tropicale si Zone Costiere", 90));
    case 19:
        return Region("Australia de Nord", Climate(28.0, 1400, 420), Glacier(0), Ecosystem("Paduri Tropicale si Zone de Coasta", 85));
    case 20:
        return Region("Australia de Sud", Climate(24.0, 500, 400), Glacier(0), Ecosystem("Pajisti si Zone Semiaride", 80));
    case 21:
        return Region("Australia Centrala", Climate(30.0, 200, 410), Glacier(0), Ecosystem("Deserturi Interne", 80));
    case 22:
        return Region("Australia de Est", Climate(26.0, 1200, 420), Glacier(0), Ecosystem("Paduri Tropicale si Montane", 90));
    case 23:
        return Region("Australia de Vest", Climate(27.0, 300, 410), Glacier(0), Ecosystem("Zone Aride si Paduri Rare", 70));
    case 24:
        return Region("Polul Nord", Climate(-20.0, 100, 380), Glacier(5000), Ecosystem("Tundra Arctica", 60));
    case 25:
        return Region("Polul Sud", Climate(-30.0, 50, 370), Glacier(6000), Ecosystem("Desertul Antarctic", 50));
    default:
        throw std::invalid_argument("Optiune invalida!");
    }
}

int main() {
    std::cout << "Bun venit la simulatorul schimbarilor climatice!\n";
    displayMenu();

    int choice;
    std::cin >> choice;

    try {
        Region selectedRegion = createRegion(choice);
        Simulation sim;
        sim.addRegion(selectedRegion);

        int years;
        std::cout << "Introduceti numarul de ani pentru simulare: ";
        std::cin >> years;

        sim.runSimulation(years);

    }
    catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
