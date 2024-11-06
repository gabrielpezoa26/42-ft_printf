CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

INCLUDES = -Ilibft

NAME = libftftprintf.a

SRC = 	ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_strchr.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
