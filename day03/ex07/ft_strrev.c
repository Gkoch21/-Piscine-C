// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int		n;
	
// 	n = -1;
// 	while (str[++n])
// 		ft_putchar(str[n]);
// }

// int		ft_strlen(char *str)
// {
// 	int		count;

// 	count = 0;
// 	while (str[count])
// 		count++;
// 	return (count);
// }

char	*ft_strrev(char *str)
{
	char	strrev[ft_strlen(str) + 1];
	int		n;
	int		j;

	n = ft_strlen(str);
	j = 0;
	while (--n >= 0)
		strrev[j++] = str[n];
	strrev[j] = '\0';
	str = strrev;
	return (str);
}

// int		main(void)
// {
// 	char		*str = "\nHello world";

// 	ft_putstr(str);
// 	ft_putchar('\n');
// 	str = ft_strrev(str);
// 	ft_putstr(str);
// 	return (0);
// }
