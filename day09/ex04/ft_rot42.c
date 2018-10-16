// #include	<stdio.h>

char	*ft_rot42(char *str)
{
	int		n;

	n = -1;
	while (str[++n])
		if (str[n] >= 97 && (str[n] <= 122))
		{
			if (str[n] >= 112)
				str[n] -= 15;
			else
				str[n] += 10;
		}
		else if (str[n] >= 65 && (str[n] <= 90))
		{
			if (str[n] >= 80)
				str[n] -= 15;
			else
				str[n] += 10;
		}
	return (&str[0]);
}

// int		main(void)
// {
// 	char	str[] = "Pp\n";
// 	printf("%s", ft_rot42(str));
// 	return (0);
// }
