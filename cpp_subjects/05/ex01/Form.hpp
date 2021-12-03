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
    ~Form();

    //getter
    std::string getName() const;
    int getGrade2Sign() const;
    int getGrade2Exec() const;
    bool getApproved() const;

    //setter
    void beSigned(Bureaucrat const& b);
    //verify
    int verifyGrade(int grade) const;
    bool approvable(Bureaucrat const& b) const;

    //exception
    //exception - creation
    class GradeTooHighException : public std::exception {
       public:
        GradeTooHighException();
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
       public:
        GradeTooLowException();
        virtual const char* what() const throw();
    };
    //exception - mismatch
    class GradeMismatchException : public std::exception {
       public:
        GradeMismatchException();
        virtual const char* what() const throw();
    };

    //exception - unapproved form
    class UnapprovedException : public std::exception {
       public:
        UnapprovedException();
        virtual const char* what() const throw();
    };
    //exception - already approved form
    class AlreadyApprovedException : public std::exception {
       public:
        AlreadyApprovedException();
        virtual const char* what() const throw();
    };

    //operator
    Form& operator=(Form const& other);
};
std::ostream& operator<<(std::ostream& ostream, Form const& target);

#endif