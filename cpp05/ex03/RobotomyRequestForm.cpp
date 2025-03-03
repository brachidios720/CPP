#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("NULL"){
    std::cout << "default RobotRequest constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :AForm("RobotomyRequestForm", 145, 137), _target(target) {
    std::srand(std::time(0));
    std::cout << "default  RobotRequest asigniation constructor called " << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy): AForm(cpy.getName(), cpy.getSingGrade(), cpy.getExecGrade()), _target(cpy.getTarget()){
    std::cout << "default RobotRequest copy constructor called" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
    std::cout << "default RobotRequest copy assignement constructor called" << std::endl;

    this->AForm::operator=(other);
    this->_target = other.getTarget();

    return(*this);
}
const std::string RobotomyRequestForm::getTarget() const{
    return(this->_target);
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const{

    if(executor.getGrade() > this->getExecGrade())
        throw (GradeTooLowException());
    if(!this->getIsSigned())
        throw (IsActualySignedExeception());
    if(rand() % 2)
        std::cout << "BRRRRBRBRBRBBRBRBR " << this->_target << " has been robotomized" << std::endl;
    else
        std::cout << "failed to robotomize " << this->_target << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "default RobotRequest destructor called" << std::endl;
}