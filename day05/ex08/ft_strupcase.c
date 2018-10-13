// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (str[n] >= 97 && str[n] <= 122)
			str[n] -= 32;
	return (str);
}

// int		main(void)
// {
// 	char str[] = "asdf qWeRtY ZXCV\n";
// 	printf("%s", ft_strupcase(str));
// 	// printf("%d=%d", 'a', 'z');
// 	return (0);
// }
