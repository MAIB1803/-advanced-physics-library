#include "forces/Force.h"
#include <cmath>

const double G = 6.67430e-11; // Gravitational constant
const double k = 8.9875517873681764e9; // Coulomb constant

std::array<double, 3> Force::calculateGravitationalForce(const Particle& p1, const Particle& p2) {
    std::array<double, 3> r = {p2.getPosition()[0] - p1.getPosition()[0],
                               p2.getPosition()[1] - p1.getPosition()[1],
                               p2.getPosition()[2] - p1.getPosition()[2]};
    double distance = std::sqrt(r[0]*r[0] + r[1]*r[1] + r[2]*r[2]);
    if (distance == 0) return {0, 0, 0}; // Avoid division by zero
    double forceMagnitude = G * p1.getMass() * p2.getMass() / (distance * distance);
    return {forceMagnitude * r[0] / distance, forceMagnitude * r[1] / distance, forceMagnitude * r[2] / distance};
}

std::array<double, 3> Force::calculateElectrostaticForce(const Particle& p1, const Particle& p2) {
    std::array<double, 3> r = {p2.getPosition()[0] - p1.getPosition()[0],
                               p2.getPosition()[1] - p1.getPosition()[1],
                               p2.getPosition()[2] - p1.getPosition()[2]};
    double distance = std::sqrt(r[0]*r[0] + r[1]*r[1] + r[2]*r[2]);
    if (distance == 0) return {0, 0, 0}; // Avoid division by zero
    double forceMagnitude = k * p1.getCharge() * p2.getCharge() / (distance * distance);
    return {forceMagnitude * r[0] / distance, forceMagnitude * r[1] / distance, forceMagnitude * r[2] / distance};
}
