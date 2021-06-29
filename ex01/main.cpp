#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"


void func() {
    Enemy *op = new RadScorpion();
    op->takeDamage(10);
    std::cout << "HP: " << op->getHP() << std::endl;
    delete op;
}

void func2() {
    Enemy *op = new SuperMutant();
    op->takeDamage(10);
    std::cout << "HP: " << op->getHP() << std::endl;
    delete op;
}

int main() {
    //func();
    //func2();
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    me->attack(b);
    me->attack(b);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    return 0;
}