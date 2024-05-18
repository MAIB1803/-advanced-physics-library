#ifndef FORCE_H
#define FORCE_H

#include "particles/Particle.h"
#include <array>

class Force {
public:
    static std::array<double, 3> calculateGravitationalForce(const Particle& p1, const Particle& p2);
    static std::array<double, 3> calculateElectrostaticForce(const Particle& p1, const Particle& p2);
};

#endif // FORCE_H
