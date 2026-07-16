/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:09:19 by hequeiro          #+#    #+#             */
/*   Updated: 2026/07/15 19:26:12 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// #include "operations.h"
#include "algorithms.h"
#include "parse.h"

static void	test_stacks(t_stacks *stacks);

// Simple algo is bugged for some reason
// 		NEEDS TO BE DEBUGGED

// Needs to check if it is already ordered before applying algo -- DONE
// Needs to implement Medium Algo
// Needs to implement Complex Algo
// Needs to implement switch statement for each Algo
// Needs to calculate disorder
// Needs to implement --bench logic
// 		Count each operation

// Convert Array to Linked List
// Time how long does it take to the whole operation to proccess to compare Array with Linked List
// Develop the Checker-Bonus
// Unit Tests for comparing the result of my Checker with the ones that we receive

int	main(int ac, char **av)
{
	t_input		input;
	t_stacks	stacks;

	if (ac > 1)
	{
		if (!parse_input(ac, av, &input))
		{
			free_input(&input);
			ft_putendl_fd("Error", 2);
			return (1);
		}
		print_input(&input);

		// Checar se já está ordenado
		// Se estiver, não printar nada
		// ft_printf("%s\n", is_ordered(input.values, input.size) ? "Ordered" : "NON-Ordered");
		if (!is_ordered(input.values, input.size))
		{
			stacks = init_stacks(input.values, input.size);
			test_stacks(&stacks);
			free(stacks.stack_a);
			free(stacks.stack_b);
		}
		free_input(&input);
	}
	return (0);
}

static void test_stacks(t_stacks *stacks)
{
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

	print_stack(*stacks, 'a');
	print_stack(*stacks, 'b');

	apply_simple(stacks);

	print_stack(*stacks, 'a');
	print_stack(*stacks, 'b');
}
