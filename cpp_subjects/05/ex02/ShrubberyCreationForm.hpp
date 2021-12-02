
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

#include <exception>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    std::string const target_;
    // static const int grade2Sign_;
    // static const int grade2exec_;

   public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const& name, int grade2sign, int grade2exec);
    ShrubberyCreationForm(ShrubberyCreationForm const& other);
    ~ShrubberyCreationForm();

    //getter
    std::string getTarget() const;

    //operator
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& other);
};
std::ostream& operator<<(std::ostream& ostream, ShrubberyCreationForm const& target);

#endif