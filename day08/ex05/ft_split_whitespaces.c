#include	"ft_stock_par.h"

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
		if (!str[n])
			return (&answer[0]);
		while (!((str[n] == '\t') || (str[n] == '\n') || (str[n] == ' ')) && str[n])
			n++;
		answer[j] = (char*)malloc(sizeof(char) * (n - start + 1));
		ft_write_word(answer[j++], str, start, n);
	}
	answer[j] = NULL;
	return (&answer[0]);
}
