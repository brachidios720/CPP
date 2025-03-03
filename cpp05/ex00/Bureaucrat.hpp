#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include <exception>


#define MAX_GRADE 1
#define MIN_GRADE 150

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
        
        void    incremante();
        void    decremante();
        ~Bureaucrat();





    private:
            const std::string _name;
            int _grade;


};

std::ostream& operator<<(std::ostream out, const Bureaucrat &op);
#endif