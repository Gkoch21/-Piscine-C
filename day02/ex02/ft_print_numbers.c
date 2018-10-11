#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int		a;

	a = -1;
	while(++a < 10)
		ft_putchar(a + '0');
}

// int		main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
