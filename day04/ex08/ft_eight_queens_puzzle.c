#include <unistd.h>

int		board[8][8];

void	ft_fill_board()
{
	int		i;
	int		j;

	i = -1;
	while (++i < 8)
	{
		j = -1;
		while (++j < 8)
			board[i][j] = 0;
	}
}

void	ft_set_queens(int i, int j)
{
	int		x;
	int		foo;

	x = -1;
	while(++x < 8)
	{
		++board[x][j];
		++board[i][x];
		foo = j - i + x;
		if (foo >= 0 && foo < 8)
			++board[x][foo];
		foo = j + i - x;
		if (foo >= 0 && foo < 8)
			++board[x][foo];
	}
	board[i][j] = -1;
}

void	ft_reset_queens(int i, int j)
{
	int		x;
	int		foo;

	x = -1;
	while(++x < 8)
	{
		--board[x][j];
		--board[i][x];
		foo = j - i + x;
		if (foo >= 0 && foo < 8)
			--board[x][foo];
		foo = j + i - x;
		if (foo >= 0 && foo < 8)
			--board[x][foo];
	}
	board[i][j] = 0;
}

int		ft_try_queens(int i)
{
	int		answer;
	int		j;

	answer = 0;
	j = -1;
	while (++j < 8)
	{
		if (board[i][j] == 0)
		{
			ft_set_queens(i, j);
			if (i == 7)
				answer = 1;
			else
				if (!(answer = ft_try_queens(i + 1)))
					ft_reset_queens(i, j);
		}
		if (i == 7)
			break;
	}
	return (answer);
}

void	ft_eight_queens_puzzle(void)
{
	int		i;
	int		j;

	ft_fill_board();
	ft_try_queens(0);
	i = -1;
	while (++i < 8)
	{
		j = -1;
		while (++j < 8)
			if (board[i][j] != -1)
				write(1, "0", 1);
			else
				write(1, "1", 1);
		write(1, "\n", 1);
	}
}

int		main(void)
{
	ft_eight_queens_puzzle();
	return (0);
}
