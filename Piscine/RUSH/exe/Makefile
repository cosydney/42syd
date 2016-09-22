# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sycohen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 15:59:40 by sycohen           #+#    #+#              #
#    Updated: 2016/09/17 16:10:06 by sycohen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GS = -Wall -Wextra -Werror

NAME = colle-00

SRC = srcs/*\.c \


$(NAME):
	gcc $(FLAGS) $(SRC) -I includes -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(NAME)
	rm -rf tableau

fclean: clean

re: fclean all
