
#include "Form.hpp"

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

Form::Form() : name_("undefined"), grade2sign_(1), grade2exec_(1), approved_(false) {
    std::cout << "[Form] 생성자" << std::endl;
};
Form::Form(std::string const& name, int grade2sign, int grade2exec) : name_(name), grade2sign_(verifyGrade(grade2sign)), grade2exec_(verifyGrade(grade2exec)), approved_(false) {
    std::cout << "[Form] 생성자" << std::endl;
};
Form::Form(Form const& other) : name_(other.getName()), grade2sign_(verifyGrade(other.getGrade2Sign())), grade2exec_(verifyGrade(other.getGrade2Exec())) {
    std::cout << "[Form] 복사생성자" << std::endl;
    *this = other;
};
Form::~Form() {
    std::cout << "[Form] 소멸자" << std::endl;
};
//getter
std::string Form::getName() const {
    return name_;
};
bool Form::getApproved() const {
    return approved_;
};
int Form::getGrade2Sign() const {
    return grade2sign_;
};
int Form::getGrade2Exec() const {
    return grade2exec_;
};

//setter
void Form::beSigned(Bureaucrat const& b) {
    b.signForm(*this);
    if (approved_ == false && b.getGrade() <= grade2sign_) {
        approved_ = true;
    }
};

// verify
int Form::verifyGrade(int grade) const {
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
Form::GradeTooHighException::GradeTooHighException(int wrongGrade) : exception(), wrongGrade_(wrongGrade){};
const char* Form::GradeTooHighException::what() const throw() {
    std::cout << wrongGrade_ << std::endl;
    return "Too High Grade";
};
//low
Form::GradeTooLowException::GradeTooLowException(int wrongGrade) : exception(), wrongGrade_(wrongGrade){};
const char* Form::GradeTooLowException::what() const throw() {
    std::cout << wrongGrade_ << std::endl;
    return "Too Low Grade";
};

//operator
Form& Form::operator=(Form const& other) {
    if (this != &other) {
        approved_ = other.getApproved();
    }
    return *this;
};

std::ostream& operator<<(std::ostream& ostream, Form const& target) {
    ostream << target.getName() << ", grade to sign(" << target.getGrade2Sign()
            << "), grade to exec(" << target.getGrade2Exec()
            << "), approved(" << std::boolalpha << target.getApproved() << ")";
    return ostream;
};
