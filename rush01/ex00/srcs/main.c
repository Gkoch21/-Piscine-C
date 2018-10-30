#include	"../includes/libft.h"

int			check_cell(char * str)
{
	int		i;

	i =	-1;
	while (str[++i])
		if (!((str[i] == '.') || (str[i] >= '0'
		&& (str[i] <= '9'))))
			return (1);
	if (i != 9)
		return (1);
	return (0);
}

void	put_board(char ** board)
{
	int		i;
	int		j;

	i	=	0;
	while (board[i])
	{
		j	=	0;
		while (board[i][j])
		{
			ft_putchar(board[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

char	**	create_board(char ** av)
{
	char	**	board;
	int			i;
	int			j;

	board	=	(char **)malloc(sizeof(char *) * 10);
	i		=	0;
	while (++i < 10)
	{
		if (check_cell(av[i]))
		{
			ft_putstr("Error\n");
			return (NULL);
		}
		j = -1;
		board[i - 1]	=	ft_strnew(10);
		while (++j < 9)
			board[i - 1][j] = av[i][j];
		board[i - 1][j] = '\0';
	}
	board[i - 1]	= NULL;
	return (board);
}

int		check_square(char ** board, int i, int j, int c)
{
	int		n;
	int		p;

	n	=	i - 3;
	while (n < i)
	{
		p	=	j - 3;
		while (p < j)
		{
			if (board[n][p] == (c + '0'))
				return (1);
			p++;
		}
		n++;
	}
	return (0);
}

int		check_cells(char ** board, int i, int j, int n)
{
	int		p;
	int		begin_big_row;
	int		begin_big_col;

	p	=	-1;
	while (++p < 9)
		if ((board[i][p] == (n + '0')) ||
			(board[p][j] == (n + '0')))
		return (0);
	begin_big_row = 3;
	while (begin_big_row < 10)
	{
		begin_big_col = 3;
		while (begin_big_col < 10)
		{
			if (i < begin_big_row && (j < begin_big_col))
			{
				if(check_square(board, begin_big_row, begin_big_col, n))
					return (0);
				begin_big_row = 11;
				begin_big_col = 11;
			}
			begin_big_col += 3;
		}
		begin_big_row += 3;
	}
	return (1);
}

int		solve_sudoku(char ** board, int i, int j)
{
	int		n;
	int		answer;

	if	(i == 8 && (j == 9))
		return (1);
	answer	=	0;
	if (board[i][j] == '.')
	{
		n	=	0;
		while (++n < 10 && !answer)
			if (check_cells(board, i, j, n))
			{
				board[i][j]	=	(n + '0');
				if (j < 9)
					answer = solve_sudoku(board, i, j + 1);
				else if (i < 9)
					answer = solve_sudoku(board, i + 1, 0);
				if (!answer)
					board[i][j]	=	'.';
			}
	}
	else if (!answer)
	{
		if (j < 9)
			answer = solve_sudoku(board, i, j + 1);
		else if (i < 9)
			answer = solve_sudoku(board, i + 1, 0);
	}
	return (answer);
}

void	sudoku(char ** av)
{
	char	**	board;

	board = create_board(av);
	solve_sudoku(board, 0, 0);
	put_board(board);
	if (!board)
		return ;
}

int		main(int ac, char ** av)
{
	if (ac == 10)
		sudoku(av);
	else
		ft_putstr("Error\n");
	return (0);
}
