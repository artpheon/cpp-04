#include "Squad.hpp"

Squad::Squad() {

}

Squad::Squad(const Squad&) {

}

Squad&  Squad::operator=(const Squad& right) {
    this->_num = right.getCount();
    this->_arr = new ISpaceMarine[this->_num];
}

Squad::~Squad() {
    delete [] this->_arr;
}

int Squad::getCount() const {
    return this->_num;
}

ISpaceMarine* Squad::getUnit(int n) const {
    return this->_arr + n;
}

int Squad::push(ISpaceMarine* obj) {

}
