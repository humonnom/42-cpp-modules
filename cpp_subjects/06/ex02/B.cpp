#include "B.hpp"

#include "Base.hpp"
#include "iostream"

B::B(){
    // std::cout << "B 생성" << std::endl;
};

B::B(B const& other) {
    (void)other;
    // std::cout << "B 생성" << std::endl;
};

B::~B(){
    // std::cout << "B 소멸" << std::endl;
};

//operator
B& B::operator=(B const& other) {
    (void)other;
    return *this;
};