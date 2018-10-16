#include	"ft_ultimator.h"
#include	<stdlib.h>
// #include	<stdio.h>

void	ft_destroy(char ***factory)
{
	free(**factory);
	free(*factory);
	free(factory);
}

// void	ft_destroy_int(int ***factory)
// {
// 	free(**factory);
// 	free(*factory);
// 	free(factory);
// }

// int		main(void)
// {
// 	char	***a;

// 	a = (char***)malloc(sizeof(char**) * 2);
// 	a[0] = (char**)malloc(sizeof(char*) * 2);
// 	a[0][0] = (char*)malloc(sizeof(char) * 3);

// 	a[0][0][0] = 'a';
// 	a[0][0][1] = '\n';
// 	a[0][0][2] = '\0';
// 	printf("%s", a[0][0]);
// 	ft_destroy(a);
// 	printf("%s", a[0][0]);

// 	int ***i;

// 	i = (int***)malloc(sizeof(int**));
// 	i[0] = (int**)malloc(sizeof(int*));
// 	i[0][0] = (int*)malloc(sizeof(int));

// 	i[0][0][0] = 1;
// 	printf("%d\n", i[0][0][0]);
// 	ft_destroy_int(i);
// 	printf("%d\n", i[0][0][0]);

// 	return (0);
// }
