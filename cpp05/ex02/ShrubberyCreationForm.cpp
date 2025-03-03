#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("NULL"){
    std::cout << "default Shrubbery constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :AForm("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << "default  Shrubbery asigniation constructor called " << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy): AForm(cpy.getName(), cpy.getSingGrade(), cpy.getExecGrade()), _target(cpy.getTarget()){
    std::cout << "default Shrubbery copy constructor called" << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
    std::cout << "default Shrubbery copy assignement constructor called" << std::endl;

    this->AForm::operator=(other);
    this->_target = other.getTarget();

    return(*this);
}
const std::string ShrubberyCreationForm::getTarget() const{
    return(this->_target);
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{

    std::string     filname(this->_target + "_shrubbery");
    std::ofstream   outfile;

    if(executor.getGrade() > this->getExecGrade())
        throw (GradeTooLowException());
    if(!this->getIsSigned())
        throw (IsActualySignedExeception());
    
    outfile.open(filname.c_str());

    if(!outfile.is_open()){
        std::cerr << "cannot open the file " << this->_target << std::endl;
    }
    else{
        for(int i = 0; i < 1; i++){
            outfile << ASCII_ART;
        }
        outfile.close();
    }

}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "default Shrubbery destructor called" << std::endl;
}
