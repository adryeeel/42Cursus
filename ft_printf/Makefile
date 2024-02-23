NAME = libftprintf.a
NAME_LINK = $(patsubst lib%.a,%,$(NAME))

LIBFT = libft.a
LIBFT_DIR = libft

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_nbrlen.c						\
				ft_printf.c						\
				ft_puthex_fd.c				\
				ft_putptr_fd.c				\
				ft_putunbr_fd.c				\
				ft_count_args.c				\
				ft_putnull_fd.c				\
				ft_isspecifier.c			\
				ft_parse_format.c			\
				ft_putupphex_fd.c			\
				ft_print_specifier.c	\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT_DIR)/$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(LIBFT_DIR)/$(LIBFT) $(OBJS)
	cp $< $@
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)
	make $@ -C $(LIBFT_DIR)

fclean: clean
	rm -rf $(NAME) main
	make $@ -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re