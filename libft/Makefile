NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)
SRCS_OBJS = $(SRCS:.c=.o)

all: $(NAME)

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