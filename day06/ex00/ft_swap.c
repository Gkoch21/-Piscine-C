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

void	ft_swap(int *a, int *b)
{
	int		value;

	value = *a;
	*a = *b;
	*b = value;
}

// int		main(void)
// {
// 	int a = 1;
// 	int b = 2;

// 	ft_putchar('a');
// 	ft_putchar('=');
// 	ft_putnbr(a);
// 	ft_putchar('/');
// 	ft_putchar('b');
// 	ft_putchar('=');
// 	ft_putnbr(b);
// 	ft_putchar('\n');
// 	ft_swap(&a, &b);
// 	ft_putchar('a');
// 	ft_putchar('=');
// 	ft_putnbr(a);
// 	ft_putchar('/');
// 	ft_putchar('b');
// 	ft_putchar('=');
// 	ft_putnbr(b);
// 	ft_putchar('\n');
// 	return (0);
// }