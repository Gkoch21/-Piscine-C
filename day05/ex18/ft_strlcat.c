// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && ((size - 1) > j))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + j);
}

// int		main(void)
// {
// 	char	str2[100];
// 	char	s1[] = "i ";
// 	char	s2[] = "em ";
	
// 	printf("%d\n%s\n", ft_strlcat( str2, s1, 5 ), str2);
// 	printf("%d\n%s\n", ft_strlcat( str2, s2, 5 ), str2);
// 	printf("%d\n%s\n", ft_strlcat( str2, "test ", 5 ), str2);
// 	printf("%d\n%s\n", ft_strlcat( str2, "function", 5 ), str2);
// 	printf("%d\n%s\n", ft_strlcat( str2, "!", 5 ), str2);
// 	return (0);
// }
