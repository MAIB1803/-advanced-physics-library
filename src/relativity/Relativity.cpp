#include "relativity/Relativity.h"
#include <cmath>

const double c = 3e8; // Speed of light in vacuum

double Relativity::calculateRelativisticEnergy(const Particle& particle) {
    double mass = particle.getMass();
    std::array<double, 3> velocity = particle.getVelocity();
    double speedSquared = velocity[0] * velocity[0] + velocity[1] * velocity[1] + velocity[2] * velocity[2];
    return mass * c * c / std::sqrt(1 - speedSquared / (c * c));
}
