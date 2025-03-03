#include "Bureaucrat.hpp"
#include <unistd.h>


int main(){
    try {

        std::cout << "============ valide Bureaucrat creation ==============" << std::endl;
        Bureaucrat bob("bob", 75);
        std::cout << bob.getName() << " has been creat with the grade : " << bob.getGrade() << std::endl;
        Bureaucrat bob2("bob2", 1);
        std::cout << bob2.getName() << " has been creat with the grade : " << bob2.getGrade() << std::endl;

        std::cout << std::endl;
        
        std::cout << "============ invalide Bureaucrat creation ==============" << std::endl;
        Bureaucrat faketohigh("fake", 0);
    } catch (const Bureaucrat::GradeTooHighException &e){
            std::cerr << "Exeption caught : " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException &e){
            std::cerr << "Exeption caught : " << e.what() << std::endl;
    }
    try {
        std::cout << "============ invalide 2 Bureaucrat creation ==============" << std::endl;
        Bureaucrat faketolow("fake2", 151);
    } catch (const Bureaucrat::GradeTooHighException &e){
        std::cerr << "Exeption caught : " << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooLowException &e){
        std::cerr << "Exeption caught : " << e.what() << std::endl;
    }

    std::cout << std::endl;
    
    try{
        std::cout << "============ test decrementation ==============" << std::endl;
        Bureaucrat kuitsy("kuitsy", 149);
        std::cout << kuitsy.getName() << " has been creat with the grade : " << kuitsy.getGrade() << std::endl;
        kuitsy.decremante();
        std::cout << kuitsy.getName() << " has been decrement and have actualy this grade : " << kuitsy.getGrade() << std::endl;
        kuitsy.decremante();
        std::cout << "trying to past to high or to low grade..." << std::endl;
    } catch (const Bureaucrat::GradeTooLowException &e){
        std::cerr << "Exeption caught : " << e.what() << std::endl;
    }
    
    std::cout << std::endl;
    
    try{
        std::cout << "============ test incrementation ==============" << std::endl;
        Bureaucrat kui("kuitsy", 2);
        std::cout << kui.getName() << " has been creat with the grade : " << kui.getGrade() << std::endl;
        kui.incremante();
        std::cout << kui.getName() << " has been decrement and have actualy this grade : " << kui.getGrade() << std::endl;
        kui.incremante();
        std::cout << "trying to past to high or to low grade..." << std::endl;
    } catch (const Bureaucrat::GradeTooHighException &e){
        std::cerr << "Exeption caught : " << e.what() << std::endl;
    }
    return(0);
}