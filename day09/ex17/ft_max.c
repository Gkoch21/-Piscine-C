// #include	<stdio.h>

int		ft_max(int *tab, int length)
{
	int		n;

	n = tab[0];
	while (--length >= 0)
		if (tab[length] > n)
			n = tab[length];
	return (n);
}

// int		main(void)
// {
// 	int		test[5];

// 	test[0] = 23;
// 	test[1] = 123;
// 	test[2] = 1;
// 	test[3] = 10;
// 	test[4] = 30;
// 	printf("%d\n", ft_max(test, 5));
// 	return 0;
// }
