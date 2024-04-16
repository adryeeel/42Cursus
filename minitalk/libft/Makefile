NAME = libft.a

PRINTF_DIR = printf
PRINTF_LIB = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =	convert/ft_atoi.c				\
				convert/ft_itoa.c				\
				convert/ft_ctob.c				\
				convert/ft_xtoa.c				\
				convert/ft_nbrlen.c			\
\
				mem/ft_bzero.c					\
				mem/ft_calloc.c					\
				mem/ft_memchr.c					\
				mem/ft_memcmp.c					\
				mem/ft_memcpy.c					\
				mem/ft_memset.c					\
				mem/ft_memmove.c				\
\
				string/ft_split.c				\
				string/ft_strchr.c			\
				string/ft_strdup.c			\
				string/ft_strlen.c			\
				string/ft_substr.c			\
				string/ft_strjoin.c			\
				string/ft_strlcat.c			\
				string/ft_strlcpy.c			\
				string/ft_strmapi.c			\
				string/ft_strncmp.c			\
				string/ft_strnstr.c			\
				string/ft_strrchr.c			\
				string/ft_strtrim.c			\
				string/ft_striteri.c		\
				string/ft_struppcase.c	\
\
				ctype/ft_isalnum.c			\
				ctype/ft_isalpha.c			\
				ctype/ft_isascii.c			\
				ctype/ft_isdigit.c			\
				ctype/ft_islower.c			\
				ctype/ft_isprint.c			\
				ctype/ft_isspace.c			\
				ctype/ft_isupper.c			\
				ctype/ft_tolower.c			\
				ctype/ft_toupper.c			\
\
				print/ft_putstr_fd.c		\
				print/ft_putnbr_fd.c		\
				print/ft_putendl_fd.c		\
				print/ft_putchar_fd.c		\
\
				sll/ft_sll_pop.c				\
				sll/ft_sll_get.c				\
				sll/ft_sll_push.c				\
				sll/ft_sll_swap.c				\
				sll/ft_sll_shift.c			\
				sll/ft_sll_insert.c			\
				sll/ft_sll_create.c			\
				sll/ft_sll_delete.c			\
				sll/ft_sll_destroy.c		\
				sll/ft_sll_unshift.c		\
\
				queue/ft_enqueue.c			\
				queue/ft_dequeue.c			\
				queue/ft_init_queue.c		\

SRCS_OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(PRINTF_DIR)/$(PRINTF_LIB):
	make -C $(PRINTF_DIR)

$(NAME): $(PRINTF_DIR)/$(PRINTF_LIB) $(SRCS_OBJS)
	cp $< $@
	ar rcs $@ $(SRCS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

fclean: clean
	make $@ -C $(PRINTF_DIR)
	rm -rf $(NAME)

clean:
	make $@ -C $(PRINTF_DIR)
	rm -rf $(SRCS_OBJS)

re: fclean all

.PHONY: all clean fclean re