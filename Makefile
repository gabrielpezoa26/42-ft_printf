CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

INCLUDES = -Ilibft

NAME = libftftprintf.a

SRCS = ft_printf/ft_printf.c

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
