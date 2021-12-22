#include "A.hpp"

#include "Base.hpp"
#include "iostream"

A::A(){
    // std::cout < < "A 생성" << std::endl;
};

A::A(A const& other) {
    (void)other;
    // std::cout << "A 생성" << std::endl;
};

A::~A(){
    // std::cout << "A 소멸" << std::endl;
};

//operator
A& A::operator=(A const& other) {
    (void)other;
    return *this;
};