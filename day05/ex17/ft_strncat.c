// #include <stdio.h>
// #include <string.h>

char		*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		j;

	nb -= 1;
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && ((nb - 1) > j))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char	str[100];
// 	char	str2[100];

// 	strncat( str, "Эти ", 5 );
// 	strncat( str, "строки ", 5 );
// 	strncat( str, "объединены " , 5   );
// 	strncat( str, "операцией "  , 5    );
// 	strncat( str, "конкатенации." , 5);

// 	ft_strncat( str2, "Эти ", 5 );
// 	ft_strncat( str2, "строки "         , 5 );
// 	ft_strncat( str2, "объединены "  , 5  );
// 	ft_strncat( str2, "операцией "  , 5    );
// 	ft_strncat( str2, "конкатенации.", 5 );

// 	printf("%s\n%s\n", str, str2);
// 	return (0);
// }
