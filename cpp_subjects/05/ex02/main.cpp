#include <exception>
// #include <fstream>
#include <iostream>
#include <string>

#define TEST_NUM 4

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main() {
    try {
        std::cout << "----------- create -----------" << std::endl;

        std::cout
            << "----------- play -----------" << std::endl;

        std::cout << "----------- delete -----------" << std::endl;

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
};