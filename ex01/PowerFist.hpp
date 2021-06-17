#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
private:
public:
    PowerFist();
    virtual ~PowerFist();
    PowerFist(const PowerFist&);
    PowerFist&    operator=(const PowerFist&);
    virtual void attack() const;
};

#endif