#include	"ft_perso.h"
#include	<stdio.h>

int			ft_str_is_printable(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (str[n] < 32 || str[n] >= 127)
			return (1);
	return (0);
}

int			ft_lenpers(char *str)
{
	int		answer;
	int		n;

	answer = 0;
	n = 0;
	while (str[n])
	{
		while (str[n] != '|' && str[n])
			if (str[++n] == ';')
				return (0);
		while (str[n] != ';' && str[n])
			if (str[++n] == '|')
				return (0);
		answer++;
		n++;
	}
	return (++answer);
}

int			ft_atoi(char *str, int start)
{
	int		n;
	int		flag;
	int		answer;

	n = start;
	flag = 1;
	answer = 0;
	while (str[n] == 32 || (str[n] >= 0 && str[n] <= 13))
		n++;
	if (str[n] == '-')
		flag = -1;
	if (str[n] == '-' || str[n] == '+')
		n++;
	while (str[n] && str[n] >= '0' && str[n] <= '9')
	{
		answer *= 10;
		answer += (int)(str[n] - '0');
		n++;
	}
	return (answer * flag);
}

char		*ft_get_name(char *str, int n)
{
	int		i;
	int		j;
	char	*answer;

	i = 0;
	j = n;
	while (str[j] != ';' && str[j++])
		i++;
	if (!(answer = (char*)malloc(sizeof(char) * ++i)))
		return NULL;
	i = 0;
	while (str[n] != ';' && str[n])
		answer[i++] = str[n++];
	answer[i] = '\0';
	return (answer);
}

t_perso		**ft_decrypt(char *str)
{
	int			n;
	int			i;
	t_perso		**result;
	t_perso		*thisperson;


	result = malloc(sizeof(t_perso*) * ft_lenpers(str));
	if (ft_str_is_printable(str) && !result)
		return NULL;
	n = 0;
	i = 0;
	while (str[n])
	{
		thisperson = malloc(sizeof(t_perso));
		thisperson[0].age = ft_atoi(str, n);
		while (str[n] != '|' && str[n])
			n++;
		n++;
		thisperson[0].name = ft_get_name(str, n);
		result[i++] = thisperson;
		while (str[n] != ';' && str[n])
			n++;
		if (str[n])
			n++;
	}
	result[i] = NULL;
	return (result);
}
