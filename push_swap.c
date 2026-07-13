#include "push_swap.h"
// #include "operations.h"
// #include "algorithms.h"

// Taking in consideration that is only gonna receive valid numbers for now
int	main(int ac, char **av)
{
	if (ac == 1)
	{
		ft_printf("Please insert more arguments...\n");
		return (0);
	}

	t_node *first_node;

	first_node = init_stack(ac, av);
	print_stack(first_node);

	// sa(stacks.stack_a, stacks.amount_a);
	// sb(stacks.stack_b, stacks.amount_b);
	// ss(&stacks);
	// pb(&stacks);
	// pa(&stacks);
	// ra(stacks.stack_a, stacks.amount_a);
	// rb(stacks.stack_b, stacks.amount_b);
	// rr(&stacks);
	// rra(stacks.stack_a, stacks.amount_a);
	// rrb(stacks.stack_b, stacks.amount_b);
	// rrr(&stacks);

	// print_stack(stacks, 'a');
	// print_stack(stacks, 'b');

	// apply_simple(&stacks);

	// print_stack(stacks, 'a');
	// print_stack(stacks, 'b');

	// free(stacks.stack_a);
	// free(stacks.stack_b);

	return (0);
}
