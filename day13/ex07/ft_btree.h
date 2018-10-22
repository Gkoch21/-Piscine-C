#ifndef		FT_BTREE_H
# define	FT_BTREE_H

typedef struct		s_btree
{
	struct	s_btree	*left;
	struct	s_btree	*right;
	void			*item;
}					t_btree;

typedef struct		s_turn
{
	struct	s_btree	*item;
	struct	s_turn	*next;
}					t_turn;

# include	<stdlib.h>
# include	<unistd.h>
# include	<stdio.h>

t_btree				*btree_create_node(void *item);

#endif
