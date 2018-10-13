// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
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

// 	strcat( str, "Эти " );
// 	strcat( str, "строки "          );
// 	strcat( str, "объединены "    );
// 	strcat( str, "операцией "      );
// 	strcat( str, "конкатенации." );

// 	ft_strcat( str2, "Эти " );
// 	ft_strcat( str2, "строки "          );
// 	ft_strcat( str2, "объединены "    );
// 	ft_strcat( str2, "операцией "      );
// 	ft_strcat( str2, "конкатенации." );

// 	printf("%s\n%s\n", str, str2);
// 	return (0);
// }
