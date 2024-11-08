# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

# Output library name
NAME = libftftprintf.a

# Source files
SRC = 	ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putunbr.c\
		ft_putstr.c\
		ft_strchr.c\
		ft_putptr.c\
		ft_hex_lower.c\
		ft_hex_upper.c\

# Object files
OBJS = $(SRC:.c=.o)

# Default rule
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)
	ranlib $(NAME)

# Rule to build libft if it’s not already built
$(LIBFT):
	make -C libft

# Cleaning object files
clean:
	rm -f $(OBJS)
	make clean -C libft

# Full clean, including the library
fclean: clean
	rm -f $(NAME)
	make fclean -C libft

# Rebuild everything
re: fclean all
