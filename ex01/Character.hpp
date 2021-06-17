#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
private:
    Character();
protected:
    std::string _name;
    int _ap;
    AWeapon* _weapon;
public:
    Character(std::string const &);
    Character(const Character&);
    Character&  operator=(const Character&);
    ~Character();
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    virtual const std::string& getName() const;
    virtual const std::string& getWeaponType() const;
    virtual int getAP() const;
    virtual bool armed() const;
};

std::ostream&   operator<<(std::ostream&, const Character&);

#endif