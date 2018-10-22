#include "ft_btree.h"

void	ft_putstr(char *str)
{
	int		n;
	
	n = -1;
	while (str[++n])
		write(2, &str[n], 1);
	write(1, "\n", 1);
}

int		ft_atoi(char *str)
{
	int		n;
	int		flag;
	int		answer;

	n = 0;
	flag = 1;
	answer = 0;
	while (str[n] == 32 || (str[n] >= 0 && str[n] <= 13))
		n++;
	if (str[n] == '-')
		flag = -1;
	if (str[n] == '-' || str[n] == '+')
		n++;
	while (str[n] && str[n] >= '0' && str[n] <= '9')
	{
		answer *= 10;
		answer += (int)(str[n] - '0');
		n++;
	}
	return (answer * flag);
}

t_turn		*turn_create_node(t_btree *item)
{
	t_turn	*new;

	if (!(new = (t_turn*)malloc(sizeof(t_turn))))
		return (NULL);
	new->item	= item;
	new->next	= NULL;
	return (new);
}

//добавление в очередь
void	add(t_turn **lists, t_btree *item)
{
	t_turn	*list;

	list = *lists;
	if (*lists)
	{
		while (list->next)
			list->next;
		list->next = turn_create_node(item);
	}
	else
		*lists = turn_create_node(item);
}

// удаление из очереди
t_btree		*del(t_turn **turn)
{
	t_turn	*item;

	item = *turn;
	printf("test");
	if (item->next)
		item = item->next;
	else
		item = NULL;
	*turn = item;
	return (item->item);
}

//обход в ширину
void		btree_apply_by_level(t_btree *root)
{
	t_turn	*turn;

	turn = 0;
	//если дерево пустое выходим
	if (!root)
		return;
	//добавляем голову в очередь
	add(&turn, root);
	while (turn) 
	{
		t_btree *curr = del(&turn);
		printf("%s\n ", (char*)curr->item);
		if (curr->left)
			add(&turn, curr->left);
		if (curr->right)
			add(&turn, curr->right);
	}
}

int		ft_equally(void *s1, void *s2)
{
	if (ft_atoi(s1) == ft_atoi(s2))
		return (1);
	else
		return (0);
}

int		ft_comparison(void *s1, void *s2)
{
	if (ft_atoi(s1) >= ft_atoi(s2))
		return (1);
	else
		return (0);
}

int		ft_strstr(void *s1, void *s2)
{
	int		i;
	int		j;
	char	*str;
	char	*to_find;

	str		= (char *)s1;
	to_find	= (char *)s2;
	i = 0;
	if (to_find[0] == '\0')
		return (1);
	while(str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while(to_find[j] && (to_find[j] == str[i + j]))
				j++;
			if (!to_find[j])
				return (1);
		}
		i++;
	}
	return (0);
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	t_btree	*list;

	list = *root;
	if (list)
		while (list->item)
			if ((*cmpf)(list->item, item))
				if (list->left)
					list = list->left;
				else
				{
					list->left = btree_create_node(item);
					return ;
				}
			else
				if (list->right)
					list = list->right;
				else
				{
					list->right = btree_create_node(item);
					return ;
				}
	else
		*root = btree_create_node(item);
}

int		main(void)
{
	t_btree *tree;
	int		n;
	tree = 0;
	
	btree_insert_data(&tree, "9", ft_comparison);
	btree_insert_data(&tree, "6", ft_comparison);
	btree_insert_data(&tree, "117", ft_comparison);
	btree_insert_data(&tree, "8", ft_comparison);
	btree_insert_data(&tree, "3", ft_comparison);
	btree_insert_data(&tree, "6", ft_comparison);
	btree_insert_data(&tree, "10", ft_comparison);
	btree_insert_data(&tree, "12", ft_comparison);
	btree_insert_data(&tree, "1", ft_comparison);
	// printf("%s\n", (char*)tree->left->left->right->item);
	// printf("%s\n", (char*)tree->item);
	btree_apply_by_level(tree);
	return(0);
}

// 					9
// 			6_				_117
// 		3_		_8		10_
// 1_		_6				_12