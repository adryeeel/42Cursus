NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

BINS_DIR = bin
SRCS_DIR = srcs
OBJS_DIR = objs
TESTS_DIR = tests

SRCS = ft_isalpha.c ft_isdigit.c ft_isascii.c
SRCS_OBJS = $(SRCS:.c=.o)

TEST_SRCS = $(wildcard $(TESTS_DIR)/*.c)
TEST_EXECS = $(patsubst $(TESTS_DIR)/%.c,$(BINS_DIR)/%,$(TEST_SRCS))

debug:
	@echo $(TEST_EXECS)

all: $(NAME)

tests: $(TEST_EXECS)
	$(addprefix .$(BIN_DIR)/,$(TEST_EXECS))

$(NAME): $(SRCS_OBJS) | $(BINS_DIR)
	ar rcs $(BINS_DIR)/$@ $(addprefix $(OBJS_DIR)/,$(SRCS_OBJS))

%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $^ -o $(OBJS_DIR)/$@

$(BINS_DIR)/%: $(TESTS_DIR)/%.c $(NAME)
	$(CC) $(CFLAGS) $< -o $@ -L$(BINS_DIR) -l$(NAME:lib%.a=%)

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