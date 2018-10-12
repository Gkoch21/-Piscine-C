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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		j;

	j = -1;
	while (src[++j] && (j < (n - 1)))
		dest[j] = src[j];
	dest[++j] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char	src[] = "Hello World\n";
// 	char	dest[40];

// 	ft_strncpy(dest, src, 6);
// 	ft_putstr(dest);
// }
