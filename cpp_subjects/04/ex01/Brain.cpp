#include "Brain.hpp"

#include <iostream>
#include <string>

std::string ideas_[100];

Brain::Brain() { std::cout << "[ Brain class ] constructor" << std::endl; };

Brain::Brain(Brain const& other) {
    std::cout << "[ Brain class ] copy constructor" << std::endl;
    *this = other;
};
Brain::~Brain() { std::cout << "[ Brain class ] destructor" << std::endl; };

void Brain::setIdeas() {
    std::cout << "[ Brain class ] set ideas" << std::endl;
};

// operator
Brain& Brain::operator=(Brain const& other) {
    std::cout << "[ Brain class ] copy assignment overload" << std::endl;
    // if (this != &other) {};
    //깊은복사
    return *this;
};
;