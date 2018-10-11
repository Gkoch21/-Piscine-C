#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		n;
	
	n = -1;
	while (str[++n])
		ft_putchar(str[n]);
}

// int		main(void)
// {
// 	char		*str = "Hello world\n";

// 	ft_putstr(str);
// 	return (0);
// }
