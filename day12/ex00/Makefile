# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/22 12:55:56 by kkostrub          #+#    #+#              #
#    Updated: 2018/02/22 12:57:27 by kkostrub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = main.c ft_display_file.c ft_print.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) main.o ft_display_file.o ft_print.o

clean:
	/bin/rm -f main.o ft_display_file.o ft_print.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
