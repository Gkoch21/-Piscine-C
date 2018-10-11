// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		if(nb == -2147483648)
// 		{
// 			ft_putchar('2');
// 			nb = -147483648 ;
// 		}
// 		nb *= -1;
// 	}
// 	if (nb != 0 && ((nb / 10) != 0))
// 		ft_putnbr(nb / 10);
// 	ft_putchar(nb % 10 + '0');
// }

int		ft_iterative_factorial(int nb)
{
	int		n;
	int		answer;

	n = 1;
	answer = 1;
	if(nb < 1 || nb > 12) {
		return (0);
	}
	while (n <= nb)
		answer *= n++;
	return (answer);
}

// int		main (void)
// {
// 	int factorial = -3;

// 	while (++factorial < 15)
// 	{
// 		ft_putnbr(ft_iterative_factorial(factorial));
// 		ft_putchar('\n');
// 	}
// 	return (0);
// }
