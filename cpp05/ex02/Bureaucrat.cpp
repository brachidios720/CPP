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

void    Bureaucrat::signForm(AForm &form){
    if(form.getIsSigned()){
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because it's alerady sign" << std::endl;
        return;
    }
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " has been sign " << form.getName() << std::endl;
    }
    catch (std::exception &e){
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because grade is to low " << std::endl;
    }
}
void Bureaucrat::executeForm(AForm const & form){

    try{
        std::cout << this->_name << " try to execute " << form.getName() << std::endl;
        form.execute(*this);
        std::cout << this->_name << " has execute " << form.getName() << std::endl;
    }
    catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
Bureaucrat::~Bureaucrat(){
    std::cout << "default destructor Bureaucrat called "  << this->_name <<  std::endl;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &op){
    out << op.getName() << " is Bureaucrat, grade : " << op.getGrade();
    return(out);
}