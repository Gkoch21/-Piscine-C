#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_abc(int a, int b, int c)
{
	if ((a + b + c) != 3)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = -1;
	while (++a < 10)
	{
		b = a;
		while (++b < 10)
		{
			c = b;
			while (++c < 10)
				ft_print_abc(a, b, c);
		}
	}
}

// int		main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
