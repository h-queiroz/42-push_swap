/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/30 16:15:06 by hequeiro          #+#    #+#             */
/*   Updated: 2026/06/30 16:15:07 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "algorithms.h"

// Taking in consideration that is only gonna receive valid numbers for now
int	main(int ac, char **av)
{
	t_stacks stacks;

	stacks = init_stacks(ac, av);

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

	print_stack(stacks, 'a');
	print_stack(stacks, 'b');

	// apply_simple(&stacks);

	return (0);
}
