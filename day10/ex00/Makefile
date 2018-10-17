NAME		= libft.a
SRC			= srcs/
INCLUDES	= includes/
SOURCES		= $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c \
			$(SRC)ft_strlen.c $(SRC)ft_swap.c
OBJECTS		= ft_putchar.o ft_putstr.o ft_strcmp.o \
			ft_strlen.o ft_swap.o
FLAGS		= -c -Wall -Werror -Wextra

all: $(NAME)
 $(NAME):
	gcc $(FLAGS) $(SOURCES) -I $(INCLUDES)
	ar rc libft.a $(OBJECTS)
	ranlib libft.a
clean:
	/bin/rm -f $(OBJECTS)
fclean: clean
	/bin/rm -f  $(NAME)
re: fclean all