#include	<stdlib.h>
#include	<stdio.h>

int		ft_compact(char **tab, int length)
{
	int		i;
	int		j;

	i = 0;
	while (i < length)
	{
		while (tab[i])
			i++;
		j = i;
		length -= 1;
		while (j < length)
		{
			tab[j] = tab[j + 1];
			j++;
		}
	}
	return (length);
}

int		main(void)
{
	char	**str;
	int		n;

	str = (char**)malloc(sizeof(char*) * 5);
	n = 0;
	while (n < 5)
	{
		str[n] = (char*)malloc(sizeof(char));
		str[n][0] = 't';
		n++;
	}
	str[1] = NULL;
	str[3] = 0;

	int		t;
	t = ft_compact(str, 6);
	n = 0;
	while (n < t)
	{
		printf("%c\n", str[n][0]);
		n++;
	}
}