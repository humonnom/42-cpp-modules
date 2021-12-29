#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <set>
#include <vector>

#include "easyfind.hpp"

int main() {
    std::cout << "--- list ---" << std::endl;
    {
        std::list<int> l;

        l.push_back(42);
        l.push_back(2022);

        test(l, 42);
        test(l, 2022);
        test(l, 2021);
    }
    std::cout << "--- vector ---" << std::endl;
    {
        std::vector<int> v;

        v.push_back(42);
        v.push_back(2022);

        test(v, 42);
        test(v, 2022);
        test(v, 2021);
    }
    std::cout << "--- set ---" << std::endl;
    {
        std::set<int> s;

        s.insert(42);
        s.insert(2022);

        test(s, 42);
        test(s, 2022);
        test(s, 2021);
    }
    std::cout << "--- deque ---" << std::endl;
    {
        std::deque<int> d;

        d.insert(d.end(), 42);
        d.insert(d.end(), 2022);

        test(d, 42);
        test(d, 2022);
        test(d, 2021);
    }
    return 0;
}