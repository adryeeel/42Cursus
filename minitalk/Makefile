NAME = minitalk

CC = cc
CFLAGS = -Wall -Wextra -Werror

CLIENT = client
SERVER = server

C_SRCS = client.c
S_SRCS = server.c

all: $(NAME)

$(NAME): $(CLIENT) $(SERVER)

$(CLIENT): $(C_SRCS)
	$(CC) $(CFLAGS) $< -o $@

$(SERVER): $(S_SRCS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(CLIENT) $(SERVER)

fclean: clean

re: fclean all

bonus: all

.PHONY: all clean fclean re bonus