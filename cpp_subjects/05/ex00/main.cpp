#include <exception>
#include <iostream>
#include <string>

#define TEST_NUM 4

#include "Bureaucrat.hpp"

int main() {
    try {
        // std::cout << "----------- test -----------" << std::endl;
        // // valid range
        // {
        //     std::cout << "* valid range test" << std::endl;
        //     std::string name_list[TEST_NUM] = {"Picard", "Janeway", "Q", "Data"};
        //     int grade_list[TEST_NUM] = {1, 150, 42, 142};
        //     for (int i = 0; i < TEST_NUM; i++) {
        //         Bureaucrat test(name_list[i], grade_list[i]);
        //         std::cout << test << std::endl;
        //     }
        // }

        // // name only
        // {
        //     std::cout << "* create without range" << std::endl;
        //     Bureaucrat test("name_only");
        //     std::cout << test << std::endl;
        // }
        // // grade only
        // {
        //     std::cout << "* create without range" << std::endl;
        //     Bureaucrat test(111);
        //     std::cout << test << std::endl;
        // }
        //invalid range
        {
            std::cout << "* invalid range test" << std::endl;
            Bureaucrat high(0);
            std::cout << high << std::endl;

            // Bureaucrat low(151);
            // std::cout << low << std::endl;
        }
        // {
        //     std::cout << "----------- create -----------" << std::endl;
        //     Bureaucrat picard("picard", 42);
        //     Bureaucrat janeway("janeway", 42);

        //     std::cout << "----------- play -----------" << std::endl;
        //     std::cout << picard << std::endl;
        //     std::cout << janeway << std::endl;
        //     picard.decreaseGrade();
        //     picard.decreaseGrade();
        //     picard.decreaseGrade();
        //     picard.decreaseGrade();
        //     janeway.increaseGrade();
        //     janeway.increaseGrade();
        //     janeway.increaseGrade();
        //     janeway.increaseGrade();
        //     std::cout << picard << std::endl;
        //     std::cout << janeway << std::endl;
        //     std::cout << "----------- delete -----------" << std::endl;
        // }

    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
};