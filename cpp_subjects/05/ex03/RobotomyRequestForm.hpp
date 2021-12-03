
#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include <fstream>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {
    std::string const target_;

   public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string const& target);
    RobotomyRequestForm(RobotomyRequestForm const& other);
    ~RobotomyRequestForm();

    //getter
    std::string getTarget() const;

    //execute overload
    virtual void execute(Bureaucrat const& b) const;

    //oprator
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
};

#endif