#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define LOWEST_GRADE 150
#define HIGHEST_GRADE 1
#define DEFAULT_GRADE 150

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat {
   private:
    std::string const name_;
    int grade_;

   public:
    Bureaucrat();
    Bureaucrat(int grade);
    Bureaucrat(std::string name);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const& other);
    virtual ~Bureaucrat();

    //getter
    std::string const& getName() const;
    int const& getGrade() const;

    //setter
    void increaseGrade();
    void decreaseGrade();

    //sign
    void signForm();

    //verify
    int verifyGrade(int grade) const;

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

    Bureaucrat& operator=(Bureaucrat const& other);
};
std::ostream& operator<<(std::ostream& ostream, Bureaucrat const& target);

#endif
