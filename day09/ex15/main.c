#include "ft_perso.h"
#include "ft_fight.h"

int main()
{
	t_perso		donnie_matrix;
	donnie_matrix.name = "Donnie Matrix";
	donnie_matrix.life = 100.0;

	t_perso		frau_farbissina;
	frau_farbissina.name = "Frau Farbissina";
	frau_farbissina.life = 100.0;

	ft_fight(&donnie_matrix, &frau_farbissina, KICK);
	ft_fight(&frau_farbissina, &donnie_matrix, PUNCH);
	ft_fight(&donnie_matrix, &frau_farbissina, HEADBUTT);
	ft_fight(&frau_farbissina, &donnie_matrix, PUNCH);
	ft_fight(&donnie_matrix, &frau_farbissina, HEADBUTT);
	ft_fight(&frau_farbissina, &donnie_matrix, PUNCH);
	ft_fight(&donnie_matrix, &frau_farbissina, HEADBUTT);
	ft_fight(&frau_farbissina, &donnie_matrix, PUNCH);
	ft_fight(&donnie_matrix, &frau_farbissina, HEADBUTT);
	ft_fight(&donnie_matrix, &frau_farbissina, KICK);
	ft_fight(&frau_farbissina, &donnie_matrix, PUNCH);
	ft_fight(&donnie_matrix, &frau_farbissina, HEADBUTT);
	ft_fight(&frau_farbissina, &donnie_matrix, PUNCH);
	ft_fight(&donnie_matrix, &frau_farbissina, HEADBUTT);
	ft_fight(&frau_farbissina, &donnie_matrix, PUNCH);
	ft_fight(&donnie_matrix, &frau_farbissina, HEADBUTT);
	ft_fight(&frau_farbissina, &donnie_matrix, PUNCH);
	ft_fight(&donnie_matrix, &frau_farbissina, HEADBUTT);
}