#include	<stdio.h>
#include	"ft_perso.h"



int		main()
{
	t_perso		**result;
	int			n;

	result = ft_decrypt("11|test;12|test 1;15|2222");
	n = -1;
	while (result[++n] != 0)
		printf("%d-%s\n", result[n]->age, result[n]->name);
	return 0;
}