NAME = libftprintf
SRCS = ft_point.c ft_putchar.c ft_putstr.c ft_puthex.c ft_putnbr.c \
ft_printf.c ft_unsignedint.c

OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME).a $(OBJS)

%.o: %.c
	cc $(FLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME).a
re: fclean all

.PHONY: all clean fclean re
