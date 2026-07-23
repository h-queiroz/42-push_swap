/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:04:11 by hequeiro          #+#    #+#             */
/*   Updated: 2026/07/23 16:10:16 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"
#include "operations.h"

// Simple:
// Search minor number in Stack A	-- DONE
// Move it to the top of Stack A	-- DONE
// 		IF index is in at bottom half of the stack, rotate stack DOWNWARDS
// 		IF index is in at top half of the stack, rotate stack UPWARDS
// Push it to Stack B				-- DONE
// Repeat until Stack A is empty	-- DONE
// Push all numbers back to Stack A

void	apply_simple(t_stacks *stacks, t_bench *bench)
{
	int	minor_index;

	ft_printf("Applying Simple Algorithm\n");
	// Passo 4
	while ((stacks->s_a.amount) > 1)
	{
		// Passo 1
		minor_index = search_minor(&stacks->s_a);
		ft_printf("Minor Index in A: %d\n", minor_index);
		ft_printf("Minor Value in A: %d\n", stacks->s_a.stack[minor_index]);
		ft_printf("--------------------------\n");

		// Passo 2
		move_to_top(minor_index, &stacks->s_a, bench);

		// Passo 3
		pb(stacks, bench);
	}
	// Passo 5
	while ((stacks->s_b.amount) > 0)
		pa(stacks, bench);
}
