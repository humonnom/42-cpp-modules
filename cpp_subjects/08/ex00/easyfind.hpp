#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <set>
#include <vector>

template <typename T>
typename T::iterator easyfind(T& input, int const& value) {
    return (std::find(input.begin(), input.end(), value));
}

template <typename T>
void test(T& input, int value) {
    typename T::iterator it = easyfind(input, value);

    if (it == input.end())
        std::cout << value << " not found" << std::endl;
    else
        std::cout << value << " found => " << std::distance(input.begin(), it) << std::endl;
}
#endif