#include <exception>
// #include <fstream>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main() {
    // Tree
    {
        Form* form = new ShrubberyCreationForm("tree");
        Bureaucrat b_sign("b_sign", 145);
        Bureaucrat b_exec("b_exec", 138);  // should be high

        b_sign.signForm(*form);           // success
        std::cout << *form << std::endl;  // approved
        b_exec.executeForm(*form);        // fail
        b_exec.increaseGrade();           // b_exec's grade is 137 now
        b_exec.executeForm(*form);        // success

        delete form;
    }
    // Robot
    // {
    //     Form* form = new RobotomyRequestForm("robot");
    //     Bureaucrat b_sign("b_sign", 72);
    //     Bureaucrat b_exec("b_exec", 46);  // should be high

    //     b_sign.signForm(*form);           // success
    //     std::cout << *form << std::endl;  // approved
    //     b_exec.executeForm(*form);        // fail
    //     b_exec.increaseGrade();           // b_exec's grade is 137 now
    //     b_exec.executeForm(*form);        // success

    //     delete form;
    // }
    // Pardon
    // {
    //     Form* form = new PresidentialPardonForm("schofield");
    //     Bureaucrat b_sign("b_sign", 25);
    //     Bureaucrat b_exec("b_exec", 21);  // should be high

    //     b_sign.signForm(*form);           // success
    //     std::cout << *form << std::endl;  // approved
    //     b_exec.executeForm(*form);        // fail
    //     b_exec.increaseGrade();           // b_exec's grade is 137 now
    //     b_exec.executeForm(*form);        // success

    //     delete form;
    // }
    // undefined
    // {
    //     Form* form = new RobotomyRequestForm();
    //     std::cout << *form << std::endl;
    //     delete form;
    // }
}