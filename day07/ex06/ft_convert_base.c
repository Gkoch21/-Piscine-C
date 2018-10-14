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
			|| (ft_compare_base(str[n], base) != -1)
			|| (str[n] == '-') || (str[n] == '+')))
			return (0);
		else if ((str[n] == '-') || (str[n] == '+'))
			flag = 1;
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	int		flag;
	int		sum;
	int		power;

	n = 0;
	flag = 1;
	sum = 0;
	if (!(power = ft_checkstr(nbr, base_from)))
		return (0);
	while (nbr[n] == 32 || (nbr[n] >= 9 && nbr[n] <= 13))
		n++;
	if (nbr[n] == '-')
		flag = -1;
	if ((nbr[n] == '-') || (nbr[n] == '+'))
		n++;
	while (ft_compare_base(nbr[n], nbr) != -1)
	{
		sum += ft_compare_base(nbr[n], base_from) * ft_iterative_power(ft_strlen(base_from), power--);
		n++;
	}
	return (sum * flag);
}

void	TEST_STR(char *s1, char *s2)
{
	printf("%s=%s\n", s1, s2);
}

int		main(void)
{
	TEST_STR(ft_convert_base("15", "0123456789", "01"), "1111");
	TEST_STR(ft_convert_base("10000", "01", "0123456789"), "16");
	TEST_STR(ft_convert_base("-31", "0123456789", "0123456789abcdef"), "-1f");
	TEST_STR(ft_convert_base("+1f", "0123456789abcdef", "0123456789"), "31");
	TEST_STR(ft_convert_base("0", "0123456789", "0123456789abcdef"), "0");
	TEST_STR(ft_convert_base("0.1234567", "0123456789", "0123456789"), "0");
	TEST_STR(ft_convert_base("2147483647", "0123456789", "0123456789abcdef"), "7fffffff");
	TEST_STR(ft_convert_base("-80000000", "0123456789abcdef", "0123456789"), "-2147483648");
	return (0);
}
