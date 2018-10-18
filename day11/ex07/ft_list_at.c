// #include	<stdio.h>
#include	"ft_list.h"

// void	ft_list_push_back(t_list **begin_list, void *data)
// {
// 	t_list	*next;
	
// 	next = *begin_list;
// 	if (next)
// 	{
// 		while (next->next)
// 			next = next->next;
// 		next->next = ft_create_elem(data);
// 	}
// 	else
// 		*begin_list = ft_create_elem(data);
// }

// t_list	*ft_list_push_params(int ac, char **av)
// {
// 	int		n;
// 	t_list	*new_list;

// 	new_list = 0;
// 	n = 0;
// 	while (n <= --ac)
// 		ft_list_push_back(&new_list, av[ac]);
// 	return (new_list);
// }

// void	ft_putlist(t_list *begin_list)
// {
// 	t_list	*next;

// 	next = begin_list;
// 	while (next->next)
// 	{
// 		printf("%s\n", (char*)next->data);
// 		next = next->next;
// 	}
// }

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return (0);
	if (!nbr)
		return (begin_list);
	return (ft_list_at(begin_list->next, nbr - 1));
}

// int		main(void)
// {	
// 	t_list* list = 0;
// 	printf("%p\n", ft_list_at(list, 0));
// 	printf("%p\n", ft_list_at(list, 1));
// 	printf("%p\n", ft_list_at(list, 100));
// 	list = ft_create_elem("asdf");
// 	printf("%s\n", (char*)(ft_list_at(list, 0)->data));
// 	printf("%p\n", ft_list_at(list, 1));
// 	list->next = ft_create_elem("qwer");
// 	list->next->next = ft_create_elem("zxcv");
// 	list->next->next->next = ft_create_elem("uiop");
// 	list->next->next->next->next = ft_create_elem("hjkl");
// 	printf("%s\n", (char*)(ft_list_at(list, 0)->data));
// 	printf("%s\n", (char*)(ft_list_at(list, 1)->data));
// 	printf("%s\n", (char*)(ft_list_at(list, 2)->data));
// 	printf("%s\n", (char*)(ft_list_at(list, 3)->data));
// 	printf("%s\n", (char*)(ft_list_at(list, 4)->data));
// 	printf("%p\n", ft_list_at(list, 5));
// 	printf("%p\n", ft_list_at(list, 100));
// }
