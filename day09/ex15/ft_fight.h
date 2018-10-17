#ifndef		FT_FIGHT_H
# define	FT_FIGHT_H

# define	KICK		("kick")
# define	PUNCH		("punch")
# define	HEADBUTT	("headbutt")

# include	<unistd.h>

void	ft_fight(t_perso *attacker, t_perso *defense, char *attack);

#endif