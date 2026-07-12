#include "push_swap.h"

// t_node *init_stacks(int ac, char **av)
// {
// 	int			i;
//
// 	i = 0;
// 	while (i < ac)
// 	{
//
// 	}
//
// 	stacks.max_length = (ac - 1);
// 	stacks.stack_a = ft_calloc(stacks.max_length, sizeof(int));
// 	stacks.stack_b = ft_calloc(stacks.max_length, sizeof(int));
// 	stacks.amount_b = 0;
// 	i = 0;
// 	while (--ac > 0)
// 		stacks.stack_a[ac - 1] = ft_atoi(av[++i]);
// 	stacks.amount_a = stacks.max_length;
// 	return (stacks);
// }

// To be removed when the project is finished
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
