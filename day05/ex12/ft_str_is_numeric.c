// #include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (!(str[n] >= '0' && str[n] <= '9'))
			return (0);
	return (1);
}

// int		main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("3333"));
// 	printf("%d\n", ft_str_is_numeric("Aas22222dcvDSs"));
// 	printf("%d\n", ft_str_is_numeric("1238992"));
// 	printf("%d\n", ft_str_is_numeric("123O2123"));
// 	printf("%d\n", ft_str_is_numeric("123 3213"));
// 	printf("%d\n", ft_str_is_numeric("t"));
// 	return (0);
// }
