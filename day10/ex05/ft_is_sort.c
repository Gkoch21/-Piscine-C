// #include	<stdio.h>

// int		ft_test(int i1, int i2)
// {
// 	return (i2 - i1);
// }

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int		n;

	n = -1;
	while (++n < (length - 1))
		if (f(tab[n], tab[n + 1]) < 0)
			return (0);
	return (1);
}

// int		main(void)
// {
// 	int		test[5] = {0, 1, 2, 3, 4};

// 	printf("%d\n", ft_is_sort(test, 5, ft_test));

// 	int		test2[5] = {1, 2, 3, 4, 0};

// 	printf("%d\n", ft_is_sort(test2, 5, ft_test));
// 	return (0);
// }
