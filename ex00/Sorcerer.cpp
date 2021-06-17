#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) :
_name(name), _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& right) {
    *this = right;
}

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title << " is dead. Consequences will never be the same!" << std::endl;

}

Sorcerer&    Sorcerer::operator=(const Sorcerer& right) {
    this->_name = right._name;
    this->_title = right._title;
    return *this;
}

const std::string& Sorcerer::getName() const {
    return this->_name;
}

const std::string& Sorcerer::getTitle() const {
    return this->_title;
}

void Sorcerer::polymorph(Victim const &obj) const {
    obj.getPolymorphed();
}

std::ostream& operator<<(std::ostream& o, Sorcerer& right) {
    o << "I am " << right.getName() << ", " << right.getTitle() << " and I like ponies!" << std::endl;
    return o;
}
