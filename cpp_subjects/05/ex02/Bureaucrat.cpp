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

// do something
void Bureaucrat::signForm(Form const& form) const {
    if (form.getApproved() == true) {
        std::cout << name_ << " cannot sign "
                  << form.getName() << " because the form has already been approved." << std::endl;
    } else if (form.getGrade2Sign() >= grade_) {
        std::cout << name_ << " signs "
                  << form.getName() << std::endl;
    } else {
        std::cout << name_ << " cannot sign "
                  << form.getName() << " because of the grade problem" << std::endl;
    }
};
void Bureaucrat::executeForm(Form const& form) const {
    if (form.getApproved() == false) {
        std::cout << name_ << " cannot execute "
                  << form.getName() << " because this form need to be approved first." << std::endl;
    } else if (form.getGrade2Exec() >= grade_) {
        std::cout << name_ << " executes "
                  << form.getName() << std::endl;
    } else {
        std::cout << name_ << " cannot execute "
                  << form.getName() << " because of the grade problem" << std::endl;
    }
};

// verify
int Bureaucrat::verifyGrade(int grade) const {
    try {
        if (grade < HIGHEST_GRADE) throw GradeTooHighException(grade);
        if (grade > LOWEST_GRADE) throw GradeTooLowException(grade);
    } catch (std::exception& e) {
        throw;
    }
    return grade;
};

//exception classes
//high
Bureaucrat::GradeTooHighException::GradeTooHighException(int wrongGrade) : exception(), wrongGrade_(wrongGrade){};
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    std::cout << wrongGrade_ << std::endl;
    return "Too High Grade";
};
//low
Bureaucrat::GradeTooLowException::GradeTooLowException(int wrongGrade) : exception(), wrongGrade_(wrongGrade){};
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    std::cout << wrongGrade_ << std::endl;
    return "Too Low Grade";
};

//operator
Bureaucrat& Bureaucrat::operator=(Bureaucrat const& other) {
    // std::cout << "[Bureaucrat] 대입연산자" << std::endl;
    if (this != &other) {
        grade_ = other.getGrade();
    }
    return *this;
};

std::ostream& operator<<(std::ostream& ostream, Bureaucrat const& target) {
    // std::cout << "[Bureaucrat] 출력스트림연산자" << std::endl;
    ostream << target.getName() << ", bureaucrat grade " << target.getGrade();
    return ostream;
}