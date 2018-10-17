// #include	<stdlib.h>
// #include	<stdio.h>

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
	
	i = -1;
	while (++i < ac)
	{
		j = -1;
		while (++j < (ac -1))
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
			{
				
				tmp = av[j];
				av[j] = av[j + 1];
				av[j + 1] = tmp;
			}
		}
	}
}

void	ft_sort_wordtab(char **tab)
{
	int		n;

	n = 0;
	while (tab[n])
		n++;
	ft_sort_params(n, tab);
}

// int		main(void)
// {
// 	char	*str[4];
// 	str[0] = (char*)malloc(sizeof(char)*3);
// 	str[0] = "bb\0"; 
// 	str[1] = (char*)malloc(sizeof(char)*4);
// 	str[1] = "cc\0"; 
// 	str[2] = (char*)malloc(sizeof(char)*2);
// 	str[2] = "aa\0"; 
// 	str[3] = NULL;
// 	printf("%s-%s-%s\n", str[0], str[1], str[2]);
// 	printf("\n");
// 	ft_sort_wordtab(str);
// 	printf("%s-%s-%s\n", str[0], str[1], str[2]);
// 	return (0);
// }
