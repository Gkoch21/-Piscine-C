#include	<stdlib.h>
#include	<unistd.h>

// int		ft_count_word(char *str)
// {
// 	int		n;
// 	int		answer;

// 	n = 0;
// 	answer = 0;
// 	while (str[n])
// 	{
// 		while (((str[n] == '\t') || (str[n] == '\n') || (str[n] == ' ')) && str[n])
// 			n++;
// 		while (!((str[n] == '\t') || (str[n] == '\n') || (str[n] == ' ')) && str[n])
// 			n++;
// 		answer++;
// 	}
// 	return(answer);
// }

// void	ft_write_word(char *answer, char *str, int start, int end)
// {
// 	int		n;

// 	n = 0;
// 	while(start < end)
// 		answer[n++] = str[start++];
// 	answer[n] = '\0';
// }

// char	**ft_split_whitespaces(char *str)
// {
// 	char	**answer;
// 	int		start;
// 	int		j;
// 	int		n;

// 	answer = (char**)malloc(sizeof(char*) * (ft_count_word(str) + 1));
// 	j = 0;
// 	n = 0;
// 	while (str[n])
// 	{
// 		while (((str[n] == '\t') || (str[n] == '\n') || (str[n] == ' ')) && str[n])
// 			n++;
// 		start = n;
// 		while (!((str[n] == '\t') || (str[n] == '\n') || (str[n] == ' ')) && str[n])
// 			n++;
// 		answer[j] = (char*)malloc(sizeof(char) * (n - start + 1));
// 		ft_write_word(answer[j++], str, start, n);
// 	}
// 	answer[j] = NULL;
// 	return (&answer[0]);
// }

void ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = -1;
	while (tab[++i] != NULL)
	{
		j = -1;
		while(tab[i][++j])
			write(1, &tab[i][j], 1);
		write(1, "\n", 1);
	}
}

// int		main(void)
// {
// 	char	**res;

// 	res = ft_split_whitespaces(" NO YES ARG2 ARG3");
// 	ft_print_words_tables(res);
// 	write(1, "\n", 1);
// 	res = ft_split_whitespaces("asdf qwerty zxcv");
// 	ft_print_words_tables(res);
// 	write(1, "\n", 1);
// 	res = ft_split_whitespaces("s1   s2 \t\n\t\ns3");
// 	ft_print_words_tables(res);
// 	write(1, "\n", 1);
// 	return (0);
// }
