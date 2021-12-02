#ifndef FORM_HPP
#define FORM_HPP
#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Form {
    std::string const name_;
    int const grade2sign_;
    int const grade2exec_;
    int approved_;

   public:
    Form();
    Form(std::string const& name, int grade2sign, int grade2exec);
    Form(Form const& other);
    virtual ~Form();

    //getter
    std::string getName() const;
    int getGrade2Sign() const;
    int getGrade2Exec() const;
    bool getApproved() const;

    //setter
    void beSigned(Bureaucrat const& b);
    virtual void execute(Bureaucrat const& b) = 0;

    //verify
    int verifyGrade(int grade) const;

    //exception
    class GradeTooHighException : public std::exception {
        int wrongGrade_;

       public:
        GradeTooHighException(int wrongGrade);
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        int wrongGrade_;

       public:
        GradeTooLowException(int wrongGrade);
        virtual const char* what() const throw();
    };

    //operator
    Form& operator=(Form const& other);
};
std::ostream& operator<<(std::ostream& ostream, Form const& target);

#endif