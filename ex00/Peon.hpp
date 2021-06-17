#ifndef PEAON_HPP
# define PEAON_HPP
# include "Victim.hpp"

class Peon : public Victim {
    public:
        Peon(std::string);
        ~Peon();
        Peon& operator=(const Peon&);
        Peon(const Peon&);
        virtual void getPolymorphed() const;
    private:
        Peon();
};

#endif