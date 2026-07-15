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

void test_stacks(t_stacks *stacks);
static void	print_input(t_input *input);
static char	*strategy_to_str(t_strategy strategy);

// Needs to check if it is already ordered before applying algo
// Needs to implement Medium Algo
// Needs to implement Complex Algo
// Needs to implement switch statement for each Algo
// Needs to calculate disorder
// Needs to implement --bench logic

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
		stacks = init_stacks(input.values, input.size);

		test_stacks(&stacks);

		free(stacks.stack_a);
		free(stacks.stack_b);
		free_input(&input);
	}
	return (0);
}

void test_stacks(t_stacks *stacks)
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

static void	print_input(t_input *input)
{
	int	i;

	ft_printf("=== PARSING RESULT ===\n");
	ft_printf("strategy: %s\n", strategy_to_str(input->strategy));
	ft_printf("has_strategy: %d\n", input->has_strategy);
	ft_printf("bench: %d\n", input->bench);
	ft_printf("size: %d\n", input->size);
	i = 0;
	while (i < input->size)
	{
		ft_printf("values[%d]: %d\n", i, input->values[i]);
		i++;
	}
	ft_printf("======================\n");
}

static char	*strategy_to_str(t_strategy strategy)
{
	if (strategy == STRATEGY_SIMPLE)
		return ("--simple");
	if (strategy == STRATEGY_MEDIUM)
		return ("--medium");
	if (strategy == STRATEGY_COMPLEX)
		return ("--complex");
	if (strategy == STRATEGY_ADAPTIVE)
		return ("--adaptive");
	return ("unknown");
}
