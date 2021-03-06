#include <exception>
#include <iostream>
#include <string>

#define TEST_NUM 4

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main() {
    try {
        std::cout << "----------- create -----------" << std::endl;
        Bureaucrat picard("picard", 42);  // high
        Bureaucrat data("data", 142);     // low

        Form change_coffee_bean("change_coffee_bean", 42, 4);  //valid
        Form change_coffee_bean2(change_coffee_bean);          //valid
        Form change_toilet_paper;                              // should make empty form
        picard.signForm(change_coffee_bean);                   //should work
        data.signForm(change_coffee_bean);                     //should not work

        std::cout
            << "----------- play -----------" << std::endl;
        std::cout << change_coffee_bean << std::endl;   // changed
        std::cout << change_coffee_bean2 << std::endl;  // not changed
        std::cout << change_toilet_paper << std::endl;  // empty form

        std::cout << "----------- delete -----------" << std::endl;

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
};