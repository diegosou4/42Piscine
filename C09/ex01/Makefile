CFLAGS = -Wall -Wextra -Werror
SRC = src/ft_putchar.c src/ft_putstr.c src/ft_strcmp.c src/ft_strlen.c src/ft_swap.c
OBJECTS = $(SRC:.c=.o)
INCLUDES = includes
LIBRARY = libft.a

all: $(LIBRARY)

$(OBJECTS): %.o: %.c
	$(CC) -c $(CFLAGS) -I $(INCLUDES) $< -o $@

$(LIBRARY): $(OBJECTS)
	ar rc $(LIBRARY) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIBRARY)
re:	fclean all

