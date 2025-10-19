# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/11 16:53:16 by vafavard          #+#    #+#              #
#    Updated: 2025/10/19 16:21:01 by vafavard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie_2
		
FILE =	main.cpp ZombieHorde.cpp Zombie.cpp

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
	@rm -f main.o ZombieHorde.o Zombie.o
	@echo "$(RED)🧹Supression des objets🧹$(RED)"

fclean: clean
	@rm -f Zombie_2
	@echo "$(RED)💀Supression de l'executable💀$(RED)"

re: fclean all