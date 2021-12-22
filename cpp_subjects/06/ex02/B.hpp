#ifndef B_HPP
#define B_HPP
#include "Base.hpp"

class B : public Base {
   public:
    B();
    B(B const& other);
    ~B();

    //operator
    B& operator=(B const& other);
};

#endif