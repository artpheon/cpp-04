#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& right) {
    *this = right;
}

Cure& Cure::operator=(const Cure& right) {
    AMateria::operator=(right);
    //_type = right.getType();
    //_xp = right.getXP();
    return *this;
}

AMateria* Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}