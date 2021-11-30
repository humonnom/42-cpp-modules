#include "Character.hpp"

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character(std::string const& name) : ICharacter(), name_(name) {
    std::cout << "[ Character class ] constructor" << std::endl;
    mNum_ = 0;
};

Character::Character(Character const& other) : ICharacter() {
    std::cout << "[ Character class ] copy constructor" << std::endl;
    mNum_ = 0;
    *this = other;
};

Character::~Character() {
    for (int i = 0; i < mNum_; i++) {
        delete mList_[i];
    }
    std::cout << "[ Character class ] destructor" << std::endl;
};

std::string const& Character::getName() const {
    return name_;
};

int const& Character::getMNum() const {
    return mNum_;
};

AMateria* Character::getMList() const {
    return mList_[0];
};

void Character::printMList() const {
    std::cout << "m_list: ";
    for (int i = 0; i < mNum_; i++) {
        std::cout << "[" << mList_[i]->getType() << "] ";
    }
    std::cout << std::endl;
};

void Character::equip(AMateria* m) {
    if (mNum_ < M_NUM) {
        mList_[mNum_++] = m->clone();
    }
};

void Character::unequip(int idx) {
    if (mNum_ != 0 && idx < mNum_) {
        delete mList_[idx];
        mNum_--;
        for (int i = idx; i < mNum_; i++) {
            mList_[i] = mList_[i + 1];
        }
    }
};

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < mNum_) {
        mList_[idx]->use(target);
    }
};

// 대입연산자 오버로드
Character& Character::operator=(Character const& other) {
    std::cout << "[ Character class ] copy assignment overload" << std::endl;
    if (this != &other) {
        name_ = other.getName();
        for (int i = 0; i < mNum_; i++) {
            delete mList_[i];
        }
        mNum_ = other.getMNum();
        AMateria* mList = other.getMList();
        for (int i = 0; i < mNum_; i++) {
            mList_[i] = mList[i].clone();
        }
    }
    return *this;
};