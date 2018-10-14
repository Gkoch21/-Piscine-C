#include	<unistd.h>
// #include	<stdio.h>

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		ft_str_is_printable(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (str[n] < 32 || str[n] >= 127)
			return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int n;

	write(1, "\\", 1);
	n = ft_strlen(base);
	if	(n == 0 || (n == 1) || ft_str_is_printable(base))
		return ;
	if ((nbr < 0) && (nbr != 0) && ((nbr / n) != 0))
	{
		write(1, "-", 1);
		ft_putnbr_base(nbr / n * -1, base);
		nbr *= -1;
	}
	else if (nbr != 0 && ((nbr / n) != 0))
		ft_putnbr_base(nbr / n, base);
	if (nbr != 0 && ((nbr / n) == 0))
		write(1, "0", 1);
	write(1, &base[nbr % n], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (str[n] < 32 || str[n] >= 127)
			ft_putnbr_base(str[n], "0123456789abcdef");
		else
			write(1, &str[n], 1);
}

// int		main(void)
// {
// 	ft_putstr_non_printable("asdf\x7f\x1fhi\x01\xfflol");
// 	write(1, "\n", 1);
// 	ft_putstr_non_printable("asdf\n\x1fhi\e\tlol");
// 	write(1, "\n", 1);
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// 	write(1, "\n", 1);
// 	return (0);
// }
