#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string& name, int apcost, int damage) :
_name(name), _apcost(apcost), _damage(damage)
{
    std::cout << "<<Created a weapon>>" << std::endl;
}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(const AWeapon& right)
: _name(right.getName()), _apcost(right.getAPCost()), _damage(right.getDamage())
{}

AWeapon&    AWeapon::operator=(const AWeapon& right) {
    this->_name = right.getName();
    this->_apcost = right.getAPCost();
    this->_damage = right.getDamage();
    return *this;
}

const std::string& AWeapon::getName() const {
    return this->_name;
}

int AWeapon::getAPCost() const {
    return this->_apcost;
}

int AWeapon::getDamage() const {
    return this->_damage;
}