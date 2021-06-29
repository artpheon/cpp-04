# include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string& type) : _type(type), _xp(0) {}

AMateria::AMateria(const AMateria& right) {
    *this = right;
}

AMateria& AMateria::operator=(const AMateria& right) {
    if (this != &right) {
        _type = right.getType();
        _xp = right.getXP(); 
    }
    return *this;
}
AMateria::~AMateria() {}

void AMateria::use(ICharacter& target) {
    _xp = _xp + 10;
}

const std::string& AMateria::getType() const {
    return _type;
}

unsigned int AMateria::getXP() const {
    return _xp;
}