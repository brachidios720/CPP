#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <unistd.h>


int main(){
    try{
        std::cout << "================ try Shruberry ================" << std::endl;
        Bureaucrat ok("ok", 140);
        ShrubberyCreationForm Shruberry("cookie");

        std::cout << ok << std::endl;
        std::cout << Shruberry << std::endl;

        ok.signForm(Shruberry);
        ok.executeForm(Shruberry);
        std::cout << Shruberry << std::endl;

        Bureaucrat moi("moi", 130);
        std::cout << moi << std::endl;
        moi.executeForm(Shruberry);
        
        std::cout << std::endl;

        std::cout << "=============== try RoBotomy ===================" << std::endl;

        Bureaucrat Alexis("Alexis", 50);
        RobotomyRequestForm Robotmy("robot");

        std::cout << Alexis << std::endl;
        std::cout << Robotmy << std::endl;

        Alexis.signForm(Robotmy);
        Alexis.executeForm(Robotmy);

        std::cout << std::endl;

        std::cout << "============== try Presidential ================" << std::endl;

        Bureaucrat Charlie("Charlie", 1);
        PresidentialPardonForm President("President");

        std::cout << Charlie << std::endl;
        std::cout << President << std::endl;

        Charlie.signForm(President);
        Charlie.executeForm(President);
    } catch(const std::exception &e){
        std::cerr << "execption caught : " << e.what() << std::endl;
    }

    std::cout << std::endl;
    try{
        std::cout << "================= try with an execption ===============" << std::endl;
        Bureaucrat nullos("nullos", 150);
        ShrubberyCreationForm Shruberry("cactus");

        std::cout << nullos << std::endl;
        std::cout << Shruberry << std::endl;

        nullos.executeForm(Shruberry);
        nullos.signForm(Shruberry);

        Bureaucrat mecChaud("mecChaud", 10);
        mecChaud.signForm(Shruberry);
        mecChaud.executeForm(Shruberry);
    
    } catch(const std::exception &e){
        std::cerr << "execption caught : " << e.what() << std::endl; 
    }
}