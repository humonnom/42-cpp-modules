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
template <typename ANY>
void print(ANY const& element) {
    std::cout << "[" << element << "] ";
}

#endif