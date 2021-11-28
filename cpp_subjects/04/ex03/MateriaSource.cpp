#include "MateriaSource.hpp"

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

// create and delete
MateriaSource::MateriaSource() : IMateriaSource() {
    std::cout << "[ MateriaSource class ] constructor" << std::endl;
};
MateriaSource::MateriaSource(MateriaSource const& other) : IMateriaSource() {
    std::cout << "[ MateriaSource class ] copy constructor" << std::endl;
    *this = other;
};
MateriaSource::~MateriaSource() {
    for (int i = 0; i < msNum_; i++) {
        delete msList_[i];
    }
    std::cout << "[ MateriaSource class ] destructor" << std::endl;
};

// get
int MateriaSource::getMateriaSourceNum() const {
    return msNum_;
};
AMateria* MateriaSource::getMateriaSourceList() const {
    return msList_[0];
};

// print
void MateriaSource::printMateriaSourceList() const {
    std::cout << "ms_list: ";
    for (int i = 0; i < msNum_; i++) {
        std::cout << "[" << msList_[i]->getType() << "] ";
    }
    std::cout << std::endl;
};

// play
void MateriaSource::learnMateria(AMateria* m) {
    if (msNum_ + 1 < MS_NUM) {
        msList_[msNum_] = m->clone();
        msNum_++;
    };
};

AMateria* MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < msNum_; i++) {
        if (msList_[i]->getType() == type) {
            return msList_[i]->clone();
        }
    }
    return 0;
};

// 대입연산자 오버로드
MateriaSource& MateriaSource::operator=(MateriaSource const& other) {
    std::cout << "[ MateriaSource class ] copy assignment overload" << std::endl;
    if (this != &other) {
        msNum_ = other.getMateriaSourceNum();
        AMateria* msList = other.getMateriaSourceList();
        for (int i = 0; i < msNum_; i++) {
            msList_[i] = msList[i].clone();
        }
    };
    return *this;
};