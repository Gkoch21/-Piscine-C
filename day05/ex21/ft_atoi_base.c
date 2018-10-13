#include	<stdio.h>

int		ft_compare_base(char c, char *base)
{
	int		n;

	n = -1;
	while (base[++n])
		if (base[n] == c)
			return (n);
	return (-1);
}

int 	ft_iterative_power(int nb, int power)
{
	if (power <= -1)
		return (0);
	if (power > 1)
		nb *= ft_iterative_power(nb, power - 1);
	if (power == 0 || (( nb < 0) && (power == 0)))
		return (1);
	return (nb);
}

int		ft_checkstr(char *str, char *base)
{
	int		n;
	int		flag;

	n = -1;
	flag = 0;
	while (str[++n])
		if (!((str[n] == 32 || (str[n] >= 9 && str[n] <= 13))
			|| ft_compare_base(str[n], base)
			|| (str[n] == '-') || (str[n] == '+')))
			return (0);
		else if ((str[n] == '-') || (str[n] == '+'))
			flag = 1;
	n = -1;
	while (str[++n])
	{
		putchar(str[n]);
		printf ("(%d-%d)\n", ft_compare_base(str[n], base), n);
	}
	return (--n - flag);
}

int		ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		ft_atoi_base(char *str, char *base)
{
	int		n;
	int		flag;
	int		sum;
	int		power;

	n = 0;
	flag = 1;
	sum = 0;
	if (!(power = ft_checkstr(str, base)))
		return (0);
	while (str[n] == 32 || (str[n] >= 9 && str[n] <= 13))
		n++;
	if (str[n] == '-')
		flag = -1;
	if ((str[n] == '-') || (str[n] == '+'))
		n++;
	printf("%d\n", ft_compare_base(str[n], base));
	while (ft_compare_base(str[n], base) != -1)
	{
		printf("%d\n", ft_compare_base(str[n], base) * ft_iterative_power(ft_strlen(base), power));
		sum += ft_compare_base(str[n], base) * ft_iterative_power(ft_strlen(base), power--);
		n++;
	}
	return (sum * flag);
}

int		main(void)
{
// 	printf("%d=15\n", ft_atoi_base("15", "0123456789"));
// 	printf("%d=63\n", ft_atoi_base("3f", "0123456789abcdef"));
	printf("%d=1\n", ft_atoi_base("a", "0a"));
// 	printf("%d=-15\n", ft_atoi_base("-15", "0123456789"));
// 	printf("%d=-7\n", ft_atoi_base("-111", "01"));
// 	printf("%d=0\n", ft_atoi_base("a", "0"));
// 	printf("%d=0\n", ft_atoi_base("0", "012341234"));
// 	printf("%d=0\n", ft_atoi_base("1", "01234+"));
// 	printf("%d=0\n", ft_atoi_base("5", "01234"));
// 	printf("%d=0\n", ft_atoi_base("", "01234"));
	return (0);
}
