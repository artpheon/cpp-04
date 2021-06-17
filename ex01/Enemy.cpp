#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
: _hp(hp), _type(type)
{
    std::cout << "<<Enemy created>>" << std::endl;
}

Enemy::Enemy(const Enemy& right) {
    *this = right;
}

Enemy&  Enemy::operator=(const Enemy& right) {
    if (this != &right) {
        this->_hp = right.getHP();
        this->_type = right.getType();
    }
    return *this;
}

Enemy::~Enemy() {}

const std::string& Enemy::getType() const {
    return this->_type;
}

int Enemy::getHP() const {
    return this->_hp;
}

void Enemy::takeDamage(int d) {
    if (d > this->_hp)
        this->_hp = 0;
    else
        this->_hp = this->_hp - d;
}
