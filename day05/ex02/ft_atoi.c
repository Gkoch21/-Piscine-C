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

int		ft_atoi(char *str)
{
	int		n;
	int		flag;
	int		answer;

	n = 0;
	flag = 1;
	answer = 0;
	while (str[n] == 32 || (str[n] >= 9 && str[n] <= 13))
		n++;
	if (str[n] == '-')
		flag = -1;
	if (str[n] == '-' || str[n] == '+')
		n++;
	while (str[n] && str[n] >= '0' && str[n] <= '9')
	{
		answer *= 10;
		answer += (int)(str[n] - '0');
		n++;
	}
	return (answer * flag);
}

// int		main(void)
// {
// 	char *nbr = "321";

// 	ft_putnbr(ft_atoi(nbr));
// 	ft_putchar('\n');
// 	return (0);
// }
