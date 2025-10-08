# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 00:27:25 by vafavard          #+#    #+#              #
#    Updated: 2025/10/09 00:36:58 by vafavard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

FILE =	megaphone.cpp

SRC = ${FILE:.c=.o}

all : ${NAME}
	
${NAME}: ${SRC}
	@${CC} ${CFLAGS} -o $@ $^


%.o:%.c
	@${CC} ${CFLAGS} -c $^

clean:
	@rm -f megaphone.o
	@echo "test1"

fclean: clean
	@rm -f megaphone
	@echo "test2"

re: fclean
	@make