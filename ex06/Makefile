# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: panti <panti@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 11:10:16 by panti             #+#    #+#              #
#    Updated: 2023/11/07 15:03:49 by panti            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= harlFilter
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
FILES	= main Harl
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