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
#include "algorithms.h"

// Taking in consideration that is only gonna receive valid numbers for now
int	main(int ac, char **av)
{
	t_stacks stacks;

	stacks = init_stacks(ac, av);

	// sa(&stacks);
	// sb(&stacks);
	// ss(&stacks);
	// pb(&stacks);
	// pa(&stacks);
	// ra(&stacks);
	// rb(&stacks);
	// rr(&stacks);
	// rra(&stacks);
	// rrb(&stacks);
	// rrr(&stacks);

	print_stack(stacks, 'a');
	print_stack(stacks, 'b');

	apply_simple(&stacks);

	return (0);
}
