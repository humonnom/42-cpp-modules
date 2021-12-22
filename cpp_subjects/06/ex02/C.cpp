#include "C.hpp"

#include "Base.hpp"
#include "iostream"

C::C(){
    // std::cout << "C 생성" << std::endl;
};

C::C(C const& other) {
    (void)other;
    // std::cout << "C 생성" << std::endl;
};

C::~C(){
    // std::cout << "C 소멸" << std::endl;
};

//operator
C& C::operator=(C const& other) {
    (void)other;
    return *this;
};