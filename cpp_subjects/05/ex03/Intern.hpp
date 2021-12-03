#ifndef INTERN_HPP
#define INTERN_HPP

#include <exception>
#include <iostream>
#include <string>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
   public:
    Intern();
    Intern(Intern const& other);
    ~Intern();

    // make
    Form* makeForm(std::string const& type, std::string const& target) const;

    // exeception class
    class UndefinedTypeException : public std::exception {
       public:
        UndefinedTypeException();
        virtual const char* what() const throw();
    };

    Intern& operator=(Intern const& other);
};

#endif
