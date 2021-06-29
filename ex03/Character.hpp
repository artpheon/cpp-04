#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include <iostream>

class Character: public ICharacter {
private:
	std::string _name;
	AMateria*    _materia[4];
	Character();
public:
	virtual ~Character();
	Character(const std::string& name);
	Character(const Character&);
	Character& operator=(const Character&);
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif