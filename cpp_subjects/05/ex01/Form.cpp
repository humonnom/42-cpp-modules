
#include "Form.hpp"

#include <exception>
#include <iostream>
#include <string>

Form::Form() : name_("undefined"), grade2sign_(1), grade2exec_(1), approved_(false) {
    std::cout << "[Form] 생성자" << std::endl;
};
Form::Form(std::string const& name, int grade2sign, int grade2exec) : name_(name), grade2sign_(grade2sign), grade2exec_(grade2exec), approved_(false) {
    std::cout << "[Form] 생성자" << std::endl;
};
Form::Form(Form const& other) : name_("undefined"), grade2sign_(1), grade2exec(1) {
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
int Form::getApproved() const {
    return approved_;
};
int Form::getGrade2Sign() const {
    return grade2sign_;
};
int Form::getGrade2Exec() const {
    return grade2exec_;
};
//setter
void Form::setApproved(bool value) {
    approved_ = value;
};
//operator
Form& Form::operator=(Form const& other) {
    if (this != &other) {
        approved_ = other.getApproved();
    }
    return *this;
};

std::ostream& operator<<(std::ostream& ostream, Form const& target);
