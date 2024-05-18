#include "particles/Particle.h"
#include <iostream>

int main() {
    Particle electron(9.10938356e-31, -1.60217662e-19, {0, 0, 0}, {0, 0, 0});
    std::cout << "Electron mass: " << electron.getMass() << " kg" << std::endl;
    std::cout << "Electron charge: " << electron.getCharge() << " C" << std::endl;
    std::cout << "Electron energy: " << electron.getEnergy() << " J" << std::endl;

    return 0;
}
