#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// int		main(void)
// {
// 	int n = 0;

// 	ft_ft(&n);
// 	ft_putnbr(n);
// 	return (0);
// }