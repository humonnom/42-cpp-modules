
#include "ShrubberyCreationForm.hpp"

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {
    std::cout << "생성자 (Form - S)" << std::endl;
};
ShrubberyCreationForm::ShrubberyCreationForm(std::string const& name, int grade2sign, int grade2exec) : Form(name, grade2sign, grade2exec) {
    std::cout << "생성자 (Form - S)" << std::endl;
};
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other) : Form(other) {
    std::cout << "생성자 (Form - S)" << std::endl;
    *this = other;
};
ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "소멸자 (Form - S)" << std::endl;
};
//getter
std::string ShrubberyCreationForm::getTarget() const {
    return target_;
};

void Form::execute(Bureaucrat const& b) {
    std::cout << "plant tree" << std::endl;
};

//operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& other) {
    if (this != &other) {
        target_ = other.getTarget();
    }
    return *this;
};
std::ostream& operator<<(std::ostream& ostream, ShrubberyCreationForm const& target) {
    ostream << target;
    //TODO: 어떻게 나오나 체크
    return ostream;
};
