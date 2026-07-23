/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hequeiro <hequeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 02:38:21 by hequeiro          #+#    #+#             */
/*   Updated: 2026/07/23 16:11:22 by hequeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This algo works by "pre-sorting" the numbers by sending
// them in chunks to stack B based on their values.
// So the first chunk that contains the lowest numbers are
// send to stack B first and pre-ordered there.
// The second chunk will keep the same logic and will naturally
// be at the top of the first chunk.
// When Stack A gets empty, push it all back to Stack A and
// doing a lot of less sorting than it would usually need to do
// with the simple algorithm.
// Medium:
// 1. Duplicate the stacks and ranking the values of each number: -- DONE
// 		For example: OG Stack:  [7, 15, -8, 13, 22, 0, 4]
// 			     	 Duplicate: [3,  5,  0,  4,  6, 1, 2]
// 2. Define chunk-size based on √n. Rounded down -- DONE
// 3. Look closer number at the top of the stack that fits in the chunk -- DONE
// 4. Move it to the top -- DONE
// 5. Push it to Stack B -- DONE
// 6. Adjust last inserted number in Stack B -- DONE
// 7. Repeat 3-6 until chunk is done -- DONE
// 8. Define chunk again -- DONE
// 9. Repeat 3-8 until Stack A is empty -- DONE
// 10.Push all numbers back and adjusting minimally to go back sorted -- DONE

// Clean up Duplicate operation prints -- DONE
// Norminette

#include "algorithms.h"
#include "libft.h"
#include "push_swap.h"
#include "operations.h"

static t_stacks	create_duplicate(t_stack *stack_a);
static void		move_to_top_dup(int index, t_stack *stack);

void	apply_medium(t_stacks *stacks, t_bench *bench)
{
	t_stacks	duplicate;
	int			chunk_size;
	int			lower_bound;
	int			upper_bound;
	int			element_index;
	int			i;
	int			moved_from_chunk;
	int			major;

	ft_printf("\033[1;33m" "Applying Medium Algorithm\n");
	duplicate = create_duplicate(&stacks->s_a);
	i = 0;

	chunk_size = square_root(stacks->s_a.amount);
	ft_printf("Chunk-size: %d\n", chunk_size);

	ft_printf("Dupli A:");
	while (i < (stacks->s_a.amount))
		ft_printf("  %d", duplicate.s_a.stack[i++]);
	ft_printf("\n");

	lower_bound = 0;
	upper_bound = chunk_size - 1;
	ft_printf("First Lower Bound: %d\n", lower_bound);
	ft_printf("First Upper Bound: %d\n", upper_bound);

	while (stacks->s_a.amount > 0)
	{
		moved_from_chunk = 0;
		while (moved_from_chunk <= (upper_bound - lower_bound))
		{
			ft_printf("Moved from chunk: %d\n", moved_from_chunk);

			element_index = closer_element(&duplicate.s_a, lower_bound, upper_bound);
			move_to_top(element_index, &stacks->s_a, bench);
			move_to_top_dup(element_index, &duplicate.s_a);

			pb(stacks, bench);
			px(&duplicate, 'b');

			if (duplicate.s_b.stack[duplicate.s_b.amount - 1] < (lower_bound + (chunk_size / 2)))
			{
				rb(&stacks->s_b, bench);
				rx(&duplicate.s_b);
			}
			moved_from_chunk++;
		}
		lower_bound += chunk_size;
		upper_bound += chunk_size;
		if (duplicate.s_a.amount < chunk_size)
			upper_bound = (lower_bound + (duplicate.s_a.amount - 1));
		ft_printf("Next Lower Bound: %d\n", lower_bound);
		ft_printf("Next Upper Bound: %d\n", upper_bound);
	}

	major = (duplicate.s_b.amount - 1);
	while (major >= 0)
	{
		move_to_top(search_value(&duplicate.s_b, major), &stacks->s_b, bench);
		move_to_top_dup(search_value(&duplicate.s_b, major), &duplicate.s_b);
		pa(stacks, bench);
		px(&duplicate, 'a');
		major--;
	}

	ft_printf("========= DUPLICATE =========\n");
	print_stacks(&duplicate);

	ft_printf("\n========= ORIGINALS =========\n");
	print_stacks(stacks);

	free(duplicate.s_a.stack);
	free(duplicate.s_b.stack);

	ft_printf("\033[0m");
}

static t_stacks	create_duplicate(t_stack *stack_a)
{
	t_stacks	duplicate;
	int			j;
	int			minor_index;

	duplicate.max_length = stack_a->amount;
	duplicate.s_a.name = 'a';
	duplicate.s_a.stack = ft_calloc(duplicate.max_length, sizeof(int));
	j = 0;
	minor_index = search_minor(stack_a);
	duplicate.s_a.stack[minor_index] = j;
	while (++j < duplicate.max_length)
	{
		minor_index = next_minor(stack_a, minor_index);
		duplicate.s_a.stack[minor_index] = j;
	}
	duplicate.s_a.amount = stack_a->amount;
	duplicate.s_b.name = 'b';
	duplicate.s_b.stack = ft_calloc(duplicate.max_length, sizeof(int));
	duplicate.s_b.amount = 0;
	return (duplicate);
}

static void	move_to_top_dup(int index, t_stack *stack)
{
	int	swap;

	swap = stack->stack[index];
	if (index < ((stack->amount - 1) / 2))
		while (stack->stack[stack->amount - 1] != swap)
			rrx(stack);
	else
		while (stack->stack[stack->amount - 1] != swap)
			rx(stack);
}
