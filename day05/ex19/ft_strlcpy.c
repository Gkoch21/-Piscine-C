// #include <stdio.h>
// #include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;

	n = -1;
	while (src[++n] && (n < (size - 1)))
		dest[n] = src[n];
	dest[n] = '\0';
	return (n);
}

// int		main(void)
// {
// 	char	s1[] = "Keks keks";
// 	char	s2[] = "em ";
	
// 	printf("%d\n%s\n", ft_strlcpy( s1, s2, 5 ), s1);
// 	return (0);
// }