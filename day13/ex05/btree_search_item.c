#include "ft_btree.h"

// void	ft_putstr(char *str)
// {
// 	int		n;
	
// 	n = -1;
// 	while (str[++n])
// 		write(2, &str[n], 1);
// 	write(1, "\n", 1);
// }

// int		ft_atoi(char *str)
// {
// 	int		n;
// 	int		flag;
// 	int		answer;

// 	n = 0;
// 	flag = 1;
// 	answer = 0;
// 	while (str[n] == 32 || (str[n] >= 0 && str[n] <= 13))
// 		n++;
// 	if (str[n] == '-')
// 		flag = -1;
// 	if (str[n] == '-' || str[n] == '+')
// 		n++;
// 	while (str[n] && str[n] >= '0' && str[n] <= '9')
// 	{
// 		answer *= 10;
// 		answer += (int)(str[n] - '0');
// 		n++;
// 	}
// 	return (answer * flag);
// }

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	void	*out;

	out = NULL;
	if (root)
	{
		out = btree_search_item(root->left, data_ref, cmpf);
		if (!out && cmpf(root->item, data_ref))
			out = root->item;
		if (!out)
			out = btree_search_item(root->right, data_ref, cmpf);
	}
	return (out);
}

// int		ft_equally(void *s1, void *s2)
// {
// 	if (ft_atoi(s1) == ft_atoi(s2))
// 		return (1);
// 	else
// 		return (0);
// }

// int		ft_comparison(void *s1, void *s2)
// {
// 	if (ft_atoi(s1) >= ft_atoi(s2))
// 		return (1);
// 	else
// 		return (0);
// }

// int		ft_strstr(void *s1, void *s2)
// {
// 	int		i;
// 	int		j;
// 	char	*str;
// 	char	*to_find;

// 	str		= (char *)s1;
// 	to_find	= (char *)s2;
// 	i = 0;
// 	if (to_find[0] == '\0')
// 		return (1);
// 	while(str[i])
// 	{
// 		j = 0;
// 		if (str[i] == to_find[j])
// 		{
// 			while(to_find[j] && (to_find[j] == str[i + j]))
// 				j++;
// 			if (!to_find[j])
// 				return (1);
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
// {
// 	t_btree	*list;

// 	list = *root;
// 	if (list)
// 		while (list->item)
// 			if ((*cmpf)(list->item, item))
// 				if (list->left)
// 					list = list->left;
// 				else
// 				{
// 					list->left = btree_create_node(item);
// 					return ;
// 				}
// 			else
// 				if (list->right)
// 					list = list->right;
// 				else
// 				{
// 					list->right = btree_create_node(item);
// 					return ;
// 				}
// 	else
// 		*root = btree_create_node(item);
// }

// int		main(void)
// {
// 	t_btree *tree;
// 	char	*test;
// 	tree = 0;
	
// 	btree_insert_data(&tree, "9", ft_comparison);
// 	btree_insert_data(&tree, "6", ft_comparison);
// 	btree_insert_data(&tree, "117", ft_comparison);
// 	btree_insert_data(&tree, "8", ft_comparison);
// 	btree_insert_data(&tree, "3", ft_comparison);
// 	btree_insert_data(&tree, "6", ft_comparison);
// 	btree_insert_data(&tree, "10", ft_comparison);
// 	btree_insert_data(&tree, "12", ft_comparison);
// 	btree_insert_data(&tree, "1", ft_comparison);
// 	// printf("%s\n", (char*)tree->left->left->right->item);
// 	// printf("%s\n", (char*)tree->item);
// 	test = btree_search_item(tree, "7", ft_strstr);
// 	if (test)
// 		printf("%s\n", (char*)test);
// 	return(0);
// }
