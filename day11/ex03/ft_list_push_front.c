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

int		ft_list_size(t_list *begin_list)
{
	t_list	*next;
	int		n;
	
	n = 0;
	next = begin_list;
	if (next)
	{
		while (next->next)
		{
			next = next->next;
			n++;
		}
		return (++n);
	}
		return (n);

}

// int		main(void)
// {
// 	char	test[] = "test";
// 	char	test2[] = "test2";
// 	t_list	*test_list = 0;
// 	t_list	*next;

// 	printf("%d\n", ft_list_size(test_list));
// 	ft_list_push_back(&test_list, test);
// 	ft_list_push_back(&test_list, test2);
// 	printf("%s\n", (char*)test_list->data);
// 	next = test_list->next;
// 	printf("%s\n", (char*)next->data);
// 	printf("%d\n", ft_list_size(test_list));
// 	ft_list_push_back(&test_list, "test3");
// 	next = next->next;
// 	printf("%s\n", (char*)next->data);
// 	printf("%d\n", ft_list_size(test_list));
// 	return 0;
// }
