#include "ft_perso.h"
#include "ft_fight.h"

void		ft_putstr(char *str)
{
	int i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_fight(t_perso *attacker, t_perso *defense, char *attack)
{
	if ((attacker->life <= 0) || (defense->life <= 0))
		return ;
	if (attack[0] == 'k')
		defense->life -= 15;
	else if (attack[0] == 'p')
		defense->life -= 5;
	else if (attack[0] == 'h')
		defense->life -= 20;
	ft_putstr(attacker->name);
	ft_putstr(" does a judo ");
	ft_putstr(attack);
	ft_putstr(" on ");
	ft_putstr(defense->name);
	ft_putstr("\n");
	if (defense->life <= 0)
	{
		ft_putstr(defense->name);
		ft_putstr(" is dead.\n");
	}	
}