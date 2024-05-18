#ifndef PARTICLE_H
#define PARTICLE_H

#include <array>

class Particle {
public:
    Particle(double mass, double charge, const std::array<double, 3>& position, const std::array<double, 3>& velocity);

    double getMass() const;
    double getCharge() const;
    double getEnergy() const;
    std::array<double, 3> getPosition() const;
    std::array<double, 3> getVelocity() const;

    void setPosition(const std::array<double, 3>& position);
    void setVelocity(const std::array<double, 3>& velocity);

private:
    double mass;
    double charge;
    std::array<double, 3> position;
    std::array<double, 3> velocity;
};

#endif // PARTICLE_H
