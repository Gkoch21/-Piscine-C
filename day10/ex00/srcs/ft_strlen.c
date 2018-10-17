// #include <unistd.h>
#include	"../includes/ft.h"

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

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

// int		main(void)
// {
// 	ft_putnbr(ft_strlen("test"));
// 	return (0);
// }
