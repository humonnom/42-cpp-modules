#include <exception>
#include <iostream>
#include <string>

#define TEST_NUM 4

#include "Bureaucrat.hpp"

int main() {
    try {
        // valid range
        {
            std::cout << "* valid range test" << std::endl;
            std::string name_list[TEST_NUM] = {"Picard", "Janeway", "Q", "Data"};
            int grade_list[TEST_NUM] = {1, 150, 42, 142};
            for (int i = 0; i < TEST_NUM; i++) {
                Bureaucrat test(name_list[i], grade_list[i]);
                std::cout << test << std::endl;
            }
        }

        // name only
        {
            std::cout << "* create without range" << std::endl;
            Bureaucrat test("name_only");
            std::cout << test << std::endl;
        }
        // grade only
        {
            std::cout << "* create without range" << std::endl;
            Bureaucrat test(1);
            std::cout << test << std::endl;
        }
        //invalid range
        {
            std::cout << "* invalid range test" << std::endl;
        }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
};