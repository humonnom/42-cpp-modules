#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
    std::cout << "[          correct case            ]" << std::endl;
    std::cout << "=========== create all ============" << std::endl;
    // const Animal* meta = new Animal();
    const Brain* ptr = new Brain();
    ptr->setIdeas();

    std::cout << "=========== delete all ============" << std::endl;
}