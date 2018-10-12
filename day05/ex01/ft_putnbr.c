#include	"unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		ft_countnbr(int nb)
{
	int		n;

	while ((nb = nb/10) != 0)
		n++;
	return (++n);
}

void	ft_putnbr(int nb)
{
	char	nbr[ft_countnbr(nb) + 1];
	int		n;
	
	n = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		if(nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648 ;
		}
		nb *= -1;
	}
	while ((nb / 10) != 0)
	{
		nbr[n] = (nb % 10) + '0';
		n++;
		nb /= 10;
	}
	nbr[n] = (nb % 10) + '0';
	nbr[++n] = '\0';
	n = ft_strlen(nbr);
	while (--n >= 0)
		ft_putchar(nbr[n]);
}

// int		main(void)
// {
// 	ft_putnbr(-143);
// 	ft_putchar('\n');
// 	ft_putnbr(143);
// 	ft_putchar('\n');
// 	ft_putnbr(0);
// 	ft_putchar('\n');
// 	ft_putnbr(2147483647);
// 	ft_putchar('\n');
// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');
// 	return (0);
// }
