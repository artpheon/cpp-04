# include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    _materias[0] = 0;
    _materias[1] = 0;
    _materias[2] = 0;
    _materias[3] = 0;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (_materias[i])
            delete _materias[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& right) {
    *this = right;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& right) {
    if (this != &right) {
        for (int i = 0; i < 4; i++) {
            if (_materias[i])
                _materias[i] = right._materias[i]->clone();
            else
                _materias[i] = 0;
        }
    }
    return *this;    
}

void MateriaSource::learnMateria(AMateria* m) {
    int i = 0;
    while (_materias[i])
        ++i;
    if (i < 4)
        _materias[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    int i = 0;
    while (i < 4 && _materias[i]) {
        if (_materias[i]->getType() == type)
            return _materias[i]->clone();
        ++i;
    }
    return 0;
}
