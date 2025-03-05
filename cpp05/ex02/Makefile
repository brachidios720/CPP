NAME = No,_you_need_form_28B,_not_28C...

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

SOURCES = 	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \

OBJ = ${SOURCES:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o $@ 

%.o : %.cpp
	${CC} ${FLAGS} -c $< -o $@ 

clean :
	${RM} ${OBJ} 

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
