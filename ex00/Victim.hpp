#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim {
    public:
        Victim(std::string name);
        Victim(const Victim&);
        virtual ~Victim();
        Victim&    operator=(const Victim&);
        const std::string& getName() const;
        Victim&     setName(std::string);
        virtual void getPolymorphed() const;
    private:
        Victim();
        std::string _name;
};

std::ostream& operator<<(std::ostream& o, Victim& right);

#endif