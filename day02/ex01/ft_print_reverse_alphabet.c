#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	int		a;

	a = 123;
	while(--a > 96)
		ft_putchar(a);
}

// int		main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
