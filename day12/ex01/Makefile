NAME		= ft_cat
SRC			= srcs/
INCLUDES	= includes/
SOURCES		= $(SRC)main.c
FLAGS		= -Wall -Werror -Wextra -no-pie

all: $(NAME)
$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SOURCES)
clean:
	/bin/rm -f  $(NAME)
fclean: clean
re: fclean all
