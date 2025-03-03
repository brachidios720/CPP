#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>

#include "AForm.hpp"
#define MAX_GRADE 1
#define MIN_GRADE 150

class AForm;

class Bureaucrat{

    public:
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat (const Bureaucrat &cpy);
        Bureaucrat &operator=(const Bureaucrat &other);
        const std::string &getName()const;
        const int &getGrade() const;


        class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
        void    executeForm(AForm const & form);
        void    incremante();
        void    decremante();
        void    signForm(AForm &form);
        ~Bureaucrat();





    private:
            const std::string _name;
            int _grade;


};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &op);

#endif