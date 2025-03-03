#pragma once 

#include "AForm.hpp"


#define ASCII_ART \
"    _______  \n" \
"   /      /,  \n" \
"  /      //   \n" \
" /______//    \n" \
"(______(/     \n" \
       

class ShrubberyCreationForm : public AForm {

            public :

                    ShrubberyCreationForm();
                    ShrubberyCreationForm(const std::string &target);
                    ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
                    ShrubberyCreationForm&operator=(const ShrubberyCreationForm &other);
                    const std::string getTarget() const;
                    virtual void execute(Bureaucrat const &executor) const;
                    virtual ~ShrubberyCreationForm();



            private :
                    std::string _target;

};