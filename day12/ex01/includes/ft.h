#ifndef		FT_H
# define	FT_H

# define	BUF_SIZE (1)

#include	<unistd.h>
# include	<fcntl.h>
# include	<stdio.h>
# include	<errno.h>

char						*pr_name;
int							ft_display_custom_error(int eno, char *argv);
#endif