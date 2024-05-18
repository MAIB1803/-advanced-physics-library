#ifndef QUANTUMFLUCTUATION_H
#define QUANTUMFLUCTUATION_H

#include "particles/Particle.h"
#include <vector>
#include <random>

class QuantumFluctuation {
public:
    QuantumFluctuation(double vacuumEnergy);

    std::vector<Particle> generateParticles();

private:
    double vacuumEnergy;
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution;
};

#endif // QUANTUMFLUCTUATION_H
