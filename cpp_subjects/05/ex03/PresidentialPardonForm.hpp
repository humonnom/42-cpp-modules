
#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <fstream>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form {
    std::string const target_;

   public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string const& target);
    PresidentialPardonForm(PresidentialPardonForm const& other);
    ~PresidentialPardonForm();

    //getter
    std::string getTarget() const;

    //execute overload
    virtual void execute(Bureaucrat const& b) const;

    //oprator
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
};

#endif