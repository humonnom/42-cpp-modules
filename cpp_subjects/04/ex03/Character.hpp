#ifndef CHARCTER_HPP
#define CHARCTER_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

// interface class
class Character : public ICharacter {
   private:
    std::string name_;

   public:
    Character(std::string const& name);
    Character(Character const& other);
    ~Character();
    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, Character& target);

    // 대입연산자 오버로드
    Character& operator=(Character const& other);
};

#endif