#include "operations.h"

void	pa(t_stacks *stacks)
{
	if ((stacks->amount_b) > 0)
		stacks->stack_a[stacks->amount_a++] = stacks->stack_b[--stacks->amount_b];
	ft_printf("pa\n");
}

void	pb(t_stacks *stacks)
{
	if ((stacks->amount_a) > 0)
		stacks->stack_b[stacks->amount_b++] = stacks->stack_a[--stacks->amount_a];
	ft_printf("pb\n");
}
