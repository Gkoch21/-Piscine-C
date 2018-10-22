NAME		= t
SRC			= srcs/
INCLUDES	= includes/
SOURCES		= $(SRC)main.c
FLAGS		= -Wall -Werror -Wextra

all: $(NAME)
$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SOURCES)
clean:
	/bin/rm -f  $(NAME)
fclean: clean
re: fclean all