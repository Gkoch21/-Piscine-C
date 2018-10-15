#include	<stdio.h>
#include	"ft_stock_par.h"

int main(int argc, char** argv)
{
	if (argc == 0)
		return 1;
	struct s_stock_par* params = ft_param_to_tab(argc, argv);
	ft_show_tab(params);
}
