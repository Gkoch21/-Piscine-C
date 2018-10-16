// #include	<stdio.h>
#include	"ft_perso.h"

int		main()
{
	t_perso		donnie;
	donnie.name = strdup("Donnie");
	donnie.life = 100.0;
	donnie.age = 24;
	donnie.profession = SAVE_AUSTIN_POWERS;
	(void)donnie;
	// printf("%s\n%0.1lf\n%d\n%s\n", donnie.name, donnie.life, donnie.age, donnie.profession);
	return (0);
}