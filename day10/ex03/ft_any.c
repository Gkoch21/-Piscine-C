// #include	<stdlib.h>
// #include	<stdio.h>

// int		ft_test(char *str)
// {
// 	int		n;
	
// 	n = -1;
// 	while (str[++n])
// 		if (str[n] == 't')
// 			return (1);
// 	return (0);
// }

// int		ft_test2(char *str)
// {
// 	int		n;
	
// 	n = -1;
// 	while (str[++n])
// 		if (str[n] == 's')
// 			return (1);
// 	return (0);
// }

int		ft_any(char **tab, int(*f)(char*))
{
	int		n;

	n = -1;
	while (tab[++n])
		if (f(tab[n]))
			return (1);
	return (0);
}

// int		main(void)
// {
// 	char	*str[4];
// 	str[0] = (char*)malloc(sizeof(char)*3);
// 	str[0] = "ok\0"; 
// 	str[1] = (char*)malloc(sizeof(char)*4);
// 	str[1] = "kok\0"; 
// 	str[2] = (char*)malloc(sizeof(char)*2);
// 	str[2] = "t\0"; 
// 	str[3] = NULL;
// 	// printf("%s\n%s\n%s\n", str[0], str[1], str[2]);
// 	printf("%d\n", ft_any(str, ft_test));
// 	printf("%d\n", ft_any(str, ft_test2));
// 	return (0);
// }
