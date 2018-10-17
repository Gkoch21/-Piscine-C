#ifndef		FT_H
# define	FT_H


typedef int		(*t_s_opp)(int, int);

typedef struct	s_opp
{
	char	*op;
	t_s_opp	func;
}				t_opp;

#include	<unistd.h>

int		ft_add(int nbr1, int nbr2);
int		ft_sub(int nbr1, int nbr2);
int		ft_mul(int nbr1, int nbr2);
int		ft_div(int nbr1, int nbr2);
int		ft_mod(int nbr1, int nbr2);
int		ft_usage(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_do_op(int i1, char *str, int i2);

#endif