#include	"../includes/libft.h"

int	ft_do_op(int i1, int i2, char str)
{
	if (str == '-')
		return(i1 - i2);
	else if (str == '*')
		return(i1 * i2);
	else if (str == '+')
		return(i1 + i2);
	else if (str == '/')
		if (i2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			return(i1 / i2);
	else if (str == '%')
		if (i2 == 0)
			write(1, "Stop : modulo by zero", 22);
		else
			return(i1 % i2);
	else
		return (0);
	return (0);
}

int		btree_apply_prefix(t_eval *root)
{
	int		answer;

	answer = 0;
	if (root->oprt)
	{
		answer = ft_do_op(
			btree_apply_prefix(root->left),
			btree_apply_prefix(root->right),
			root->oprt);
		return (answer);
	}
	else
		return (root->intg);
}

t_eval	*	create_oprt(char	t)
{
	t_eval	*new;

	new	=	(t_eval *)malloc(sizeof(t_eval));
	if (!new)
		return (NULL);
	new->oprt	=	t;
	new->intg	=	0;
	new->left	=	NULL;
	new->right	=	NULL;
	return (new);
}

t_eval	*	create_intg(int n)
{
	t_eval	*new;

	new	=	(t_eval *)malloc(sizeof(t_eval));
	if (!new)
		return (NULL);
	new->oprt	=	'\0';
	new->intg	=	n;
	new->left	=	NULL;
	new->right	=	NULL;
	return (new);
}

int		bracket(char *str, int n)
{
	int		flag;

	flag	=	0;
	while (str[++n])
	{
		if (str[n] == '(')
			flag++;
		else if (str[n] == ')' && (flag == 0))
			return (n);
		else if (str[n] == ')' && (flag > 0))
			flag--;
	}
	return (n);
}

char	*	cut_bracket(char *str)
{
	char	*	nstr;
	int			n;

	if (bracket(str, 0) == (ft_strlen(str) - 1))
	{
		nstr	=	ft_strnew((size_t)(ft_strlen(str) - 1));
		n	=	0;
		while (++n < ft_strlen(str) - 1)
			nstr[n - 1] = str[n];
		str	=	nstr;
		return (nstr);
	}
	return (str);
}

char	*	cut_str(char * str, int n)
{
	int			i;
	char	*	answer;

	answer	=	(char *)malloc(sizeof(char) * n);
	if (!answer)
		return (NULL);
	i	=	0;
	while (i < n)
	{
		answer[i]	=	str[i];
		i++;
	}
	answer[i]	=	'\0';
	return (answer);
}

int		simple(char *str)
{
	int		n;
	int		flag;

	n		=	-1;
	flag	=	0;
	while (str[++n])
	{
		if (str[n] == '(')
			n = bracket(str, n);
		if (str[n] == '+' || (str[n] == '-'))
			flag = n;
	}
	return (flag);
}

int		complex(char *str)
{
	int		n;
	int		flag;

	n		=	-1;
	flag	=	0;
	while (str[++n])
	{
		if (str[n] == '(')
			n = bracket(str, n);
		if (str[n] == '*' || (str[n] == '/')
			|| (str[n] == '%'))
			flag = n;
	}
	return (flag);
}

t_eval	*	create_tree(char * str)
{
	t_eval	*	answer;
	int			n;

	answer	=	NULL;
	n	=	0;
	if (str[0] == '(')
		str	=	cut_bracket(str);
	if ((n = simple(str)))
	{
		answer			=	create_oprt(str[n]);
		answer->left	=	create_tree(cut_str(str, n));
		answer->right	=	create_tree(&str[n + 1]);
		return (answer);
	}
	else if ((n = complex(str)))
	{
		answer			=	create_oprt(str[n]);
		answer->left	=	create_tree(cut_str(str, n));
		answer->right	=	create_tree(&str[n + 1]);
		return (answer);
	}
	return (create_intg(ft_atoi(str)));
}

int		eval_expr(char * str)
{
	t_eval	*tree;
	int		answer;

	tree	=	NULL;
	str		=	ft_clear_char(str, ' ');
	tree	=	create_tree(str);
	answer	=	btree_apply_prefix(tree);
	return(answer);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
