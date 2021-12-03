
#ifndef SHRUBBERY_CREATEON_FORM_HPP
#define SHRUBBERY_CREATEON_FORM_HPP
#define ASCIITREE \
    "                          +                        \n\
                          #                         \n\
                         ###                        \n\
                 '#:. .:##'##:. .:#'                \n\
                   '####'###'####'                  \n\
             '#:.    .:#'###'#:.    .:#'            \n\
                '#########'#########'               \n\
             '#:.  '####'###'####'  .:#'            \n\
              '#######''##'##''#######'             \n\
                .'##'#####'#####'##'                \n\
        '#:. ...  .:##'###'###'##:.  ... .:#'       \n\
            '#######'##'#####'##'#######'           \n\
               '#####''#######''#####'              \n\
                  '      000      '                 \n\
                         000                        \n\
.. .. ..................O000O........................ ...... ..."

#include <fstream>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    std::string const target_;

   public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const& target);
    ShrubberyCreationForm(ShrubberyCreationForm const& other);
    ~ShrubberyCreationForm();

    //getter
    std::string getTarget() const;

    //execute overload
    virtual void execute(Bureaucrat const& b) const;

    //oprator
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
};

#endif