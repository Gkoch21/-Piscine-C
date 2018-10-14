#include	<stdio.h>
#include	<stdlib.h>

int		ft_count_word(char *str)
{
	int		n;
	int		answer;

	n = 0;
	answer = 0;
	while (str[n])
	{
		while (((str[n] == '\t') || (str[n] == '\n') || (str[n] == ' ')) && str[n])
			n++;
		while (!((str[n] == '\t') || (str[n] == '\n') || (str[n] == ' ')) && str[n])
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

char	**ft_split_whitespaces(char *str)
{
	char	**answer;
	int		start;
	int		j;
	int		n;

	answer = (char**)malloc(sizeof(char*) * (ft_count_word(str) + 1));
	j = 0;
	n = 0;
	while (str[n])
	{
		while (((str[n] == '\t') || (str[n] == '\n') || (str[n] == ' ')) && str[n])
			n++;
		start = n;
		while (!((str[n] == '\t') || (str[n] == '\n') || (str[n] == ' ')) && str[n])
			n++;
		answer[j] = (char*)malloc(sizeof(char) * (n - start + 1));
		ft_write_word(answer[j++], str, start, n);
	}
	answer[j] = NULL;
	return (&answer[0]);
}

int		main(void)
{
	char	**str;
	int		n;

	str = ft_split_whitespaces(" NO YES ARG2 ARG3");
	n = -1;
	while(++n < 4)
		printf("%s\n", str[n]);
	printf("\n");

	char** res;

	for (res = ft_split_whitespaces("asdf qwerty zxcv"); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");
	for (res = ft_split_whitespaces("s1   s2 \t\n\t\ns3"); *res != 0; res++)
		printf("'%s',", *res);
	printf("\n");
	return (0);
}
