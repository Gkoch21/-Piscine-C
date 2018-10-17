#include	"../includes/ft.h"

int		main(int ac, char **av)
{
	if (ac == 4)
		ft_do_op(ft_atoi(av[1]), av[2], ft_atoi(av[3]));
	else
		write(1, "\n", 1);
	return (0);
}
