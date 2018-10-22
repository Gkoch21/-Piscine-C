#include	"../includes/ft.h"

void	ft_putstr(char *str)
{
	int		n;
	
	n = -1;
	while (str[++n])
		write(2, &str[n], 1);
}

void	ft_cat(char *str)
{
	int		file;
	char	*buffer[2];

	file = open(str, O_RDONLY);
	while (read(file, buffer, BUF_SIZE))
		write(2, &buffer[0], 1);
}

int		main(int ac, char **av)
{
	if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else if (ac < 2)
		ft_putstr("File name missing.\n");
	else
		ft_cat(av[1]);
	return (0);
}
