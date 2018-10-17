#include	"../includes/ft.h"

int		ft_add(int nbr1, int nbr2)
{
	return (nbr1 + nbr2);
}

int		ft_sub(int nbr1, int nbr2)
{
	return (nbr1 - nbr2);
}

int		ft_mul(int nbr1, int nbr2)
{
	return (nbr1 * nbr2);
}

int		ft_div(int nbr1, int nbr2)
{
	return (nbr2 != 0 ? nbr1 / nbr2 : 
	write(1, "Stop : division by zero", 23));
}

int		ft_mod(int nbr1, int nbr2)
{
	return (nbr2 != 0 ? nbr1 % nbr2 : 
	write(1, "Stop : modulo by zero", 22));
}

int			ft_usage(int a, int b)
{
	write(1, "error : only [ - + * / % ] are accepted.", 39);
	return (a + b);
}
