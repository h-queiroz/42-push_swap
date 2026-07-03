#include "algorithms.h"

static int	search_minor(int *stack, int max_length);
// static void	move_to_top(int index, int *stack, int max_length);

// Simple:
// Search minor number in Stack A	-- DONE
// Move it to the top of Stack A
// 		IF index is in at bottom half of the stack, rotate stack DOWNWARDS
// 		IF index is in at top half of the stack, rotate stack UPWARDS
// Push it to Stack B
// Repeat until Stack A is empty
// Push all numbers back to Stack A

void	apply_simple(t_stacks *stacks)
{
	int minor_index;

	minor_index = search_minor(stacks->stack_a, stacks->amount_a);
	ft_printf("Minor Index in A: %d\n", minor_index);
	ft_printf("Minor Value in A: %d\n", stacks->stack_a[minor_index]);
	ft_printf("--------------------------\n");

	// move_to_top();
}

// Returns index of minor number in given Stack
static int	search_minor(int *stack, int max_length)
{
	int minor;
	int i;

	if (max_length == 0)
		return (-1);
	minor = 0;
	i = 0;
	while (i < max_length)
	{
		if (stack[i] < stack[minor])
			minor = i;
		i++;
	}
	return (minor);
}

// Moves it to the top of Stack A
// 		IF index is in at bottom half of the stack, rotate stack DOWNWARDS
// 		IF index is in at top half of the stack, rotate stack UPWARDS
// static void	move_to_top(int index, int *stack, int max_length)
// {
// 	int swap;
//
// 	swap = stack[index];
// 	if (index < (max_length / 2))
// 	{
// 		rra(stack);
// 	}
// }
