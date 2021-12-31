#include <iostream>

#include "iter.hpp"

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    float holiydays[] = {12.25, 1.1, 12.24};
    char christmas[] = {'c', 'h', 'r', 'i', 's', 't', 'm', 'a', 's'};
    std::string names[] = {
        "Jean - Luc Picard",
        "William T.Riker",
        "Data",
        "Geordi La Forge",
        "Beverly Crusher",
        "Deanna Troi",
        "Worf",
        "Q",
        "Miles O'brien",
        "Wesley Crusher",
        "Tasha Yar",
        "Worf",
        "Katherine Pulaski",
        "Guinan",
        "Lwaxana Troi",
        "Ro Laren",
    };
    std::string empty[] = {};
    std::cout << "<< int >>" << std::endl;
    iter(nums, sizeof(nums) / sizeof(nums[0]), print);
    std::cout << std::endl;
    std::cout << "<< float >>" << std::endl;
    iter(holiydays, sizeof(holiydays) / sizeof(holiydays[0]), print);
    std::cout << std::endl;
    std::cout << "<< char >>" << std::endl;
    iter(christmas, sizeof(christmas) / sizeof(christmas[0]), print);
    std::cout << std::endl;
    std::cout << "<< string >>" << std::endl;
    iter(names, sizeof(names) / sizeof(names[0]), print);
    std::cout << std::endl;

    std::cout << "<< string(empty) >>" << std::endl;
    iter(empty, sizeof(empty) / sizeof(empty[0]), print);
    std::cout << std::endl;
    return 0;
}