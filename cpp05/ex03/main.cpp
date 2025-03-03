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

        std::cout << std::endl;
        
        Shrubbery = random.makeForm("Shrubbery", "miam");
        if(Shrubbery){
            std::cout << *Shrubbery << std::endl;
            max.signForm(*Shrubbery);
            max.executeForm(*Shrubbery);
            delete Shrubbery;
        }

        std::cout << std::endl;
        AForm *Robotomy;
        Robotomy = random.makeForm("Robotomy", "yes");
        if(Robotomy){
            std::cout << *Robotomy << std::endl;
            max.signForm(*Robotomy);
            max.executeForm(*Robotomy);
            delete Robotomy;
        }
        std::cout << std::endl;
        AForm* Presidential;
        Presidential = random.makeForm("Presidential", "pardon");
        if(Presidential){
            std::cout << *Presidential << std::endl;
            max.signForm(*Presidential);
            max.executeForm(*Presidential);
            delete Presidential;
        }
        std::cout << std::endl;
        AForm* notGood;
        notGood = random.makeForm("notGood", "error");
        if(!notGood){
            std::cout << "error it's an unknow form" << std::endl;
        }
    } catch(const std::exception &e){
        std::cout << "Execption caught " << e.what() << std::endl;
    }
}