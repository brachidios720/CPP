#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name){
    if(grade < MAX_GRADE)
    throw GradeTooHighException();
    if(grade > MIN_GRADE)
    throw GradeTooLowException();
    this->_grade = grade;
    std::cout << "default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat (const Bureaucrat &cpy){
    std::cout << "copy constructor called" << std::endl;
    *this = cpy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
    std::cout << "assignement constructor calles" << std::endl;
    if(this != &other)
        this->_grade = other.getGrade();
    return(*this);
}

const std::string &Bureaucrat::getName()const{
    return(this->_name);
}

const int &Bureaucrat::getGrade() const{
    return(this->_grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
    return("Grade to high sorry!");
}
const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return("Grade to low sorry!");
}
void    Bureaucrat::incremante(){
    if(this->_grade - 1 < MAX_GRADE)
        throw GradeTooHighException();
    this->_grade--;
}
void    Bureaucrat::decremante(){
    if(this->_grade + 1 > MIN_GRADE)
        throw GradeTooLowException();
    this->_grade++;
}

Bureaucrat::~Bureaucrat(){
    std::cout << this->_name << " default destructor Bureaucrat called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &op){
    out << op.getName() << ": Bureaucrat, grade : " << op.getGrade();
    return(out);
}