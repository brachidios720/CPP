#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("NULL"){
    std::cout << "default PresidentialPardon constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :AForm("PresidentialPardonForm", 145, 137), _target(target) {
    std::srand(std::time(0));
    std::cout << "default  PresidentialPardon asigniation constructor called " << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy): AForm(cpy.getName(), cpy.getSingGrade(), cpy.getExecGrade()), _target(cpy.getTarget()){
    std::cout << "default PresidentialPardon copy constructor called" << std::endl;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    std::cout << "default PresidentialPardon copy assignement constructor called" << std::endl;

    this->AForm::operator=(other);
    this->_target = other.getTarget();

    return(*this);
}
const std::string PresidentialPardonForm::getTarget() const{
    return(this->_target);
}
void PresidentialPardonForm::execute(Bureaucrat const &executor) const{

    if(executor.getGrade() > this->getExecGrade())
        throw (GradeTooLowException());
    if(!this->getIsSigned())
        throw (IsActualySignedExeception());

    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "default PresidentialPardon destructor called" << std::endl;
}