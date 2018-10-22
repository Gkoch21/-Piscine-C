// #include	<stdio.h>
#include	"ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*next;
	
	next = *begin_list;
	if (next)
	{
		while (next->next)
			next = next->next;
		next->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

// t_list *ft_list_push_params(int ac, char **av)
// {
// 	int		n;
// 	t_list	*new_list;

// 	new_list = 0;
// 	n = 1;
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
// 	printf("%s\n", (char*)next->data);
// }

// void	ft_putstr(char *str)
// {
// 	printf("%s, ",str);
// }

// void ft_list_foreach(t_list *begin_list, void (*f)(void *))
// {
// 	t_list	*next;

// 	next = begin_list;
// 	while (next->next)
// 	{
// 		(*f)(next->data);
// 		next = next->next;
// 	}
// 	f(next->data);
// }

// int		ft_strcmp(char *s1, char *s2)
// {
// 	int i;

// 	i = 0;
// 	while (s1[i] != '\0' || s2[i] != '\0')
// 	{
// 		if (s1[i] != s2[i])
// 			return (s1[i] - s2[i]);
// 		i++;
// 	}
// 	return (0);
// }

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{

    t_list	*list;
	char	*str;

	str = NULL;
	list = *begin_list;
	ft_list_push_back(begin_list, data);
	while (list->next)
	{
		if ((*cmp)(list->data, (list->next)->data) > 0)
		{
			str = list->data;
			list->data = (list->next)->data;
			(list->next)->data = str;
			list = *begin_list;
		}
		else
			list = list->next;
	}
}

// int		main(int ac, char **av)
// {
// 	t_list	*test;
// 	t_list	*test2;
// 	char	*str[4];
	
// 	str[0] = NULL;
// 	str[1] = (char*)malloc(sizeof(char) * 5);
// 	str[1] = "test\0";
// 	str[2] = (char*)malloc(sizeof(char) * 5);
// 	str[2] = "test\0";
// 	str[3] = (char*)malloc(sizeof(char) * 5);
// 	str[3] = "test\0";

// 	if (ac > 1)
// 		test = ft_list_push_params(ac, av);
// 	ft_putlist(test);
// 	printf("\n");
// 	test2 = ft_list_push_params(4, str);
// 	ft_putlist(test2);
// 	printf("\n");
// 	ft_sorted_list_insert(&test, "5", ft_strcmp);
// 	ft_sorted_list_insert(&test, "7", ft_strcmp);
// 	ft_sorted_list_insert(&test, "0", ft_strcmp);
// 	ft_putlist(test);
// 	return (0);
// }
