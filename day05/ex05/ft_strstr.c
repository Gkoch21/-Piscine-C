// #include	<stdio.h>
// #include	<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while(str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while(to_find[j] && (to_find[j] == str[i + j]))
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return ("(null)");
}

// int		main(void)
// {
// 	printf("%s\n", ft_strstr("asdf qwerty", "wer"));
// 	printf("%s\n\n", strstr("asdf qwerty", "wer"));
// 	printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
// 	printf("%s\n\n", strstr("asdf qwerty qwerty", "wer"));
// 	printf("%s\n", ft_strstr("asdf qwerty", "qwerty1"));
// 	printf("%s\n\n", strstr("asdf qwerty", "qwerty1"));
// 	printf("%s\n", ft_strstr("", "wer"));
// 	printf("%s\n\n", strstr("", "wer"));
// 	printf("%s\n", ft_strstr("asdf qwerty", "zxcv"));
// 	printf("%s\n\n", strstr("asdf qwerty", "zxcv"));
// 	printf("%s\n", ft_strstr("asdf qwerty", ""));
// 	printf("%s\n\n", strstr("asdf qwerty", ""));
// }
