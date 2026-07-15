#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"

// CRIAR NOVO TIPO PARA STACK ÚNICA
// Ex: Mandar int* e max_length daquela stack;

typedef struct s_node t_node;
struct s_node
{
	int		value;
	t_node	*next;
	t_node	*previous;
};

// For production
// Creates a Linked List of nodes where each node contains
// a number from the stack, points to the next and the previous
// node.
// In the case of the first and last node, the first node's previous
// is the last node and the last node's next is the first node
// Making this a Circular Double Linked List
t_node	*init_stack(int ac, char **av);
t_node	*create_node(int value, t_node *prev, t_node *next);
void	free_stack(t_node *first_node);

// For debug
// void		print_stack(t_stacks stacks, char c);
void	print_stack(const t_node *first_node);
void	print_node(const t_node *node);

#endif // PUSH_SWAP_H
