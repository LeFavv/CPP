# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafavard <vafavard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/17 10:32:54 by vafavard          #+#    #+#              #
#    Updated: 2025/10/19 16:19:55 by vafavard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

NAME = Be_Mad
		
FILE =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

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
	@rm -f main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o
	@echo "$(RED)🧹Supression des objets🧹$(RED)"

fclean: clean
	@rm -f Be_Mad
	@echo "$(RED)💀Supression de l'executable💀$(RED)"

re: fclean all
