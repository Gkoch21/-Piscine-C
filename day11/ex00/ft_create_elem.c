#include	"ft_list.h"
// #include	"stdio.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

// int		main(void)
// {
// 	char	test[] = "test";
// 	t_list	*test_list;

// 	test_list = ft_create_elem(test);
// 	printf("%s\n", (char*)test_list->data);

// 	t_list* item = ft_create_elem("asdf");
// 	printf("%s\n", (char*)item->data);
// 	printf("%p\n", item->next);
// 	return 0;
// }

