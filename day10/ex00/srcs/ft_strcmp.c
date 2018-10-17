// #include	<stdio.h>
// #include	<string.h>
#include	"../includes/ft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int		main(void)
// {
// 	printf("%d\n", ft_strcmp("tes", "test"));
// 	printf("%d\n\n", strcmp("tes", "test"));
// 	printf("%d\n", ft_strcmp("tast", "test"));
// 	printf("%d\n\n", strcmp("tast", "test"));
// 	printf("%d\n", ft_strcmp("tast", "tes"));
// 	printf("%d\n\n", strcmp("tast", "tes"));
// 	printf("%d\n", ft_strcmp("", ""));
// 	printf("%d\n\n", strcmp("", ""));
// 	return (0);
// }
