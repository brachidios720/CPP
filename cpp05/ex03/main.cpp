#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <unistd.h>


int main(){
    try{
        std::cout << "================ try Shruberry ================" << std::endl;
        Bureaucrat max("max", 1);
        Intern random;
        AForm* Shrubbery;

        Shrubbery = random.makeForm("Shubbery", "miam");
        if(Shrubbery){
            std::cout << *Shrubbery << std::endl;
            max.signForm(*Shrubbery);
            max.executeForm(*Shrubbery);
            delete Shrubbery;
        }

        AForm *Robotomy;
        Robotomy = random.makeForm("Robotomy", "yes");
        if(Robotomy){
            std::cout << *Robotomy << std::endl;
            max.signForm(*Robotomy);
            max.executeForm(*Robotomy);
            delete Robotomy;
        }
        AForm* Presidential;
        Presidential = random.makeForm("Presidential", "pardon");
        if(Presidential){
            std::cout << *Presidential << std::endl;
            max.signForm(*Presidential);
            max.executeForm(*Presidential);
            delete Presidential;
        }
        AForm* notGood;

        notGood = random.makeForm("notGood", "error");
        if(!notGood){
            std::cout << " error it's an unknow form" << std::endl;
        }
    } catch(const std::exception &e){
        std::cout << "Execption caught " << e.what() << std::endl;
    }
}