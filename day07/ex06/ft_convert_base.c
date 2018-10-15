// #include	<stdio.h>
#include	<stdlib.h>

// int		ft_compare_base(char c, char *base)
// {
// 	int		n;

// 	n = -1;
// 	while (base[++n])
// 		if (base[n] == c)
// 			return (n);
// 	return (-1);
// }

// int 	ft_iterative_power(int nb, int power)
// {
// 	if (power <= -1)
// 		return (0);
// 	if (power > 1)
// 		nb *= ft_iterative_power(nb, power - 1);
// 	if (power == 0 || (( nb < 0) && (power == 0)))
// 		return (1);
// 	return (nb);
// }

int		ft_checkstr(char *str, int check)
{
	int		n;
	int		flag;

	n = -1;
	flag = 0;
	while (str[++n])
		if (check)
			if ((str[n] == '-') || (str[n] == '+'))
				flag = -1;
	return (n + flag);
}

// int		ft_atoi_base(char *str, char *base)
// {
// 	int		n;
// 	int		flag;
// 	int		sum;
// 	int		power;

// 	n = 0;
// 	flag = -1;
// 	sum = 0;
// 	if (!(power = ft_checkstr(str, 1)))
// 		return (0);
// 	while (str[n] == 32 || (str[n] >= 9 && str[n] <= 13))
// 		n++;
// 	if (str[n] == '-')
// 		flag = 1;
// 	if ((str[n] == '-') || (str[n] == '+'))
// 		n++;
// 	while (ft_compare_base(str[n], base) != -1)
// 		sum -= ft_compare_base(str[n++], base) * ft_iterative_power(ft_checkstr(base, 0), --power);
// 	return (sum * flag);
// }

char		*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && ((nb - 1) > j))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

void	ft_putnbr_base(int nbr, char *base, char *str) 
{
	int n;

	n = ft_checkstr(base, 0);
	if ((nbr < 0) && ((nbr / n) != 0))
	{
		ft_strncat(str, "-", 3);
		ft_putnbr_base((nbr / n) * -1, base, str);
		if	(nbr == -2147483648)
			ft_strncat(str, "2", 2);
		else
			ft_strncat(str, &base[nbr % n * -1], 2);		
		return ;
	}
	else if (nbr != 0 && ((nbr / n) != 0))
		ft_putnbr_base(nbr / n, base, str);
	ft_strncat(str, &base[nbr % n], 2);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		dec;
	int		max;
	int		count;
	char	*answer;


	if (!(dec = ft_atoi_base(nbr, base_from)))
		return ("0");
	max = dec;
	count = 1;
	while ((max /= ft_checkstr(base_to, 0)) != 0)
		count++;
	if (!(answer = (char*)malloc(sizeof(char) * (dec < 0 ? count + 1: count + 2))))
		return (0);
	ft_putnbr_base(dec, base_to, answer);
	return (&answer[0]);
}

// void	TEST_STR(char *s1, char *s2)
// {
// 	printf("%s=%s\n", s1, s2);
// }

// int		main(void)
// {
// 	TEST_STR(ft_convert_base("15", "0123456789", "01"), "1111");
// 	TEST_STR(ft_convert_base("10000", "01", "0123456789"), "16");
// 	TEST_STR(ft_convert_base("-31", "0123456789", "0123456789abcdef"), "-1f");
// 	TEST_STR(ft_convert_base("+1f", "0123456789abcdef", "0123456789"), "31");
// 	TEST_STR(ft_convert_base("0", "0123456789", "0123456789abcdef"), "0");
// 	TEST_STR(ft_convert_base("0.1234567", "0123456789", "0123456789"), "0");
// 	TEST_STR(ft_convert_base("2147483647", "0123456789", "0123456789abcdef"), "7fffffff");
// 	TEST_STR(ft_convert_base("-80000000", "0123456789abcdef", "0123456789"), "-2147483648");
// 	return (0);
// }
