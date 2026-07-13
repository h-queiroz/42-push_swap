#include "push_swap.h"

t_node *init_stack(int ac, char **av)
{
	t_node	*first_node;
	t_node	*prev_node;
	int		i;

	// If received only 1 number
	if (ac == 2)
		return (create_node(ft_atoi(av[1]), NULL, NULL));

	first_node = create_node(ft_atoi(av[1]), NULL, NULL);
	prev_node = first_node;
	i = 2;
	while (i < ac)
	{
		prev_node->next = create_node(ft_atoi(av[i]), prev_node, NULL);
		prev_node = prev_node->next;
		i++;
	}
	// Making it circular
	first_node->previous = prev_node;
	prev_node->next = first_node;
	return (first_node);
}

// Creates a new t_node in the heap
// If receive any NULL instead of a valid t_node*,
// it points to itself instead.
t_node *create_node(int value, t_node *prev, t_node *next)
{
	t_node *new_node;

	new_node = ft_calloc(1, sizeof(t_node));
	new_node->value = value;
	if (!prev)
		new_node->previous = new_node;
	else
		new_node->previous = prev;
	if (!next)
		new_node->next = new_node;
	else
		new_node->next = next;
	return (new_node);
}

// ******************************************
// To be removed when the project is finished
// ******************************************

void	print_stack(const t_node *first_node)
{
	const t_node *iter_node;

	if (!first_node)
		return ;
	iter_node = first_node;
	print_node(iter_node);
	iter_node = iter_node->next;
	while (iter_node != first_node)
	{
		print_node(iter_node);
		iter_node = iter_node->next;
	}
}

void	print_node(const t_node *node)
{
	if (!node)
		return ;
	ft_printf("----------\n");
	ft_printf("Current Node Value:       %d\n", node->value);
	ft_printf("Next Pointer's Value:     ");
	if (!node->next)
		ft_printf("%s\n", NULL);
	else
		ft_printf("%s\n", ft_itoa((node->next)->value));
	ft_printf("Previous Pointer's Value: ");
	if (!node->previous)
		ft_printf("%s\n", NULL);
	else
		ft_printf("%s\n", ft_itoa((node->previous)->value));
	ft_printf("----------\n\n");
}
