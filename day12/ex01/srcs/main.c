#include	"../includes/ft.h"
#include	<stdio.h>

void	ft_putstr(const char *str)
{
	int		n;
	
	n = -1;
	while (str[++n])
		write(2, &str[n], 1);
}

const char	*ft_strerror(int errnum)
{
	extern const char* const	strerror_r[];
	extern int					_sys_nerr;

	if (errnum < 0)
		errnum = -errnum;
	if (errnum < _sys_nerr)
	{
		return (strerror_r[errnum]);
	}
	return ("Unknown error");
}


int			ft_display_custom_error(int eno, char *argv)
{
	ft_putstr(pr_name);
	ft_putstr(": ");
	ft_putstr(argv);
	ft_putstr(": ");
	ft_putstr(ft_strerror(eno));
	ft_putstr("\n");
	return (0);
}

void	ft_cat(char *str)
{
	int		file;
	char	buffer;

	file = open(str, O_RDWR);
	if (str[0] && file > 0)
		while (read(file, &buffer, 1))
			write(1, &buffer, 1);
	else
		ft_display_custom_error(errno, str);
	close(file);
}

void	ft_setname(char *name)
{
	pr_name = name;
	while (*name)
	{
		if(*name == '/')
			pr_name = name + 1;
		name++;
	}
}

int		main(int ac, char **av)
{
	int		n;
	char	buffer;

	n = 0;
	ft_setname(av[n]);
	if (ac == 1)	
		while (read(0, &buffer, 1))
			write(1, &buffer, 1);
	else if (ac > 1)
		while (++n < ac)
			ft_cat(av[n]);
	else
		write(2, "\n", 1);
	return (0);
}

