#include "push_swap.h"

t_stacks	init_stacks(int ac, char **av)
{
	t_stacks	stacks;
	int			i;

	stacks.max_length = (ac - 1);
	stacks.stack_a = ft_calloc(stacks.max_length, sizeof(int));
	stacks.stack_b = ft_calloc(stacks.max_length, sizeof(int));
	stacks.amount_b = 0;
	i = 0;
	while (--ac > 0)
		stacks.stack_a[ac - 1] = ft_atoi(av[++i]);
	stacks.amount_a = stacks.max_length;
	return (stacks);
}

// To be removed when the project is finished
void	print_stack(t_stacks stacks, char c)
{
	int	i;

	i = 0;
	ft_printf("Stack %c: ", c == 'a' ? 'A' : 'B');
	while (c == 'a' && i < stacks.amount_a)
		ft_printf("%d ", stacks.stack_a[i++]);
	while (c == 'b' && i < stacks.amount_b)
		ft_printf("%d ", stacks.stack_b[i++]);
	if (c == 'b')
		ft_printf("\n------------------------------");
	ft_printf("\n");
}
