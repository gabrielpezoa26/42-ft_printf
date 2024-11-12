# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcesar-n <gcesar-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 18:42:38 by gcesar-n           #+#    #+#              #
#    Updated: 2024/11/11 13:54:44 by gcesar-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

NAME = libftprintf.a

SRC = 	ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putunbr.c\
		ft_putstr.c\
		ft_strchr.c\
		ft_putptr.c\
		ft_hex_lower.c\
		ft_hex_upper.c\

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
