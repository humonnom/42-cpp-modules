#include "Brain.hpp"

#include <iostream>
#include <random>
#include <string>

Brain::Brain() {
    std::cout << "[ Brain class ] constructor" << std::endl;
    ideas_ = new std::string[100];
    std::string sentence = getRandomSentence();
    if (sentence.empty())
        sentence = "example sentence.";
    for (int i = 0; i < 100; i++) {
        ideas_[i] = sentence;
    }
};

Brain::Brain(Brain const& other) {
    std::cout << "[ Brain class ] copy constructor" << std::endl;
    ideas_ = new std::string[100];
    *this = other;
};
Brain::~Brain() {
    std::cout << "[ Brain class ] destructor" << std::endl;
    delete[] ideas_;
};

// void Brain::setIdeas() const {
//     std::cout << "[ Brain class ] set ideas" << std::endl;
// };
std::string* Brain::getIdeas() const {
    return ideas_;
};

// operator
Brain& Brain::operator=(Brain const& other) {
    std::cout << "[ Brain class ] copy assignment overload" << std::endl;
    if (this != &other) {
        std::string* ideas = other.getIdeas();
        for (int i = 0; i < 100; i++) {
            ideas_[i] = ideas[i];
        }
    };
    return *this;
};

std::string Brain::getRandomSentence() {
    std::string sentence;
    std::random_device r_device;
    std::mt19937 r_engine(r_device());
    std::uniform_int_distribution<int> dis(0, 14 - 1);
    sentence = ideas_pool_[dis(r_engine)];
    return (sentence);
}
