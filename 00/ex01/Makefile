# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/23 17:10:56 by cschabra      #+#    #+#                  #
#    Updated: 2023/11/22 13:10:52 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= phonebook
CC= c++
CFLAGS= -Wall -Werror -Wextra -std=c++98

SRCS= PhoneBook.cpp \
Contact.cpp

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