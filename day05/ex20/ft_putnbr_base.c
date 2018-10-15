// #include 	<stdio.h>
#include	<unistd.h>

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

	n = ft_strlen(base);
	if	(n == 0 || (n == 1) || ft_str_is_printable(base))
		return ;
	if ((nbr < 0) && (nbr != 0) && ((nbr / n) != 0))
	{
		ft_putchar('-');
		ft_putnbr_base(nbr / n * -1, base);
	}
	else if (nbr != 0 && ((nbr / n) != 0))
		ft_putnbr_base(nbr / n, base);
	ft_putchar(base[nbr % n]);
}

// int		main(void)
// {
// 	ft_putnbr_base(40, "0123456789abcdef");
// 	printf("=%d\n", 28);
// 	ft_putnbr_base(31, "0123456789abcdef");
// 	printf("=%s\n", "1f");
// 	ft_putnbr_base(15, "01");
// 	printf("=%s\n", "1111");
// 	ft_putnbr_base(-15, "0123456789");
// 	printf("=%s\n", "-15");
// 	ft_putnbr_base(-16, "01");
// 	printf("=%s\n", "-10000");
// 	ft_putnbr_base(2147483647, "0123456789abcdef");
// 	printf("=%s\n", "7fffffff");
// 	ft_putnbr_base(-2147483648, "0123456789abcdef");
// 	printf("=%s\n", "-80000000");
// 	return (0);
// }
