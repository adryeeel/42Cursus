NAME = libftprintf.a

LIBFT = libft.a
LIBFT_DIR = libft

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c									\
				ft_isspecifier.c						\
				ft_strcat_safe.c						\
				ft_format_substr.c					\
				ft_get_specifier.c					\
\
				flags/ft_isflag.c						\
				flags/ft_flag_size.c				\
				flags/ft_init_flags.c				\
\
				print/ft_print_hex.c				\
				print/ft_print_str.c				\
				print/ft_print_ptr.c				\
				print/ft_print_nbr.c				\
				print/ft_print_null.c				\
				print/ft_print_char.c				\
				print/ft_print_uphex.c			\
				print/ft_print_padding.c		\
				print/ft_print_prefix_i.c		\
				print/ft_print_prefix_x.c		\
\
				parse/ft_parse_i.c					\
				parse/ft_parse_s.c					\
				parse/ft_parse_c.c					\
				parse/ft_parse_x.c					\
				parse/ft_parse_null.c				\
				parse/ft_parse_flags.c			\
				parse/ft_parse_field_i.c		\
				parse/ft_parse_field_x.c		\
				parse/ft_parse_field_s.c		\
				parse/ft_parse_field_c.c		\
				parse/ft_parse_format.c			\
				parse/ft_parse_substr.c			\
				parse/ft_parse_prefix_i.c		\
				parse/ft_parse_prefix_x.c		\
				parse/ft_parse_field_null.c	\
				parse/ft_parse_precision_i.c	\
				parse/ft_parse_precision_x.c	\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

bonus: all

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
