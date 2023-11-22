# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/02 21:03:56 by cschabra      #+#    #+#                  #
#    Updated: 2023/11/22 13:22:15 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= violence
CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++11

SRCS= HumanA.cpp \
HumanB.cpp \
main.cpp \
Weapon.cpp

OBJS= ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${OBJS} $(CFLAGS) -o ${NAME}

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	@rm -rf ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

debug: CFLAGS += -g -fstandalone-debug -fsanitize=address
debug: re

.PHONY: all clean fclean re debug