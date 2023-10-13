NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)
SRCS_OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(wildcard *_bonus.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $^

$(NAME): $(SRCS_OBJS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(SRCS_OBJS)

re: fclean all

.PHONY: all clean fclean re