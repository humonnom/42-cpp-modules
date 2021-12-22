#include <time.h>

#include <exception>
#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base* generate(void) {
    Base* p = NULL;
    srand(time(NULL));
    int lots = rand() % 3;
    (lots == 0) && (p = new A);
    (lots == 1) && (p = new B);
    (p == NULL) && (p = new C);
    return p;
};

void identify(Base* p) {
    std::cout << "identify by ptr: ";
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "UNKNOWN" << std::endl;
};

void identify(Base& p) {
    std::cout << "identify by ref: ";
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (...) {
    }
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch (...) {
    }
    try {
        C c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (...) {
    }
};

int main() {
    Base* p = generate();
    identify(p);
    identify(*p);
    return 0;
}