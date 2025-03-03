#include "Form.hpp"

Form::Form() : _name("default"), _isSinged(false), _signGrade(MAX_GRADE), _execGrade(MAX_GRADE){
    std::cout << "default constructor of Form" << std::endl;
}
Form::Form(const std::string &name, const int signGrade, const int execGrade): _name(name), _isSinged(false), _signGrade(signGrade), _execGrade(execGrade){

    if(signGrade < MAX_GRADE)
        throw GradeTooHighException();
    else if(signGrade > MIN_GRADE)
        throw GradeTooLowException();
    
    if(execGrade < MAX_GRADE)
        throw GradeTooHighException();
    else if(execGrade > MIN_GRADE)
        throw GradeTooLowException();
    std::cout << "Type constructor of form called" << std::endl;
}
Form::Form(const Form &cpy): _name(cpy._name), _isSinged(cpy._isSinged), _signGrade(cpy._signGrade), _execGrade(cpy._execGrade) {
    std::cout << "cpy constructor called" << std::endl;
    *this = cpy;
}
Form &Form::operator=(const Form &other){
    std::cout << "assignement operator called" << std::endl;
    if(this != &other)
        this->_isSinged = other.getIsSigned();
    return(*this);
}

const char *Form::GradeTooHighException::what() const throw(){
    return("Grade to high sorry!");
}
const char *Form::GradeTooLowException::what() const throw(){
    return("Grade to low sorry!");
}
void    Form::beSigned(const Bureaucrat &bur){
    if(bur.getGrade() > this->_signGrade)
        throw GradeTooLowException();
    this->_isSinged = true;
}

const std::string Form::getName() const{
    return(this->_name);
}
bool Form::getIsSigned()const{
    return(this->_isSinged);
}
int Form::getSingGrade()const{
    return(this->_signGrade);
}
int Form::getExecGrade()const{
       return(this->_execGrade);
}

Form::~Form(){
    std::cout << "default form destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Form &form){
    out << form.getName() << ", grade to signe : " <<  form.getSingGrade() << ", grade to execute : " << form.getExecGrade() << std::endl;
    form.getIsSigned() ? (out << "is signed.") : (out << "isn't signed.");
    return(out);
}