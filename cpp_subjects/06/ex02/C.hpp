#ifndef C_HPP
#define C_HPP
#include "Base.hpp"

class C : public Base {
   public:
    C();
    C(C const& other);
    ~C();

    //operator
    C& operator=(C const& other);
};

#endif