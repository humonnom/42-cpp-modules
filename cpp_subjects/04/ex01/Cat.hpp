#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
   private:
    Brain* brain_;

   public:
    Cat();
    Cat(std::string type);
    Cat(Cat const& other);
    ~Cat();

    void makeSound() const;

    Cat& operator=(Cat const& other);
};

#endif