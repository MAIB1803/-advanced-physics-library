#include "particles/Particle.h"
#include <cmath>

const double c = 3e8; // Speed of light in vacuum

Particle::Particle(double mass, double charge, const std::array<double, 3>& position, const std::array<double, 3>& velocity)
    : mass(mass), charge(charge), position(position), velocity(velocity) {}

double Particle::getMass() const {
    return mass;
}

double Particle::getCharge() const {
    return charge;
}

double Particle::getEnergy() const {
    return mass * c * c;
}

std::array<double, 3> Particle::getPosition() const {
    return position;
}

std::array<double, 3> Particle::getVelocity() const {
    return velocity;
}

void Particle::setPosition(const std::array<double, 3>& position) {
    this->position = position;
}

void Particle::setVelocity(const std::array<double, 3>& velocity) {
    this->velocity = velocity;
}
