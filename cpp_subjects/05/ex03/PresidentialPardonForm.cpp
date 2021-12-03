
#include "PresidentialPardonForm.hpp"

#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form(), target_("undefined") {
    std::cout << "[Form - R] 생성자" << std::endl;
};
PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form("PresidentialPardonForm", 25, 20), target_(target) {
    std::cout << "[Form - R] 생성자" << std::endl;
};
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other) : Form(other.getName(), 25, 20), target_(other.getTarget()) {
    std::cout << "[Form - R] 생성자" << std::endl;
};
PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "[Form - R] 소멸자" << std::endl;
};
//getter
std::string PresidentialPardonForm::getTarget() const {
    return target_;
};

void PresidentialPardonForm::execute(Bureaucrat const& b) const {
    executable(b);
    std::cout << target_ << " has been pardoned by Zafod Beeblebrox" << std::endl;
};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    return (*(dynamic_cast<PresidentialPardonForm*>(&(Form::operator=(other)))));
}