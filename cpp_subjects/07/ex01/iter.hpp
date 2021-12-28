#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename ANY>
void iter(ANY arr[], unsigned int len, void (*func)(ANY const&)) {
    for (unsigned int i = 0; i < len; i++) {
        (*func)(arr[i]);
    }
}
// for main.cpp
template <typename ANY>
void print(ANY const& element) {
    std::cout << "[" << element << "] ";
}
// for main2.cpp
// template <typename T>
// void print(T const& x) {
//     std::cout << x << std::endl;
//     return;
// }

#endif