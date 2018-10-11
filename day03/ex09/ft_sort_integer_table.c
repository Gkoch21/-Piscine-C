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

void	ft_sort_integer_table(int *tab, int size)
{
	int		n;
	int		j;
	int		value;

	n = -1;
	while (++n < size)
	{
		j = -1;
		while (++j < (size -1))
			if (tab[j] > tab[j + 1])
			{
				value = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = value;
			}
	}

}

// int		main(void)
// {
// 	int test[5] = {5, 1, 3, 4, 2};
// 	int n = -1;

// 	ft_sort_integer_table(test, 5);
// 	while (++n < 5)
// 		ft_putnbr(test[n]);
// 	ft_putchar('\n');
// 	return (0);
// }
