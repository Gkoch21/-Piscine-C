// #include	<stdio.h>
#include	<stdlib.h>

void	ft_join_strs(char **tab, char *sep, char *answer)
{
	int		i;
	int		j;
	int		d;

	i = -1;
	d = 0;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			answer[j + d] = tab[i][j];
		d += j;
		j = -1;
		if (tab[1 + i])
			while (sep[++j])
				answer[d + j] = sep[j];
		d += j;
	}
}

char	*ft_join(char **tab, char *sep)
{
	int		n;
	int		i;
	int		j;
	char	*answer;

	n = 0;
	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			n++;
	}
	j = 0;
	while (sep[j])
		j++;
	answer = (char*)malloc(sizeof(char) * (n + (j * i -1)));
	ft_join_strs(tab, sep, answer);
	return (answer);
}

// int		main(void)
// {
// 	char	sep[] = " - ";
// 	char	s1[] = "str1";
// 	char	s2[] = "str2";
// 	char	s3[] = "str3\n";
// 	char	*str[4] = {s1, s2, s3, NULL};

// 	printf("%s", ft_join(str, sep));
// 	return (0);
// }
