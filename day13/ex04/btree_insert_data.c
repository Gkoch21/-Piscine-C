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

// void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
// {
// 	if (!root)
// 		return ;
// 	btree_apply_infix(root->left, applyf);
// 	btree_apply_infix(root->right, applyf);
// 	(*applyf)(root->item);
// }

// int		ft_comparison(void *s1, void *s2)
// {
// 	if (ft_atoi(s1) >= ft_atoi(s2))
// 		return (1);
// 	else
// 		return (0);
// }

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*list;

	list = *root;
	if (list->item)
		while (list->item)
			if ((*cmpf)(list->item, item))
				if (list->left)
					list = list->left;
				else
				{
					list->left = btree_create_node(item);
					break ;
				}
			else
				if (list->right)
					list = list->right;
				else
				{
					list->right = btree_create_node(item);
					break ;
				}
	else
		*root = btree_create_node(item);
}

// int		main(void)
// {
// 	t_btree *tree;
	
// 	btree_insert_data(&tree, "9", ft_comparison);
// 	btree_insert_data(&tree, "6", ft_comparison);
// 	btree_insert_data(&tree, "11", ft_comparison);
// 	btree_insert_data(&tree, "8", ft_comparison);
// 	btree_insert_data(&tree, "3", ft_comparison);
// 	btree_insert_data(&tree, "6", ft_comparison);
// 	btree_insert_data(&tree, "10", ft_comparison);
// 	btree_insert_data(&tree, "12", ft_comparison);
// 	btree_insert_data(&tree, "1", ft_comparison);
// 	// printf("%s\n", (char*)tree->left->left->right->item);
// 	// printf("%s\n", (char*)tree->item);
// 	btree_apply_infix(tree,(void*) ft_putstr);
// 	return(0);
// }
