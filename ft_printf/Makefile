NAME = libftprintf.a
BASENAME = $(patsubst lib%,%,$(basename $(NAME)))

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

LIBS_DIR = libs

MEM_DIR = mem
CTYPE_DIR = ctype
STRING_DIR = string
PRINTF_DIR = printf

MEM_SRCS = 		ft_bzero.c 		\
							ft_calloc.c 	\
							ft_memchr.c 	\
							ft_memcmp.c 	\
							ft_memcpy.c 	\
							ft_memset.c 	\
							ft_memmove.c 	\

CTYPE_SRCS =	ft_isascii.c 	\
							ft_toupper.c 	\
							ft_isalpha.c 	\
							ft_islower.c 	\
							ft_isprint.c 	\
							ft_isspace.c 	\
							ft_isupper.c 	\
							ft_isblank.c 	\
							ft_iscntrl.c 	\
							ft_isalnum.c 	\
							ft_isdigit.c 	\
							ft_tolower.c 	\
							ft_isxdigit.c \

STRING_SRCS =	ft_itoa.c						\
							ft_atoi.c						\
							ft_split.c					\
							ft_strstr.c					\
							ft_strchr.c					\
							ft_strdup.c					\
							ft_substr.c					\
							ft_strlen.c					\
							ft_strcmp.c					\
							ft_trimend.c				\
							ft_strjoin.c				\
							ft_strlcat.c				\
							ft_strncmp.c				\
							ft_strrchr.c				\
							ft_strmapi.c				\
							ft_strsize.c				\
							ft_strlcpy.c				\
							ft_strtrim.c				\
							ft_strnstr.c				\
							ft_striteri.c				\
							ft_putnbr_fd.c			\
							ft_putstr_fd.c			\
							ft_puthex_fd.c			\
							ft_trimstart.c			\
							ft_putunbr_fd.c			\
							ft_putendl_fd.c			\
							ft_strcasestr.c			\
							ft_struppcase.c			\
							ft_strlowcase.c			\
							ft_strcasecmp.c			\
							ft_putchar_fd.c			\
							ft_strcontains.c		\
							ft_putupphex_fd.c		\
							ft_strcapitalize.c	\

PRINTF_SRCS = ft_printf.c					\
							ft_print_specifier.c

MEM_OBJS = $(addprefix libs/$(MEM_DIR)/, $(MEM_SRCS:.c=.o))
CTYPE_OBJS = $(addprefix libs/$(CTYPE_DIR)/, $(CTYPE_SRCS:.c=.o))
STRING_OBJS = $(addprefix libs/$(STRING_DIR)/, $(STRING_SRCS:.c=.o))
PRINTF_OBJS = $(addprefix libs/$(PRINTF_DIR)/, $(PRINTF_SRCS:.c=.o))

all: $(NAME)

$(NAME): $(PRINTF_OBJS) $(MEM_OBJS) $(CTYPE_OBJS) $(STRING_OBJS)
	@ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

fclean: clean
	rm -rf $(NAME) ft_printf.out

clean:
	rm -rf $(PRINTF_OBJS) $(MEM_OBJS) $(CTYPE_OBJS) $(STRING_OBJS)

re: fclean all

.PHONY: all clean fclean re