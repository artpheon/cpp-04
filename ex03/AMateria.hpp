#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
    std::string _type;
    unsigned int _xp;
public:
    AMateria();
    AMateria(const std::string& type);
    AMateria(const AMateria&);
    AMateria& operator=(const AMateria&);
    virtual ~AMateria();
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    const std::string& getType() const;
    unsigned int getXP() const;
};

#endif