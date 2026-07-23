/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 11:15:29 by hequeiro          #+#    #+#             */
/*   Updated: 2026/07/23 16:10:02 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "algorithms.h"

int	search_value(t_stack *stack, int value)
{
	int	i;

	i = 0;
	while (i < stack->amount)
		if (stack->stack[i++] == value)
			return (i - 1);
	return (0);
}

int	square_root(int nb)
{
	int	i;

	i = 1;
	while ((i * i) <= nb && (i * i) <= 46341)
		i++;
	return (i - 1);
}

int	next_minor(const t_stack *stack, int current_minor)
{
	int	minor_index;
	int	higher_index;
	int	i;

	higher_index = 0;
	i = 0;
	while (i++ < stack->amount)
		if (stack->stack[i - 1] >= stack->stack[higher_index])
			higher_index = (i - 1);
	minor_index = higher_index;
	i = 0;
	while (i++ < stack->amount)
		if (stack->stack[i - 1] > stack->stack[current_minor] && stack->stack[i - 1] < stack->stack[minor_index])
			minor_index = (i - 1);
	return (minor_index);
}

int	closer_element(t_stack *stack, int lower_bound, int upper_bound)
{
	int	i; // Downwards
	int	j; // Upwards

	i = (stack->amount - 1);
	if (stack->stack[i] >= lower_bound && stack->stack[i] <= upper_bound)
	// {
	// 	ft_printf("Closer is at the top with value %d\n", stack->stack[i]);
		return (i);
	// }
	i--;
	j = 0;
	while (j <= i)
	{
		if (stack->stack[i] >= lower_bound && stack->stack[i] <= upper_bound)
		// {
		// 	ft_printf("Closer downward is %d of index %d\n", stack->stack[i], i);
			return (i);
		// }
		else if (stack->stack[j] >= lower_bound && stack->stack[j] <= upper_bound)
		// {
		// 	ft_printf("Closer upward is %d of index %d\n", stack->stack[j], j);
			return (j);
		// }
		i--;
		j++;
	}
	return (-1);
}

// Returns index of minor number in given Stack
int	search_minor(const t_stack *stack)
{
	int	minor;
	int	i;

	if (stack->amount == 0)
		return (-1);
	minor = 0;
	i = 0;
	while (i < stack->amount)
	{
		if (stack->stack[i] < stack->stack[minor])
			minor = i;
		i++;
	}
	return (minor);
}

// Moves it to the top of Stack A
// 		IF index is in at bottom half of the stack, rotate stack DOWNWARDS
// 		IF index is in at top half of the stack, rotate stack UPWARDS
void	move_to_top(int index, t_stack *stack, t_bench *bench)
{
	int	swap;

	swap = stack->stack[index];
	if (index < ((stack->amount - 1) / 2))
		while (stack->stack[stack->amount - 1] != swap)
			if (stack->name == 'a')
				rra(stack, bench);
			else
				rrb(stack, bench);
	else
		while (stack->stack[stack->amount - 1] != swap)
			if (stack->name == 'a')
				ra(stack, bench);
			else
				rb(stack, bench);
}
