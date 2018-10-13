// #include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (!(str[n] >= 'a' && str[n] <= 'z'))
			return (0);
	return (1);
}

// int		main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("3333"));
// 	printf("%d\n", ft_str_is_lowercase("Aas22222dcvDSs"));
// 	printf("%d\n", ft_str_is_lowercase("zdjds"));
// 	printf("%d\n", ft_str_is_lowercase("123O2123"));
// 	printf("%d\n", ft_str_is_lowercase("123 3213"));
// 	printf("%d\n", ft_str_is_lowercase("t"));
// 	return (0);
// }
