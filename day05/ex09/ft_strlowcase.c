#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (str[n] >= 65 && str[n] <= 90)
			str[n] += 32;
	return (str);
}

int		main(void)
{
	char str[] = "asdf qWeRtY ZXCV\n";
	printf("%s", ft_strlowcase(str));
	// printf("%d=%d", 'A', 'Z');
	return (0);
}
