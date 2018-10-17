// #include	<stdio.h>

int		ft_not_similar(int *tab, int length, int n)
{
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	while (i < length)
	{
		if (tab[i] == n)
			flag = 1;
		i++;
	}
	if (flag)
		n = ft_not_similar(tab, length, (n + 1));
	return (n);
}

int		ft_unmatch(int *tab, int length)
{
	int		i;
	int		j;
	int		flag;
	int		*check;

	flag = ft_not_similar(tab, length, 2);
	check = tab;
	i = 0;
	while (i < length)
	{
		j = -1;
		while(++j < length)
			if (check[i] == check[j] && (check[j] != flag)
				&& (j != i))
			{
				check[i] = flag;
				check[j] = flag;
			}
		i++;
	}
	i = -1;
	while (++i < length)
		if (check[i] != flag)
			return(check[i]);
	return (0);
}

// int		main(void)
// {
// 	int		test[9] = {1, 1, 2, 4, 3, 4, 2, 4, 3};
// 	printf("%d\n", ft_unmatch(test, 9));
// 	int		test2[7] = {1, 1, 2, 3, 4, 3, 4};
// 	printf("%d\n", ft_unmatch(test2, 7));
// 	int		test3[9] = {1, 1, 2, 4, 3, 4, 2, 3, 4};
// 	printf("%d\n", ft_unmatch(test3, 9));
// 	return (0);
// }
