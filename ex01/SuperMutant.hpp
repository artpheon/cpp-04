#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class   SuperMutant: public Enemy {
private:
public:
    SuperMutant();
    SuperMutant(const SuperMutant&);
    SuperMutant&  operator=(const SuperMutant&);
    virtual ~SuperMutant();
    virtual void takeDamage(int);
};

#endif