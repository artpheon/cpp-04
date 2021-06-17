#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>
# include <iostream>

class Enemy {
private:
    int _hp;
    std::string _type;
    Enemy();
public:
    Enemy(int hp, std::string const & type);
    Enemy(const Enemy&);
    Enemy&  operator=(const Enemy&);
    virtual ~Enemy();
    const std::string& getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};
#endif