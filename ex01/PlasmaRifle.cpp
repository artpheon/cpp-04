#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
: AWeapon("Plasma Rifle", 5, 21)
{
    std::cout << "<<PlasmaRifle created!>>" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& right) :
AWeapon(right.getName(), right.getAPCost(), right.getDamage())
{}

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle& right)
{
    AWeapon::operator=(right);
    return *this;
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}