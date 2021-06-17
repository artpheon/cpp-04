#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class   RadScorpion: public Enemy {
private:
public:
    RadScorpion();
    RadScorpion(const RadScorpion&);
    RadScorpion&  operator=(const RadScorpion&);
    virtual ~RadScorpion();
};

#endif