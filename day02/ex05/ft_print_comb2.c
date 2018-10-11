#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_abc(int a, int b, int c, int d, int e)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(' ');
	ft_putchar(c + '0');
	ft_putchar(d + '0');
	if (e != (98 + 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = -1;
	while (++a < 100)
	{
		b = a;
		while (++b < 100)
			ft_print_abc(a / 10, a % 10, b / 10, b % 10, a + b);
	}
}

// int		main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
