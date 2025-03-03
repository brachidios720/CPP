#pragma once 

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {

            public :

                    PresidentialPardonForm();
                    PresidentialPardonForm(const std::string &target);
                    PresidentialPardonForm(const PresidentialPardonForm &cpy);
                    PresidentialPardonForm&operator=(const PresidentialPardonForm &other);
                    const std::string getTarget() const;
                    virtual void execute(Bureaucrat const &executor) const;
                    virtual ~PresidentialPardonForm();



            private :
                    std::string _target;

};