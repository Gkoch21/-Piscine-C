#include	<stdio.h>
#include	"ft_stock_par.h"

int main(int argc, char** argv)
{
	if (argc == 0)
		return 1;
	struct s_stock_par* params = ft_param_to_tab(argc, argv);
	while (params->str != 0)
	{
		printf("%d,%s,%s, is_duped? %d\n", params->size_param, params->str, params->copy, params->str != params->copy);
		char** words = params->tab;
		while (*words != 0)
		{
			printf("'%s',", *words);
			words++;
		}
		printf("\n");
		params++;
	}
}
