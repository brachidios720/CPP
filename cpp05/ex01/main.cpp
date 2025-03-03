#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <unistd.h>


int main(){
    try{
        std::cout << "============ valide Form creation ==============" << std::endl;
        Form validForm("valid", 50, 25);
        std::cout << validForm << std::endl;

        Form FormToHigh("invalide High", 0, 50);
    } catch (const std::exception &e){
        std::cerr << "Execption caught : " << e.what() << std::endl;
    }
    try{
        Form FormToLow("invalide low", 0, 151);
    } catch (const std::exception &e){
        std::cerr << "Execption caught : " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try{
        std::cout << "============ valide Form creation ==============" << std::endl;
        Bureaucrat clara("clara", 55);
        Form validForm("valid", 50, 25);

        std::cout << clara << std::endl;
        std::cout << validForm << std::endl;

        clara.signForm(validForm);
        std::cout << validForm << std::endl;

        Bureaucrat alexis("alexis", 45);
        alexis.signForm(validForm);
        std::cout << validForm << std::endl;
        
    } catch (const std::exception &e){
        std::cerr << "Execption caught : " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try{
        std::cout << "============ chaeck valide Form limite creation ==============" << std::endl;
        Bureaucrat eve("eve", 1);
        Form validForm("valid", 1 , 1);

        std::cout << eve << std::endl;
        std::cout << validForm << std::endl;

        eve.signForm(validForm);
        std::cout << validForm << std::endl;

        Bureaucrat hugo("hugo", 150);
        hugo.signForm(validForm);
    } catch (const std::exception &e){
        std::cerr << "Execption caught : " << e.what() << std::endl;
    }
}