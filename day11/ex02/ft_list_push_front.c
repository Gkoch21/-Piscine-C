// #include	<stdio.h>
#include	"ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*next;
	
	next = ft_create_elem(data);
	next->next = *begin_list;
	*begin_list = next;
}

// int		main(void)
// {
// 	char	test[] = "test";
// 	char	test2[] = "test2";
// 	t_list	*test_list = 0;

// 	ft_list_push_front(&test_list, test);
// 	ft_list_push_front(&test_list, test2);
// 	printf("%s\n", (char*)test_list->data);
// 	test_list = test_list->next;
// 	printf("%s\n", (char*)test_list->data);
// 	return 0;
// }
