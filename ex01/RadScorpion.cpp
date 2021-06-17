#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
: Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& right) : Enemy(right) {
}

RadScorpion&  RadScorpion::operator=(const RadScorpion& right) {
    Enemy::operator=(right);
    return *this;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}