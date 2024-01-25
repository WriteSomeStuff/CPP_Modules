# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/24 17:07:57 by cschabra      #+#    #+#                  #
#    Updated: 2024/01/25 17:29:50 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= fixed
CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++11

SRCS= Fixed.cpp \
main.cpp

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