# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/29 11:02:50 by vafavard          #+#    #+#              #
#    Updated: 2025/11/29 11:11:00 by vafavard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Serialization
		
FILE =	main.cpp Serialization.cpp Data.cpp

RED = \033[0;31m
GREEN = \033[0;32m


SRC = ${FILE:.cpp=.o}

all : ${NAME}
	
${NAME}: ${SRC}
	@${CC} ${CFLAGS} -o $@ $^
	@echo "$(GREEN)😀Compilation terminee😀$(GREEN)"


%.o:%.cpp
	@${CC} ${CFLAGS} -c $^

clean:
	@rm -f main.o Serialization.o Data.o
	@echo "$(RED)🧹Supression des objets🧹$(RED)"

fclean: clean
	@rm -f Serialization
	@echo "$(RED)💀Supression de l'executable💀$(RED)"

re: fclean all