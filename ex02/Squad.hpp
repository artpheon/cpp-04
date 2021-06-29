#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {
    private:
        ISpaceMarine** _arr;
        int _num;
        void    clear(ISpaceMarine** arr, int n);
    public:
        Squad();
        Squad(const Squad&);
        Squad&  operator=(const Squad&);
        ~Squad();
        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);
};

#endif