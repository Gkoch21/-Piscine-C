#ifndef		FT_STOCK_PAR_H
# define	FT_STOCK_PAR_H

typedef struct	s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;

#include	<stdlib.h>
#include	<unistd.h>

char				**ft_split_whitespaces(char *str);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

#endif