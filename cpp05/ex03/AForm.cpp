#include "AForm.hpp"

AForm::AForm() : _name("default"), _isSinged(false), _signGrade(MAX_GRADE), _execGrade(MAX_GRADE){
    std::cout << "default constructor of AForm" << std::endl;
}
AForm::AForm(const std::string &name, const int signGrade, const int execGrade): _name(name), _isSinged(false), _signGrade(signGrade), _execGrade(execGrade){

    if(signGrade < MAX_GRADE)
        throw GradeTooHighException();
    else if(signGrade > MIN_GRADE)
        throw GradeTooLowException();
    
    if(execGrade < MAX_GRADE)
        throw GradeTooHighException();
    else if(execGrade > MIN_GRADE)
        throw GradeTooLowException();
    std::cout << "Type constructor of AForm called" << std::endl;
}
AForm::AForm(const AForm &cpy): _name(cpy._name), _isSinged(cpy._isSinged), _signGrade(cpy._signGrade), _execGrade(cpy._execGrade) {
    std::cout << "cpy constructor AForm called" << std::endl;
    *this = cpy;
}
AForm &AForm::operator=(const AForm &other){
    std::cout << "assignement operator AForm called" << std::endl;
    if(this != &other)
        this->_isSinged = other.getIsSigned();
    return(*this);
}

const char *AForm::GradeTooHighException::what() const throw(){
    return("Grade to high sorry!");
}
const char *AForm::GradeTooLowException::what() const throw(){
    return("Grade to low sorry!");
}
const char *AForm::IsActualySignedExeception::what() const throw(){
    return("This form is already signed!");
}

void    AForm::beSigned(const Bureaucrat &bur){
    if(bur.getGrade() > this->_signGrade)
        throw GradeTooLowException();
    this->_isSinged = true;
}

const std::string AForm::getName() const{
    return(this->_name);
}
bool AForm::getIsSigned()const{
    return(this->_isSinged);
}
int AForm::getSingGrade()const{
    return(this->_signGrade);
}
int AForm::getExecGrade()const{
       return(this->_execGrade);
}

AForm::~AForm(){
    std::cout << "default AForm destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const AForm &form){
    out << form.getName() << ", grade to signe : " <<  form.getSingGrade() << ", grade to execute : " << form.getExecGrade() << std::endl;
    form.getIsSigned() ? (out << "is signed.") : (out << "isn't signed.");
    return(out);
}