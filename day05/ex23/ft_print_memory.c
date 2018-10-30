// #include <stdio.h>

// int
// is_safe(int rows[8], int x, int y)  
// {
//     int i;
    
//     if (y == 0)
//             return 1;
//     for (i=0; i < y; ++i) {
//        if (rows[i] == x || rows[i] == x + y - i || rows[i] == x - y +i)
//             return 0;
//     }

//     return 1;
// }
 
// void
// putboard(int rows[8])  
// {
//     static int s = 0;
//     int x, y;

//     printf("\nSolution #%d:\n---------------------------------\n", ++s);
//     for (y=0; y < 8; ++y) {
//         for (x=0; x < 8; ++x)
//             printf(x == rows[y] ? "| Q " : "|   ");
//         printf("|\n---------------------------------\n");
//     }
// }
 
// void
// eight_queens_helper(int rows[8], int y)
// {
//     int x;

//     for (x=0; x < 8; ++x) {
//         if (is_safe(rows, x, y)) {
//             rows[y] = x;
//             if (y == 7)
//               putboard(rows);
//             else
//               eight_queens_helper(rows, y+1);
//         }
//     }
// }

// int
// main()
// {
//     int rows[8];

//     eight_queens_helper(rows, 0);

//     return 0;
// }



#include	<stdio.h>
#include	<stdlib.h>
#include	"./libft.h"

int	** board;

void	ft_createboard(int n)
{
	int		i;
	int		j;

	free(board);
	board	=	(int **)malloc(sizeof(int*) * n);
	i		=	0;
	while (i < (n))
	{
		board[i]	=	(int *)malloc(sizeof(int) * n);
		j			=	0;
		while (j < n)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_printboard(int n)
{
	int		i;
	int		j;

	i	=	0;
	ft_putstr("-----------------\n");
	while (i < n)
	{
		j	=	0;
		ft_putchar('|');
		while (j < n)
		{
			if (board[i][j] == -1)
				ft_putchar('Q');
			else
				ft_putchar('.');
			// ft_putnbr(board[i][j]);
			ft_putchar('|');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	ft_putstr("-----------------\n");
}

void	setQuin(int i, int j, int n)
{
	int	x;
	int	foo;

	x	=	0;
	while (x < n)
	{
		++board[x][j];
		++board[i][x];
		foo = j - i + x;
		if (foo >= 0 && foo < n)
			++board[x][foo];
		foo = j + i - x;
		if (foo >= 0 && foo < n)
			++board[x][foo];
		x++;
	}
	board[i][j] = -1;
}

void	resetQuin(int i, int j, int n)
{
	int	x;
	int	foo;

	x	=	0;
	while (x < n)
	{
		--board[x][j];
		--board[i][x];
		foo = j - i + x;
		if (foo >= 0 && foo < n)
			--board[x][foo];
		foo = j + i - x;
		if (foo >= 0 && foo < n)
			--board[x][foo];
		x++;
	}
	board[i][j] = 0;
}

int		checkRow(int i, int n)
{
	int		j;

	j	=	0;
	while (j < n)
	{
		if (board[i][j] == 0)
			return (1);
		j++;
	}
	return (0);
}

int		tryQuin(int i, int n)
{
	int		answer;
	int		j;

	answer	=	0;
	j	=	0;
	if (checkRow(i, n))
		while (j < n)
		{
			if (board[i][j] == 0)
			{
				setQuin(i, j, n);
				if (i == (n - 1))
					return (1);
				else
					if (!(answer = tryQuin((i + 1), n)))
						resetQuin(i, j, n);
			}
			j++;
		}
	else
		if (i < (n - 1))
			tryQuin(i + 1, n);
	return (answer);
}

// int		tryQuin(int i, int n)
// {
// 	int		answer;
// 	int		j;

// 	answer	=	0;
// 	j	=	0;
// 	while (j < n)
// 	{
// 		if (board[i][j] == 0)
// 		{
// 			setQuin(i, j, n);
// 			if (i == (n - 1))
// 				answer	=	1;
// 			else
// 				if (!(answer = tryQuin((i + 1), n)))
// 					resetQuin(i, j, n);
// 		}
// 		if (answer)
// 			break ;
// 		j++;
// 	}
// 	return (answer);
// }

void	ft_alldecision(int n)
{
	int	i;
	int	j;

	printf("test\n");
	i	=	0;
	while (i < n)
	{
		j	=	0;
		while (j < n)
		{
			ft_createboard(n);
			setQuin(i, j, n);
			if (tryQuin(0, n))
				ft_printboard(n);
			j++;
		}
		i++;
	}
}

int		main(void)
{
	int		n	=	8;

	ft_alldecision(n);
	// ft_createboard(n);
	// tryQuin(0, n);
	// ft_printboard(n);
	return (0);
}