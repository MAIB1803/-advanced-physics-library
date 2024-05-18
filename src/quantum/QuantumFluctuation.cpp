#include "quantum/QuantumFluctuation.h"

QuantumFluctuation::QuantumFluctuation(double vacuumEnergy)
    : vacuumEnergy(vacuumEnergy), distribution(0.0, 1.0) {}

std::vector<Particle> QuantumFluctuation::generateParticles() {
    std::vector<Particle> particles;
    double threshold = vacuumEnergy / 1e9;

    if (distribution(generator) < threshold) {
        //particle-antiparticle pair
        Particle electron(9.10938356e-31, -1.60217662e-19, {0, 0, 0}, {0, 0, 0});
        Particle positron(9.10938356e-31, 1.60217662e-19, {0, 0, 0}, {0, 0, 0});
        particles.push_back(electron);
        particles.push_back(positron);
    }
    return particles;
}
