#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

std::string Brain::sentence_pool_[14] = {
    "\"beam me up, Scotty.\"",
    "\"Hang on tight. And survive. Everybody does.\"",
    "\"Logic is the beginning of wisdom, not the end.\"",
    "\"Highly illogical.\"",
    "\"Live long, and prosper.\"",
    "\"Things are only impossible until they're not.\"",
    "\"Insufficient facts always invite danger.\"",
    "\"I canna' change the laws of physics.\"",
    "\"KHAAANNN!\"",
    "\"One man cannot summon the future.\"",
    "\"But one man can change the present!\"",
    "\"Change is the essential process of all existence.\"",
    "\"Without freedom of choice there is no creativity.\"",
    "\"To boldly go where no man has gone before.\"",
};

int main() {
    std::cout << "[          correct case            ]" << std::endl;
    std::cout << "=========== create all ============" << std::endl;
    // const Animal* meta = new Animal();
    Brain* brain = new Brain();
    std::string* array = brain->getIdeas();

    std::cout << array[0] << std::endl;

    std::cout << "=========== delete all ============" << std::endl;
    delete brain;
    while (1)
        ;
}