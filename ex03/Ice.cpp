#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& right) {
    *this = right;
}

Ice& Ice::operator=(const Ice& right) {
    AMateria::operator=(right);
    //_type = right.getType();
    //_xp = right.getXP();
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}