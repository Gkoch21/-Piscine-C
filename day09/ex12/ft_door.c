#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

t_bool			open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
	return (TRUE);
}

t_bool			close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
	return (TRUE);
}

t_bool			is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	if (door->state == OPEN)
		return (TRUE);
	else
		return (FALSE);
}

t_bool			is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	if (door->state == CLOSE)
		return (TRUE);
	else
		return (FALSE);
}