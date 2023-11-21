NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBS = ar rcs

FILES = ft_printchar.c \
		ft_printf.c \
		ft_printstr.c \
		ft_printhexa.c \
		ft_printdc.c \
		ft_printptr.c \
		ft_putchar.c \
		ft_printuns.c \
		
OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	$(LIBS) $(NAME) $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re