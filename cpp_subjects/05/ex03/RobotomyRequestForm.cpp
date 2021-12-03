
#include "RobotomyRequestForm.hpp"

#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form(), target_("undefined") {
    std::cout << "[Form - R] 생성자" << std::endl;
};
RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form("RobotomyRequestForm", 72, 45), target_(target) {
    std::cout << "[Form - R] 생성자" << std::endl;
};
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other) : Form(other.getName(), 72, 45), target_(other.getTarget()) {
    std::cout << "[Form - R] 생성자" << std::endl;
};
RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "[Form - R] 소멸자" << std::endl;
};
//getter
std::string RobotomyRequestForm::getTarget() const {
    return target_;
};

void RobotomyRequestForm::execute(Bureaucrat const& b) const {
    executable(b);
    std::cout << "drrrrrr...dr!...drrr......" << std::endl;
    if (time(0) % 2)
        std::cout << target_ << " is robotomized successfully." << std::endl;
    else
        std::cout << target_ << " robotomizing failure." << std::endl;
};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    return (*(dynamic_cast<RobotomyRequestForm*>(&(Form::operator=(other)))));
}