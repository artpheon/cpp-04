#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& right) {
    *this = right;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator& right) {
    (void)right;
    return *this;
}

AssaultTerminator* AssaultTerminator::clone() const {
    AssaultTerminator* obj = new AssaultTerminator();
    *obj = *this;
    return obj;
}

void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}
