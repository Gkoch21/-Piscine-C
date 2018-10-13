// #include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (!(str[n] >= 'A' && str[n] <= 'Z'))
			return (0);
	return (1);
}

// int		main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("3333"));
// 	printf("%d\n", ft_str_is_uppercase("Aas22222dcvDSs"));
// 	printf("%d\n", ft_str_is_uppercase("AAAADSFAA"));
// 	printf("%d\n", ft_str_is_uppercase("123O2123"));
// 	printf("%d\n", ft_str_is_uppercase("Z"));
// 	printf("%d\n", ft_str_is_uppercase("t"));
// 	return (0);
// }
