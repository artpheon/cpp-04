#include "Character.hpp"

Character::Character(std::string const &name)
: _name(name), _ap(40), _weapon(nullptr) {}

Character::Character(const Character& right) {
    *this = right;
}

Character&  Character::operator=(const Character& right) {
    if (this != &right) {
        this->_name = right._name;
        this->_ap = right._ap;
        this->_weapon = right._weapon;
    }
    return *this;
}

Character::~Character()
{}

void Character::recoverAP() {
    if (this->_ap + 10 > 40)
        this->_ap = 40;
    else
        this->_ap += 10;
}

void Character::equip(AWeapon* weapon) {
    this->_weapon = weapon;
}

void Character::attack(Enemy* enemy) {
    if (this->_weapon && enemy) {
        if (this->_ap >= this->_weapon->getAPCost()) {
            this->_ap -= this->_weapon->getAPCost();
            std::cout << this->_name << " attacks " << enemy->getType()
            << " with a " << this->_weapon->getName() << std::endl;
            this->_weapon->attack();
            enemy->takeDamage(this->_weapon->getDamage());
            if (enemy->getHP() == 0)
                delete enemy;
        }
    }
}

const std::string& Character::getName() const {
    return this->_name;
}

const std::string& Character::getWeaponType() const {
    return this->_weapon->getName();
}

int Character::getAP() const {
    return this->_ap;
}
bool Character::armed() const {
    return (bool)this->_weapon;
}

std::ostream&   operator<<(std::ostream& o, const Character& c) {
    o << c.getName() << " has " << c.getAP() << " AP, and ";
    if (c.armed())
        std::cout << "wields a " << c.getWeaponType() << std::endl;
    else
        std::cout << "is unarmed" << std::endl;
    return o;
}