// #include	<stdlib.h>
// #include	<stdio.h>

// int		ft_strcmp(char *s1, char *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s1[i] != '\0' || s2[i] != '\0')
// 	{
// 		if (s1[i] != s2[i])
// 			return (s1[i] - s2[i]);
// 		i++;
// 	}
// 	return (0);
// }

void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{
	int		n;
	int		i;
	int		j;
	char	*tmp;

	n = 0;
	while (tab[n])
		n++;
	
	i = -1;
	while (++i < n)
	{
		j = -1;
		while (++j < (n -1))
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}
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
// 	ft_advanced_sort_wordtab(str, ft_strcmp);
// 	printf("%s-%s-%s\n", str[0], str[1], str[2]);
// 	return (0);
// }
