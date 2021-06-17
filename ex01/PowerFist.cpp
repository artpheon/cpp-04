#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50)
{
    std::cout << "<<PowerFist created!>>" << std::endl;
}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(const PowerFist& right) :
AWeapon(right.getName(), right.getAPCost(), right.getDamage())
{}

PowerFist&    PowerFist::operator=(const PowerFist& right) {
    AWeapon::operator=(right);
    return *this;
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" << std::endl;
}