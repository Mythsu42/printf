NAME = libftprintf.a

SRCS =	ft_printf.c\
		ft_dispatch_args.c\
		ft_putchar_pf.c\
		ft_putnbr_pf.c\
		ft_putstr_pf.c\
		ft_put_unsigned_pf.c\
		ft_puthex_pf.c\
		ft_putptr_pf.c
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CLAGS)-c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(OBJS)

.PHONY: all clean fclean re
