# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/02 21:03:56 by cschabra      #+#    #+#                  #
#    Updated: 2023/11/20 17:29:53 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= horde
CC= c++

CFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS= main.cpp \
Zombie.cpp \
zombieHorde.cpp

OBJS= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

debug: CFLAGS += -g -fsanitize=address
debug: re

.PHONY: all, clean, fclean, re, debug