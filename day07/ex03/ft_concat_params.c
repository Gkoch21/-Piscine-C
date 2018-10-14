// #include	<stdio.h>
#include	<stdlib.h>

int		ft_count_malloc(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (--argc != 0)
	{
		j = 0;
		while (argv[argc][j])
			j++;
		i += j;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		sum;

	str = (char*)malloc(sizeof(char) * (ft_count_malloc(argc, argv) + 1));
	i = 0;
	sum = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			str[sum + j] = argv[i][j];
		sum += j;
	}
	str[sum] = '\0';
	return (str);
}

// int		main(int argc, char **argv)
// {
// 	printf("%s\n", ft_concat_params(argc, argv));
// 	return (0);
// }
