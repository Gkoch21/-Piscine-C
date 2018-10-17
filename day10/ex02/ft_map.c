// #include	<stdio.h>
// #include	<stdlib.h>

// int		ft_plus(int n)
// {
// 	return (n - 10);
// }

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int		*answer;
	int		n;

	if (!(answer = (int*)malloc(sizeof(int) * length - 1)))
		return ;
	n = -1;
	while (++n < length)
		answer[n] = f(tab[n]);
	return (answer);
}

// int		main(void)
// {
// 	int		test[3] = {0, 1, 2};
// 	int		n;

// 	n = -1;
// 	while (++n < 3)
// 		printf("%d", test[n]);
// 	printf("\n");

// 	int		*test2 = ft_map(test, 3, ft_plus);

// 	n = -1;
// 	while (++n < 3)
// 		printf("%d", test2[n]);
// 	printf("\n");
// 	return (0);
// }
