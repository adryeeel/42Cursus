NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS_DIR = srcs
OBJS_DIR = objs
BINS_DIR = bin

SRCS = ft_isalpha.c ft_isdigit.c ft_isascii.c
OBJS = $(SRCS:.c=.o)

TESTS = $(patsubst ft_%,test_%,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS) | $(BINS_DIR)
	ar rcs $(BINS_DIR)/$@ $(addprefix $(OBJS_DIR)/,$(OBJS))

%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $^ -o $(OBJS_DIR)/$@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(BINS_DIR):
	mkdir -p $(BINS_DIR)

fclean: clean
	rm -rf $(BINS_DIR)

clean:
	rm -rf $(OBJS_DIR)

re: fclean all

.PHONY: all clean fclean re