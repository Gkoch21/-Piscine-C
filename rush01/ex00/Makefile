NAME		= sudoku
SRC			= srcs/
INCLUDES	= includes/
SOURCES		= $(SRC)main.c
FLAGS		= -Wall -Werror -Wextra -no-pie

all: $(NAME)
$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SOURCES) -L. -ltf 
clean:
	/bin/rm -f  $(NAME)
fclean: clean
re: fclean all
