#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer {
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer&);
        ~Sorcerer();
        Sorcerer&    operator=(const Sorcerer&);
        const std::string& getName() const;
        const std::string& getTitle() const;
        void polymorph(Victim const &) const;
    private:
        Sorcerer();
        std::string _name;
        std::string _title;
};

std::ostream& operator<<(std::ostream& o, Sorcerer& right);

#endif