# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/13 13:46:15 by cschabra      #+#    #+#                  #
#    Updated: 2024/02/13 13:52:12 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= animals
CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++11

SRCS= Animal.cpp \
Cat.cpp \
Dog.cpp \
main.cpp \
WrongAnimal.cpp \
WrongCat.cpp

OBJS= ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${OBJS} ${CFLAGS} -o ${NAME}

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	@rm -rf ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

debug: CFLAGS += -g -fsanitize=address
debug: re

.PHONY: all clean fclean re debug