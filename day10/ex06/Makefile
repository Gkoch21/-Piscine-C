NAME		= do-op
SRC			= srcs/
INCLUDES	= includes/
SOURCES		= $(SRC)main.c $(SRC)ft_atoi.c $(SRC)ft_do_op.c \
			$(SRC)ft_putnbr.c
FLAGS		= -Wall -Werror -Wextra

all: $(NAME)
$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SOURCES)
clean:
	/bin/rm -f  $(NAME)
fclean: clean
re: fclean all