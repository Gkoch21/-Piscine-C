#include	"ft_stock_par.h"

char	*ft_strdup(char *src)
{
	int		n;
	char	*strdup;

	n = 0;
	while (src[n])
		n++;
	strdup = (char*)malloc(sizeof(char) * n);
	n = -1;
	while (src[++n])
		strdup[n] = src[n];
	strdup[n] = '\0';
	return (strdup);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par		*answer;
	int				i;
	int				j;

	if (!(answer = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	i = -1;
	while(++i < ac)
	{
		j = 0;
		while(av[i][j])
			j++;
		answer[i].size_param = j;
		answer[i].str = av[i];
		answer[i].copy = ft_strdup(av[i]);
		answer[i].tab = ft_split_whitespaces(av[i]);
	}
	answer[i].str = 0;
	return (answer);
}
