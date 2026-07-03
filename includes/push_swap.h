#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"

typedef struct s_stacks
{
	int	*stack_a;
	int	*stack_b;
	int	max_length;
	int	amount_a;
	int	amount_b;
}	t_stacks;

// For production
// Creates a t_stacks containing stack_a with all receiving numbers
// and stack_b of the same size but empty with zeros.
t_stacks	init_stacks(int ac, char **av);

// For debug
void		print_stack(t_stacks stacks, char c);

#endif // PUSH_SWAP_H
