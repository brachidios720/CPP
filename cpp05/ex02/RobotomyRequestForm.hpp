#pragma once 

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

            public :

                    RobotomyRequestForm();
                    RobotomyRequestForm(const std::string &target);
                    RobotomyRequestForm(const RobotomyRequestForm &cpy);
                    RobotomyRequestForm&operator=(const RobotomyRequestForm &other);
                    const std::string getTarget() const;
                    virtual void execute(Bureaucrat const &executor) const;
                    virtual ~RobotomyRequestForm();



            private :
                    std::string _target;

};