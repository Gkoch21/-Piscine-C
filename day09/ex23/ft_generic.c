#include	<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

void	ft_generic(void)
{
	ft_putstr("Tu tu tu tu ; Tu tu tu tu\n");
}

// int		main(void)
// {
// 	ft_generic();
// 	return(0);
// }
