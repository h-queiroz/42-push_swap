#include "push_swap.h"
// #include "operations.h"
// #include "algorithms.h"

// Taking in consideration that is only gonna receive valid numbers for now
int	main(int ac, char **av)
{
	(void) ac;
	(void) av;

	t_node node1;
	t_node node2;
	t_node node3;

	node1.value = 10;
	node1.next = &node2;
	node1.previous = &node3;

	node2.value = 02;
	node2.next = &node3;
	node2.previous = &node1;

	node3.value = 333;
	node3.next = &node1;
	node3.previous = &node2;

	print_stack(&node2);
	// print_node(&node1);
	// print_node(&node2);
	// print_node(&node3);

	// t_stacks stacks;

	// stacks = init_stacks(ac, av);

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
