#include <unistd.h>

int		main(int ac, char **av)
{
	int		n;

	n = -1;
	if (ac)
		while (av[0][++n])
			write(1, &av[0][n], 1);
	write(1, "\n", 1);
	return(0);
}
