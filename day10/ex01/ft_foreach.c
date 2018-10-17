// #include	<stdio.h>

// void	ft_plus(int n)
// {
// 	printf("%d", n);
// 	printf("\n");
// }

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

// int		main(void)
// {
// 	int		test[3] = {0, 1, 2};
// 	ft_foreach(test, 3, ft_plus);
// 	return (0);
// }