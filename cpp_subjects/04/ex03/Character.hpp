#ifndef CHARCTER_HPP
#define CHARCTER_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

#define M_NUM 4

// interface class
class Character : public ICharacter {
   private:
    std::string name_;
    int mNum_;
    AMateria* mList_[M_NUM];

   public:
    // create and delete
    Character(std::string const& name);
    Character(Character const& other);
    ~Character();

    //get
    std::string const& getName() const;
    int const& getMNum() const;
    AMateria* getMList() const;

    //print
    void printMList() const;

    //play
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

    // 대입연산자 오버로드
    Character& operator=(Character const& other);
};

#endif