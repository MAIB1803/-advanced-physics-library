#ifndef RELATIVITY_H
#define RELATIVITY_H

#include "particles/Particle.h"

class Relativity {
public:
    static double calculateRelativisticEnergy(const Particle& particle);
};

#endif // RELATIVITY_H
