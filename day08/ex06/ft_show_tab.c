#include	"ft_stock_par.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
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
	if (nb != 0 && ((nb / 10) != 0))
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		n;
	char	**words;

	while (par->str != 0)
	{
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putstr(par->copy);
		ft_putchar('\n');
		n = 0;
		words = par->tab;
		while (words[n] != 0)
		{
			ft_putstr(words[n++]);
			ft_putchar('\n');
		}
		par++;
	}
}
