// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		n;

	n = 0;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[++n])
		if ((str[n + 1] >= 97 && str[n + 1] <= 122) &&
			!((str[n] >= 65 && str[n] <= 90) || 
			(str[n] >= 97 && str[n] <= 122)))
			str[n + 1] -= 32;
	return (str);
}

// int		main(void)
// {
// 	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
// 	printf("%s\n", ft_strcapitalize(str));
// 	return (0);
// }
