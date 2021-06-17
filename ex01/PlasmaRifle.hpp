#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
private:
public:
    PlasmaRifle();
    virtual ~PlasmaRifle();
    PlasmaRifle(const PlasmaRifle&);
    PlasmaRifle&    operator=(const PlasmaRifle&);
    virtual void attack() const;
};

#endif