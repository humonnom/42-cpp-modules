#include "Intern.hpp"

#include <exception>
#include <iostream>
#include <string>

#include "Form.hpp"

Intern::Intern() {
    std::cout << "[Intern] 생성자" << std::endl;
};

Intern::Intern(Intern const& other) {
    std::cout << "[Intern] 복사생성자" << std::endl;
    *this = other;
};

Intern::~Intern() {
    std::cout << "[Intern] 소멸자" << std::endl;
};

Form* Intern::makeForm(std::string const& type, std::string const& target) const {
    try {
        Form* form = NULL;
        (type == "PresidentialPardonForm") && (form = new PresidentialPardonForm(target));
        (type == "RobotomyRequestForm") && (form = new RobotomyRequestForm(target));
        (type == "ShrubberyCreationForm") && (form = new ShrubberyCreationForm(target));
        if (form == NULL) throw UndefinedTypeException();
        return form;
    } catch (std::exception& e) {
        std::cerr << "Intern cannot create " << target << "(" << type << ")"
                  << " because " << e.what() << std::endl;
        return (NULL);
    }
};

//exception class
Intern::UndefinedTypeException::UndefinedTypeException() : exception(){};
const char* Intern::UndefinedTypeException::what() const throw() {
    return "Intern: UNDEFINED TYPE ERROR";
};

//operator
Intern& Intern::operator=(Intern const& other) {
    if (this != &other) {
    }
    return *this;
};