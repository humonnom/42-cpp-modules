#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename ANY>
void swap(ANY &a, ANY &b) {
    ANY tmp;
    tmp = a;
    a = b;
    b = tmp;
}

#endif