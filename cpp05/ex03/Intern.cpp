#include "Intern.hpp"


Intern::Intern(){
    std::cout << "default Intern constructor called" << std::endl;
}
Intern::Intern(const Intern &cpy){
    (void)cpy;
    std::cout << "default Intern copy contructor called" << std::endl;
}
Intern &Intern::operator=(const Intern &other){
    (void)other;
    std::cout << "default Intern assignement constructor called" << std::endl;
    return(*this);
}

static AForm *makeShrubbery(const std::string &target){
    return(new ShrubberyCreationForm(target));
}

static AForm *makeRobotomy(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *makePresidential(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm*  Intern::makeForm(const std::string &name, const std::string &target) const{

    std::string FormNames[3] = {"Shrubbery", "Robotomy", "Presidential"};
    AForm *(*formCreators[3])(const std::string &target) = {&makeShrubbery, &makeRobotomy, &makePresidential};

    for(int i = 0; i < 3 ; i++){
        if(name == FormNames[i]){
            std::cout << "Intern creat " << name << std::endl;
            return formCreators[i](target);
        }
    }

    std::cout << "error: Interne could creat form" << name << std::endl;
    return NULL;
}

Intern::~Intern(){
    std::cout << "default Intern destructor called" << std::endl;
}

