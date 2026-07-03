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

static void	sx(int *stack, int max_length)
{
	int	swap;
	int	last;

	last = (max_length - 1);
	if ((max_length) > 1)
	{
		swap = stack[last];
		stack[last] = stack[last - 1];
		stack[last - 1] = swap;
	}
}

void	sa(int *stack, int max_length)
{
	sx(stack, max_length);
	ft_printf("sa\n");
}

void	sb(int *stack, int max_length)
{
	sx(stack, max_length);
	ft_printf("sb\n");
}

void	ss(t_stacks *stacks)
{
	sx(stacks->stack_a, stacks->amount_a);
	sx(stacks->stack_b, stacks->amount_b);
	ft_printf("ss\n");
}

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

static void	rx(int *stack, int max_length)
{
	int	swap;
	int	last;

	if ((max_length) > 1)
	{
		last = (max_length - 1);
		swap = stack[last];
		while (last-- > 0)
			stack[last + 1] = stack[last];
		stack[0] = swap;
	}
}

void	ra(int *stack, int max_length)
{
	rx(stack, max_length);
	ft_printf("ra\n");
}

void	rb(int *stack, int max_length)
{
	rx(stack, max_length);
	ft_printf("ra\n");
}

void	rr(t_stacks *stacks)
{
	rx(stacks->stack_a, stacks->amount_a);
	rx(stacks->stack_b, stacks->amount_b);
	ft_printf("rr\n");
}

static void	rrx(int	*stack, int max_length)
{
	int	swap;
	int	i;
	int	last_index;

	if (max_length > 1)
	{
		last_index = (max_length - 1);
		i = 0;
		swap = stack[i];
		while (i++ < last_index)
			stack[i - 1] = stack[i];
		stack[last_index] = swap;
	}
}

void	rra(int	*stack, int max_length)
{
	rrx(stack, max_length);
	ft_printf("rra\n");
}

void	rrb(int	*stack, int max_length)
{
	rrx(stack, max_length);
	ft_printf("rrb\n");
}

void	rrr(t_stacks *stacks)
{
	rrx(stacks->stack_a, stacks->amount_a);
	rrx(stacks->stack_b, stacks->amount_b);
	ft_printf("rrr\n");
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
