#include	"../includes/ft.h"
#include	"../includes/ft_opp.h"

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 4)
	{
		while (i < 5)
		{
			if (*g_opptab[i].op == av[2][0] && !av[2][1])
			{
				ft_putnbr(g_opptab[i].func(ft_atoi(av[1]), ft_atoi(av[3])));
				break ;
			}
			i += 1;
		}
		if (i >= 5)
			g_opptab[5].func(ft_atoi(av[1]), ft_atoi(av[3]));
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
