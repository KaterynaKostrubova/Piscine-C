# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 14:34:01 by kkostrub          #+#    #+#              #
#    Updated: 2018/02/20 14:34:08 by kkostrub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ft_atoi.c ft_putchar.c ft_putstr.c ft_putnbr.c do_op.c

HEADER = ft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(HEADER) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(NAME) 

re: fclean all
