// #include	<stdlib.h>
// #include	<stdio.h>

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	e;

	e = ***a;
	***a = *b;
	*b = ****d;
	*******c = e;
	****d =  *******c;
}

// int		main()
// {
// 	int		***a;

// 	a = (int***)malloc(sizeof(int**));
// 	a[0] = (int**)malloc(sizeof(int*));
// 	a[0][0] = (int*)malloc(sizeof(int));
// 	a[0][0][0] = 1;

// 	int		*b;

// 	b = (int*)malloc(sizeof(int));
// 	b[0] = 2;

// 	int		*******c;

// 	c = (int*******)malloc(sizeof(int******));
// 	c[0] = (int******)malloc(sizeof(int*****));
// 	c[0][0] = (int*****)malloc(sizeof(int****));
// 	c[0][0][0] = (int****)malloc(sizeof(int***));
// 	c[0][0][0][0] = (int***)malloc(sizeof(int**));
// 	c[0][0][0][0][0] = (int**)malloc(sizeof(int*));
// 	c[0][0][0][0][0][0] = (int*)malloc(sizeof(int));
// 	c[0][0][0][0][0][0][0] = 3;

// 	int		****d;
	
// 	d = (int****)malloc(sizeof(int***));
// 	d[0] = (int***)malloc(sizeof(int**));
// 	d[0][0] = (int**)malloc(sizeof(int*));
// 	d[0][0][0] = (int*)malloc(sizeof(int));
// 	d[0][0][0][0] = 4;

// 	printf("a=%d\nb=%d\nc=%d\nd=%d\n\n", a[0][0][0], b[0], c[0][0][0][0][0][0][0], d[0][0][0][0]);
// 	ft_scrambler(a, b, c, d);
// 	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a[0][0][0], b[0], c[0][0][0][0][0][0][0], d[0][0][0][0]);
// 	return 0;
// }
