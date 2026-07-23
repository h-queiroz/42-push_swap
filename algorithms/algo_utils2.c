/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 18:36:54 by hequeiro          #+#    #+#             */
/*   Updated: 2026/07/23 18:37:34 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algorithms.h"
#include "operations.h"

void	move_to_top(int index, t_stack *stack, t_bench *bench)
{
	int	swap;

	swap = stack->stack[index];
	if (index < ((stack->amount - 1) / 2))
	{
		while (stack->stack[stack->amount - 1] != swap)
		{
			if (stack->name == 'a')
				rra(stack, bench);
			else
				rrb(stack, bench);
		}
	}
	else
	{
		while (stack->stack[stack->amount - 1] != swap)
		{
			if (stack->name == 'a')
				ra(stack, bench);
			else
				rb(stack, bench);
		}
	}
}
