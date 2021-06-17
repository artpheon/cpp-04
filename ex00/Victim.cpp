#include "Victim.hpp"

Victim::Victim(std::string name) :
_name(name)
{
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& right) {
    *this = right;
}

Victim::~Victim() {
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;

}

Victim&    Victim::operator=(const Victim& right) {
    this->_name = right._name;
    return *this;
}

const std::string& Victim::getName() const {
    return this->_name;
}

Victim&     Victim::setName(std::string name) {
    this->_name = name;
    return *this;
}

void Victim::getPolymorphed() const {
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& o, Victim& right) {
    o << "I'm " << right.getName() << " and I like otters!" << std::endl;
    return o;
}