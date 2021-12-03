#include "Bureaucrat.hpp"

#include <exception>
#include <iostream>
#include <string>

#include "Form.hpp"

Bureaucrat::Bureaucrat() : name_("undefined"), grade_(DEFAULT_GRADE) {
    std::cout << "[Bureaucrat] 생성자" << std::endl;
};

Bureaucrat::Bureaucrat(int grade) : name_("undefined"), grade_(verifyGrade(grade)) {
    std::cout << "[Bureaucrat] 생성자" << std::endl;
};
Bureaucrat::Bureaucrat(std::string name) : name_(name), grade_(DEFAULT_GRADE) {
    std::cout << "[Bureaucrat] 생성자" << std::endl;
};
Bureaucrat::Bureaucrat(std::string name, int grade) : name_(name), grade_(verifyGrade(grade)) {
    std::cout << "[Bureaucrat] 생성자" << std::endl;
};

Bureaucrat::Bureaucrat(Bureaucrat const& other) : name_(other.getName()) {
    std::cout << "[Bureaucrat] 복사생성자" << std::endl;
    *this = other;
};

Bureaucrat::~Bureaucrat() {
    std::cout << "[Bureaucrat] 소멸자" << std::endl;
};

//getter
std::string const& Bureaucrat::getName() const {
    return name_;
};

int const& Bureaucrat::getGrade() const {
    return grade_;
};

//setter
void Bureaucrat::increaseGrade() {
    if (grade_ != HIGHEST_GRADE) {
        grade_--;
    }
};
void Bureaucrat::decreaseGrade() {
    if (grade_ != LOWEST_GRADE) {
        grade_++;
    }
};

// sign
bool Bureaucrat::signForm(Form& form) const {
    try {
        form.beSigned(*this);
        std::cout << name_ << " signs "
                  << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << name_ << " cannot sign "
                  << form.getName() << " because " << e.what() << std::endl;
        return false;
    }
    return true;
};
// exec
bool Bureaucrat::executeForm(Form const& form) const {
    try {
        form.execute(*this);
        std::cout
            << name_ << " executes "
            << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cerr << name_ << " cannot execute "
                  << form.getName() << " because " << e.what() << std::endl;
        return false;
    }
    return true;
};

// verify
int Bureaucrat::verifyGrade(int grade) const {
    if (grade < HIGHEST_GRADE) throw GradeTooHighException();
    if (grade > LOWEST_GRADE) throw GradeTooLowException();
    return grade;
};

//exception classes
Bureaucrat::GradeTooHighException::GradeTooHighException() : exception(){};
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Bureaucrat: TOO HIGH GRADE";
};
Bureaucrat::GradeTooLowException::GradeTooLowException() : exception(){};
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat: TOO LOW GRADE";
};

//operator
Bureaucrat& Bureaucrat::operator=(Bureaucrat const& other) {
    if (this != &other) {
        grade_ = other.getGrade();
    }
    return *this;
};

std::ostream& operator<<(std::ostream& ostream, Bureaucrat const& target) {
    ostream << target.getName() << ", bureaucrat grade " << target.getGrade();
    return ostream;
}