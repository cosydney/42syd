# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gepicard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/23 09:53:01 by gepicard          #+#    #+#              #
#    Updated: 2016/07/27 22:11:18 by abonneca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FlAGS = -Wall -Werror -Wextra

NAME = bsq

SRC = srcs/main.c\
	  srcs/ft_putchar.c\
	  srcs/ft_strlen.c\
	  srcs/ft_create_table.c\
	  srcs/checkmap.c\
	  srcs/list.c\
	  srcs/display.c\
	  srcs/remplissage.c\
	  srcs/ft_solve.c\
	  srcs/ft_create_file.c\
	  srcs/pouet.c\

OBJ = main.o\
	  ft_putchar.o\
	  ft_strlen.o\
	  ft_create_table.o\
	  checkmap.o\
	  list.o\
	  display.o\
	  remplissage.o\
	  ft_solve.o\
	  ft_create_file.o\
	  pouet.o\

$(NAME):
		gcc -c $(FLAGS)$(SRC) -I includes
	    gcc  $(OBJ) -I includes -o $(NAME)

all: $(NAME)

clean:
	    rm -rf $(OBJ)

fclean: clean
	    rm -rf $(NAME)

re: fclean all
