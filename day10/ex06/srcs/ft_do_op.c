#include	"../includes/ft.h"

void	ft_do_op(int i1, char *str, int i2)
{
	if ((str[0] == '-') && (str[1] == '\0'))
		ft_putnbr(i1 - i2);
	else if ((str[0] == '+') && (str[1] == '\0'))
		ft_putnbr(i1 + i2);
	else if ((str[0] == '/') && (str[1] == '\0'))
		if (i2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(i1 / i2);
	else if ((str[0] == '%') && (str[1] == '\0'))
		if (i2 == 0)
			write(1, "Stop : modulo by zero", 22);
		else
			ft_putnbr(i1 / i2);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
