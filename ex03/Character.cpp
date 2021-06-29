#include "Character.hpp"

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (_materia[i])
            delete _materia[i];
    }
}

Character::Character(const std::string& name) : _name(name) {
    this->_materia[0] = 0;
    this->_materia[1] = 0;
    this->_materia[2] = 0;
    this->_materia[3] = 0;
}

Character::Character(const Character& right) {
    *this = right;
}

Character& Character::operator=(const Character& right) {
    if (this != &right) {
        _name = right.getName();
        for (int i = 0; i < 4; i++) {
            if (right._materia[i])
                _materia[i] = right._materia[i]->clone();
            else
                break;
        }
    }
    return *this;
}

const std::string& Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    int i = 0;
    while (_materia[i] != 0) {
        ++i;
    }
    if (i < 4 && m)
        _materia[i] = m;
}

void Character::unequip(int idx) {
    if (idx <= 3 && idx >= 0)
        _materia[idx] = 0;
}

void Character::use(int idx, ICharacter& target) {
    if (idx <= 3 && idx >= 0) {
        if (_materia[idx]) {
        //std::cout << "Using materia " << _materia[idx]->getType() << std::endl;
        _materia[idx]->use(target);
        }
    }
}
