#include <stdio.h>
// #include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	char	*strdup;

	n = 0;
	while (src[n])
		n++;
	strdup = (char*)malloc(sizeof(char) * n);
	n = -1;
	while (src[++n])
		strdup[n] = src[n];
	strdup[n] = '\0';
	return (strdup);
}

// int		main(void)
// {
// 	// char str[] = "Hello world!";

// 	// printf("%s\n", ft_strdup(str));
// 	char* str;
// 	char* res;
// 	str = "asdf", res = ft_strdup(str);
// 	printf("%d, '%s' vs '%s'\n", res != str, res, str);
// 	str = "", res = ft_strdup(str);
// 	printf("%d, '%s' vs '%s'\n", res != str, res, str);
// 	str = "hello world!", res = ft_strdup(str);
// 	printf("%d, '%s' vs '%s'\n", res != str, res, str);
// 	return (0);
// }
