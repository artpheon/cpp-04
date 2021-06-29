#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& right) {
    *this = right;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine& right) {
    (void)right;
    return *this;
}

TacticalMarine* TacticalMarine::clone() const {
    TacticalMarine* obj = new TacticalMarine();
    *obj = *this;
    return obj;
}

void TacticalMarine::battleCry() const {
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
    std::cout << "* attacks with a chainsword *" << std::endl;
}
