#include	<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putstr("-");
		if(nb == -2147483648)
		{
			ft_putstr("2");
			nb = -147483648 ;
		}
		nb *= -1;
	}
	if (nb != 0 && ((nb / 10) != 0))
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_print_str(int i1, int i2)
{
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_putnbr(i1);
	ft_putstr(".00 A.M. AND ");
	ft_putnbr(i2);
	ft_putstr(".00 A.M.");
	ft_putstr("\n");
}

void	ft_takes_place(int hour)
{
	if (hour == 24 || hour == 12)
			ft_print_str(12, 1);
	else if (hour == 23 || hour == 11)
			ft_print_str(11, 0);
	else if (hour > 12)
		ft_print_str(hour - 12, hour - 11);
	else
		ft_print_str(hour, hour + 1);
}

int		main(void)
{
	ft_takes_place(1);
	ft_takes_place(11);
	ft_takes_place(12);
	ft_takes_place(23);
	ft_takes_place(24);
	return(0);
}
