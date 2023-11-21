# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/02 21:03:56 by cschabra      #+#    #+#                  #
#    Updated: 2023/11/21 17:06:00 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= 
CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++11

SRCS= 

OBJS= ${SRCS:%.cpp=%.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${OBJS} $(CFLAGS) -o ${NAME}

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	@rm -rf ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

debug: CFLAGS += -g -fsanitize=address
debug: re

.PHONY: all clean fclean re debug