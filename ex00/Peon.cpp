#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=(const Peon& right) {
    this->setName(right.getName());
    return *this;
}

Peon::Peon(const Peon& right) : Victim(right.getName()) {
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
