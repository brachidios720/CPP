#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string>

#define MAX_GRADE 1
#define MIN_GRADE 150
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{


    public: 
            AForm();
            AForm(const std::string &name, const int signGrade, const int execGrade);
            AForm(const AForm &cpy);
            AForm&operator=(const AForm &other);
            const std::string getName() const;
            bool getIsSigned()const;
            int getSingGrade()const;
            int getExecGrade()const;
            void    beSigned(const Bureaucrat &bur);
            virtual void execute(Bureaucrat const & executor) const = 0;
            class GradeTooHighException : public std::exception {
                public:
                    virtual const char *what() const throw();
            };

            class GradeTooLowException : public std::exception {
                public:
                    virtual const char *what() const throw();
            };
            class IsActualySignedExeception : public std::exception {
                public:
                    virtual const char *what() const throw();
            };
            virtual ~AForm();
    private:
        const std::string _name;
        bool    _isSinged;
        const int   _signGrade;
        const int   _execGrade;
};
std::ostream& operator<<(std::ostream &out, const AForm &form);
#endif