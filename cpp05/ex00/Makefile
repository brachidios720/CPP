NAME = Mommy,_when_I_grow_up,_I_want_to_be_a_bureaucrat!

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

SOURCES = 	main.cpp \
			Bureaucrat.cpp

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
