#ifndef A_HPP
#define A_HPP
#include "Base.hpp"

class A : public Base {
   public:
    A();
    A(A const& other);
    ~A();

    //operator
    A& operator=(A const& other);
};

#endif