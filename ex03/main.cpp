#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main0() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fireball");
	me->equip(tmp);
	tmp = src->createMateria("fireball");
	me->equip(tmp);
	tmp = src->createMateria("fireball");
    
	me->equip(tmp);
	me->unequip(3);
	me->equip(tmp);
	 ICharacter* bob = new Character("Bob");
	 ICharacter* misha = new Character(*((Character *)bob));
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(5, *bob);
	me->use(2, *misha);
	me->unequip(3);
	me->unequip(6);
	me->use(2, *misha);
	delete me;
	delete bob;
	delete misha;
	delete src;
	return 0;
}