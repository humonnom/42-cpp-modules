#ifndef FORM_HPP
#define FORM_HPP

#include <exception>
#include <iostream>
#include <string>

class Form {
    std::string const name_;
    int approved_;
    int const grade2sign_;
    int const grade2exec_;

   public:
    Form();
    Form(std::string const& name, int grade2sign, int grade2exec);
    Form(Form const& other);
    ~Form();

    //getter
    std::string getName() const;
    int getApproved() const;
    int getGrade2Sign() const;
    int getGrade2Exec() const;

    //setter
    void setApproved(bool value);

    //operator
    Form& operator=(Form const& other);
} std::ostream& operator<<(std::ostream& ostream, Form const& target);

#endif