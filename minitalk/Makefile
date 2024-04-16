NAME = minitalk

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT = libft.a
LIBFT_DIR = libft
LIBFT_LINK = $(patsubst lib%.a,%,$(LIBFT))

CLIENT = client
SERVER = server

C_SRC =	src/client.c					\
				src/ft_send_char.c		\
				src/ft_init_signal.c	\

C_OBJ = $(C_SRC:.c=.o)

S_SRC =	src/server.c					\
				src/ft_btoc.c					\
				src/ft_init_signal.c	\

S_OBJ = $(S_SRC:.c=.o)

all: $(NAME)

$(NAME): $(CLIENT) $(SERVER)

$(CLIENT): $(C_OBJ) | $(LIBFT_DIR)/$(LIBFT)
	$(CC) $(CFLAGS) $(C_OBJ) -L $(LIBFT_DIR) -l $(LIBFT_LINK) -o $@

$(SERVER): $(S_OBJ) | $(LIBFT_DIR)/$(LIBFT)
	$(CC) $(CFLAGS) $(S_OBJ) -L $(LIBFT_DIR) -l $(LIBFT_LINK) -o $@

$(LIBFT_DIR)/$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(C_OBJ)
	rm -rf $(S_OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(CLIENT) $(SERVER)

re: fclean all

bonus: all

.PHONY: all clean fclean re bonus