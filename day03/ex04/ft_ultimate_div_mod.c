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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int divides;

	divides = *a / *b;
	*b = *a % *b;
	*a = divides;
}

// int		main(void)
// {
// 	int a = 11;
// 	int b = 3;

// 	ft_ultimate_div_mod(&a, &b);
// 	ft_putnbr(a);
// 	ft_putchar('\n');
// 	ft_putnbr(b);
// 	ft_putchar('\n');
// 	return (0);
// }
