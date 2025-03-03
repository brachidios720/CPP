#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class AForm;

class Intern {



    public :
            Intern();
            Intern(const Intern &cpy);
            Intern&operator=(const Intern &other);
            AForm*  makeForm(const std::string &name, const std::string &target) const;
            ~Intern();



    private : 


};