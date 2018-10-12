// #include	"unistd.h"

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int		n;

// 	n = -1;
// 	while(str[++n])
// 		ft_putchar(str[n]);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int		n;

	n = -1;
	while (src[++n])
		dest[n] = src[n];
	dest[++n] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char	src[] = "Hello World\n";
// 	char	dest[40];

// 	ft_strcpy(dest, src);
// 	ft_putstr(dest);
// }
