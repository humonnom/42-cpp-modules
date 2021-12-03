
#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form(), target_("undefined") {
    std::cout << "[Form - S] 생성자" << std::endl;
};
ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("ShrubberyCreationForm", 145, 137), target_(target) {
    std::cout << "[Form - S] 생성자" << std::endl;
};
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other) : Form(other.getName(), 145, 137), target_(other.getTarget()) {
    std::cout << "[Form - S] 생성자" << std::endl;
};
ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "[Form - S] 소멸자" << std::endl;
};
//getter
std::string ShrubberyCreationForm::getTarget() const {
    return target_;
};

void ShrubberyCreationForm::execute(Bureaucrat const& b) const {
    executable(b);
    std::ofstream out;
    out.open((target_ + "_shrubbery").c_str());
    out << ASCIITREE;
    out.close();
};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    return (*(dynamic_cast<ShrubberyCreationForm*>(&(Form::operator=(other)))));
}