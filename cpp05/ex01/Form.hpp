#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>

#define MAX_GRADE 1
#define MIN_GRADE 150
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{


    public: 
            Form();
            Form(const std::string &name, const int signGrade, const int execGrade);
            Form(const Form &cpy);
            Form&operator=(const Form &other);
            const std::string getName() const;
            bool getIsSigned()const;
            int getSingGrade()const;
            int getExecGrade()const;
            void    beSigned(const Bureaucrat &bur);
            class GradeTooHighException : public std::exception {
                public:
                    virtual const char *what() const throw();
            };

            class GradeTooLowException : public std::exception {
                public:
                    virtual const char *what() const throw();
            };
            ~Form();
    private:
        const std::string _name;
        bool    _isSinged;
        const int   _signGrade;
        const int   _execGrade;
};
std::ostream& operator<<(std::ostream &out, const Form &form);
#endif