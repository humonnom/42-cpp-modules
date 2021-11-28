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
    //TODO: delete[] mList; 로도 되는지 체크
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

void Character::equip(AMateria* m) {
    std::cout << m->getType() << std::endl;
    if (mNum_ < M_NUM) {
        mList_[mNum_++] = m->clone();
    }
};

void Character::unequip(int idx) {
    std::cout << idx << std::endl;
    if (mNum_ != 0) {
        delete mList_[idx];
        mNum_--;
        for (int i = idx; i < mNum_; i++) {
            mList_[i] = mList_[i + 1];
        }
    }
};
// mNum idx
//   4   1   1삭제 -> idx가 0보다 클때만 수행

//                 mNum   idx
// [0][1][2][3]      4     1
//     *
// [0][x][2][3]      3     1

// [0][2][3][x]      idx ~ mNum - 2까지 돌면서 앞으로 당김
void Character::use(int idx, ICharacter& target) {
    std::cout << idx << std::endl;
    if (idx < mNum_) {
        mList_[mNum_]->use(target.getName());
    }
};

// 대입연산자 오버로드
Character& Character::operator=(Character const& other) {
    std::cout << "[ Character class ] copy assignment overload" << std::endl;
    if (this != &other) {
        name_ = other.getName();
        mNum_ = other.getMNum();
        AMateria* mList = other.getMList();
        for (int i = 0; i < mNum_; i++) {
            mList_[i] = mList[i].clone();
        }
    }
    return *this;
};