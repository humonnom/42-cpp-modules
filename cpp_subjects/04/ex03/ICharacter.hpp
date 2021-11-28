#ifndef ICHARCTER_HPP
#define ICHARCTER_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

// interface class
class ICharacter {
   public:
    virtual ~ICharacter() {
        std::cout << "[ ICharacter class ] destructor" << std::endl;
    }
    virtual std::string const& getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

#endif