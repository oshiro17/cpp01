# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panti <panti@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 11:10:16 by panti             #+#    #+#              #
#    Updated: 2023/11/06 15:14:48 by panti            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Zombie
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
FILES	= main Zombie zombieHorde
OBJS	= $(FILES:=.o)
.PHONY: all clean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all