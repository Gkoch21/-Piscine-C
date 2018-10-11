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

int ft_iterative_power(int nb, int power)
{
	int		n;
	int		nbr;

	n = 0;
	nbr = nb;
	while (++n < power)
		nbr *= nb;
	return (nbr);
}

// int		main (void)
// {
// 	int nb = -3;

// 	while (++nb < 15)
// 	{
// 		ft_putnbr(ft_iterative_power(nb, 3));
// 		ft_putchar('\n');
// 	}
// 	return (0);
// }
