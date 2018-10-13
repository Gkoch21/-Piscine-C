// #include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
	{
		if (!((str[n] >= 97 && str[n] <= 122) || 
		(str[n] >= 65 && str[n] <= 90)))
			return (0);
	}
	return (1);
}

// int		main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("AasdcvDSs"));
// 	printf("%d\n", ft_str_is_alpha("Aas22222dcvDSs"));
// 	printf("%d\n", ft_str_is_alpha("Aasdc vDSs"));
// 	printf("%d\n", ft_str_is_alpha("aaaaaaabbb"));
// 	printf("%d\n", ft_str_is_alpha("ZZZZZZZZ"));
// 	printf("%d\n", ft_str_is_alpha("t"));
// 	return (0);
// }
