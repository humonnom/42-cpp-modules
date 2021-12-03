#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    Intern *wesley = new Intern();
    // invalid type case
    // {
    //     Form *form = wesley->makeForm("undefined", "fake plastic tree");  // invalid case
    //     if (form == NULL) return EXIT_FAILURE;
    //     std::cout << *form << std::endl;
    // }
    {
        Bureaucrat picard("picard", 1);
        Bureaucrat o_brien("o'brien", 150);
        Bureaucrat cadet("cadet", 42);
        Form *form[3];

        form[0] = wesley->makeForm("PresidentialPardonForm", "prison_break");
        form[1] = wesley->makeForm("RobotomyRequestForm", "seven_of_nine");
        form[2] = wesley->makeForm("ShrubberyCreationForm", "fake_plastic_tree");

        for (int i = 0; i < 3; i++) {
            picard.signForm(*form[i]);
            // o_brien.signForm(*form[i]);
            std::cout << *form[i] << std::endl;
            cadet.executeForm(*form[i]);
        }
        for (int i = 0; i < 3; i++) {
            delete form[i];
        }
    }
    delete wesley;
}