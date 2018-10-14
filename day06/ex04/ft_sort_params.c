#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;
	
	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (++j < (ac -1))
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				tmp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = tmp;
			}
	}
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	
	i = 0;
	if (ac > 1)
		ft_sort_params(ac, av);
	if (ac > 1)
		while (++i < ac)
		{
			j = -1;
			while (av[i][++j])
				write(1, &av[i][j], 1);
			write(1, "\n", 1);
		}
	else
		write(1, "\n", 1);
	return(0);
}
