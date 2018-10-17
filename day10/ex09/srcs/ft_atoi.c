int		ft_atoi(char *str)
{
	int		n;
	int		flag;
	int		answer;

	n = 0;
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
