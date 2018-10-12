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

int		ft_is_prime(int nb)
{
	int		n;

	n = 1;
	while (++n <= (nb / 2))
		if (nb%n == 0)
			return (0);
	return (1);
}

// int		main(void)
// {
// 	ft_putnbr(ft_is_prime(9));
// 	ft_putchar('\n');
// 	ft_putnbr(ft_is_prime(7));
// 	ft_putchar('\n');
// 	ft_putnbr(ft_is_prime(5));
// 	ft_putchar('\n');
// 	ft_putnbr(ft_is_prime(448));
// 	ft_putchar('\n');
// 	ft_putnbr(ft_is_prime(4));
// 	ft_putchar('\n');
// 	return (0);
// }
