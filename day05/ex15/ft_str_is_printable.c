// #include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (str[n] < 32 || str[n] >= 127)
			return (0);
	return (1);
}

// int		main(void)
// {
// 	printf("%d\n", ft_str_is_printable("3333"));
// 	printf("%d\n", ft_str_is_printable(25));
// 	printf("%d\n", ft_str_is_printable(127));
// 	printf("%d\n", ft_str_is_printable("123O2123"));
// 	printf("%d\n", ft_str_is_printable("123 3213"));
// 	printf("%d\n", ft_str_is_printable("t"));
// 	return (0);
// }
