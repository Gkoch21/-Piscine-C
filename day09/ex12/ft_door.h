#ifndef		FT_DOOR_H
# define	FT_DOOR_H

# include	<unistd.h>
# include	<stdlib.h>

# define	OPEN	(1)
# define	CLOSE	(0)

typedef enum	e_bool
{
	TRUE	=	1,
	FALSE	=	0
}				t_bool;

typedef struct	s_door
{
	int			state;
}				t_door;

t_bool			open_door(t_door *door);
t_bool			close_door(t_door *door);
t_bool			is_door_open(t_door *door);
t_bool			is_door_close(t_door *door);

#endif