#include <unistd.h>

int		main(int ac, char **av)
{
	int		j;
	
	if (ac > 1)
		while (0 < --ac)
		{
			j = -1;
			while (av[ac][++j])
				write(1, &av[ac][j], 1);
			write(1, "\n", 1);
		}
	else
		write(1, "\n", 1);
	return(0);
}
