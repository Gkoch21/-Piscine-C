// #include	<stdio.h>
// #include	<string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int		main(void)
// {
// 	printf("%d\n", ft_strncmp("tes", "test", 3));
// 	printf("%d\n\n", strncmp("tes", "test, 3"));
// 	printf("%d\n", ft_strncmp("tast", "test", 2));
// 	printf("%d\n\n", strncmp("tast", "test", 2));
// 	printf("%d\n", ft_strncmp("tast", "tes", 5));
// 	printf("%d\n\n", strncmp("tast", "tes",5));
// 	printf("%d\n", ft_strncmp("", "", 2));
// 	printf("%d\n\n", strncmp("", "", 2));
// 	return (0);
// }
