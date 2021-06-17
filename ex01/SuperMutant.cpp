#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
: Enemy(170, "Super mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& right) : Enemy(right) {
}

SuperMutant&  SuperMutant::operator=(const SuperMutant& right) {
    Enemy::operator=(right);
    return *this;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int d) {
    if (d > 3)
        Enemy::takeDamage(d - 3);
}