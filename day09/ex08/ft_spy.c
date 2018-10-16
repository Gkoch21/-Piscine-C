#include	<unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	write(1, str++, 1);
}

int		ft_spy(char *argv, char *str)
{
	int		n;
	int		j;

	n = -1;
	while (argv[++n])
		if ((argv[n] >= 65) && (argv[n] <= 90))
			argv[n] += 32;
	n = -1;
	j = 0;
	while (argv[++n + j])
		if (!str[n])
			return (0);
		else if (argv[n + j] == 32)
		{
			j++;
			continue ;
		}
		else if (str[n] != argv[n + j])
			return 0;
	if (str[n] != argv[n + j])
		return 0;
	return 1;
}

int		main(int argc, char **argv)
{
	int		n;
	char	str1[] = "president";
	char	str2[] = "attack";
	char	str3[] = "powers";

	n = 0;
	if (argc > 1)
		while (argc > ++n)
			if (ft_spy(argv[n], str1) ||
				ft_spy(argv[n], str2) ||
				ft_spy(argv[n], str3))
			{
				ft_putstr("Alert!!!");
				break ;
			}
	ft_putstr("\n");
	return 0;
}
