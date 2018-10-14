#include	<stdlib.h>
// #include	<stdio.h>

int		*ft_range(int min, int max)
{
	int		*n;
	int		i;

	i = 0;
	if ((min >= max))
	{
		if (!(n = (int*)malloc(sizeof(int))))
			return (NULL);
		n[0] = 0;
		return (n);
	}
	while ((i + min) <= max)
		i++;
	if (!(n = (int*)malloc(sizeof(int) * i)))
		return (NULL);
	i = 0;
	while (min <= max)
		n[i++] = min++;
	return (n);
}

// int		main(void)
// {
// 	int* res;
// 	int i;
// 	res = ft_range(5, 10);
// 	for (i = 0; i < 5; i++)
// 		printf("%d,", res[i]);
// 	printf("\n");

// 	res = ft_range(-20, -15);
// 	for (i = 0; i < 5; i++)
// 		printf("%d,", res[i]);
// 	printf("\n");

// 	res = ft_range(100, 101);
// 	for (i = 0; i < 1; i++)
// 		printf("%d,", res[i]);
// 	printf("\n");

// 	res = ft_range(10, 5);
// 	for (i = 0; i < 1; i++)
// 		printf("%d,", res[i]);
// 	printf("\n");
// 	return (0);
// }
