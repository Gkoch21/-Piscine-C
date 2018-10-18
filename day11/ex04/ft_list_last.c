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

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*next;
	
	next = begin_list;
	while (next->next)
		next = next->next;
	return (next);
}

// int		main(void)
// {
// 	char	test[] = "test";
// 	char	test2[] = "test2";
// 	t_list	*test_list = 0;
// 	t_list	*last;

// 	ft_list_push_back(&test_list, test);
// 	ft_list_push_back(&test_list, test2);
// 	last = ft_list_last(test_list);
// 	printf("%s\n", (char*)last->data);
// 	ft_list_push_back(&test_list, "test3");
// 	last = ft_list_last(test_list);
// 	printf("%s\n", (char*)last->data);
// 	return 0;
// }
