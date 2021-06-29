#include "Squad.hpp"

Squad::Squad() :
_arr(0), _num(0) {}

Squad::Squad(const Squad& right) {
    *this = right;
}

Squad&  Squad::operator=(const Squad& right) {
    this->_num = right.getCount();
    this->_arr = new ISpaceMarine*[this->_num];
    for (int i = 0; i < right.getCount(); i++) {
        this->_arr[i] = right._arr[i]->clone();
    }
    return *this;
}

Squad::~Squad() {
    this->clear(this->_arr, this->_num);
}

int Squad::getCount() const {
    return this->_num;
}

void    Squad::clear(ISpaceMarine** arr, int n) {
    for (int i = 0; i < n; i++) {
        delete arr[i];
    }
    delete [] arr;
}

ISpaceMarine* Squad::getUnit(int n) const {
    return this->_arr[n];
}

int Squad::push(ISpaceMarine* obj) {
    int i = 0;
    ISpaceMarine** tmp = new ISpaceMarine*[this->_num + 1];
    
    if (!obj)
        return this->_num;
    for (; i < this->_num; i++) {
        if (tmp[i] != obj)
            tmp[i] = this->_arr[i];
        else {
            break ;
        }
    }
    if (i != this->_num && i != 0)
        this->clear(tmp, i);
    else {
        tmp[i] = obj;
        delete [] this->_arr;
        this->_arr = tmp;
        ++this->_num;
    }
    return (this->_num);
}
