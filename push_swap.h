#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"

typedef struct s_stacks
{
	int	*stack_a;
	int	*stack_b;
	int max_length;
	int amount_a;
	int amount_b;
}	t_stacks;

// For production
t_stacks	init_stacks(int ac, char **av);
void		sa(t_stacks *stacks);
void		sb(t_stacks *stacks);
void		pb(t_stacks *stacks);
void		pa(t_stacks *stacks);
void		ra(t_stacks *stacks);
void		rb(t_stacks *stacks);
void		rr(t_stacks *stacks);

// For debug
void		print_stack(t_stacks stacks, char c);

#endif // PUSH_SWAP_H
