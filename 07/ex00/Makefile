# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/13 13:46:15 by cschabra      #+#    #+#                  #
#    Updated: 2024/07/31 12:39:04 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= whatever
CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++11
SRCS= main.cpp \

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