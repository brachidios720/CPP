NAME = At_least_this_beats_coffee-making

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

SOURCES = 	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			Intern.cpp \

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
