# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/23 17:10:56 by cschabra      #+#    #+#                  #
#    Updated: 2023/10/24 17:22:57 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= phonebook
CC= c++

CFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS= ${shell find -iname "*.cpp"}
OBJS= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${CFLAGS} ${SRCS}

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

debug: CFLAGS += -g #-fsanitize=address
debug: re

.PHONY: all, clean, fclean, re, debug