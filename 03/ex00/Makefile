# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/05 16:14:39 by cschabra      #+#    #+#                  #
#    Updated: 2024/02/06 16:49:06 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= claptrap
CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++11

SRCS= ClapTrap.cpp \
Getters.cpp \
main.cpp \
Setters.cpp

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