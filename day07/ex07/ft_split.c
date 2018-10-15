// #include	<stdio.h>
#include	<stdlib.h>

int		ft_check_char(char c, char *charset)
{
	int		n;

	n = 0;
	while (charset[n])
		if (charset[n++] == c)
			return (1);
	return (0);
}

int		ft_count_word(char *str, char *charset)
{
	int		n;
	int		answer;

	n = 0;
	answer = 0;
	while (str[n])
	{
		while (ft_check_char(str[n], charset) && str[n])
			n++;
		while (!ft_check_char(str[n], charset) && str[n])
			n++;
		answer++;
	}
	return(answer);
}

void	ft_write_word(char *answer, char *str, int start, int end)
{
	int		n;

	n = 0;
	while(start < end)
		answer[n++] = str[start++];
	answer[n] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**answer;
	int		start;
	int		j;
	int		n;

	answer = (char**)malloc(sizeof(char*) * (ft_count_word(str, charset) + 1));
	j = 0;
	n = 0;
	while (str[n])
	{
		while (ft_check_char(str[n], charset))
			n++;
		start = n;
		if (!str[n])
			return (&answer[0]);
		while (!ft_check_char(str[n], charset) && str[n])
			n++;
		answer[j] = (char*)malloc(sizeof(char) * (n - start + 1));
		ft_write_word(answer[j++], str, start, n);
	}
	answer[j] = NULL;
	return (&answer[0]);
}

// int		main(void)
// {
// 	char	**res;
// 	for (res = ft_split("asdf qwerty zxcv", " "); *res != 0; res++)
// 		printf("'%s',", *res);
// 	printf("\n");
// 	for (res = ft_split("s1_s2___++++___s3", "_+"); *res != 0; res++)
// 		printf("'%s',", *res);
// 	printf("\n");
// 	for (res = ft_split("++++lol_+_+hi____++++___", "_+"); *res != 0; res++)
// 		printf("'%s',", *res);
// 	printf("\n");
// 	for (res = ft_split("NOPENOPENOPE", "NOPE"); *res != 0; res++)
// 		printf("'%s',", *res);
// 	printf("\n");
// 	for (res = ft_split("", "NOPE"); *res != 0; res++)
// 		printf("'%s',", *res);
// 	printf("\n");
// 	return (0);
// }
