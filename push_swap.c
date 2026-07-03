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

// sa (swap a): Swap the first two elements at the top of stack a.
// 				Do nothing if there is only one or no elements.
// 	DONE
// ------------------------------------------------------------------------------------
//
// sb (swap b): Swap the first two elements at the top of stack b.
// 				Do nothing if there is only one or no elements.
// 	DONE
// ------------------------------------------------------------------------------------
// 					
// ss:	sa and sb at the same time.
// ------------------------------------------------------------------------------------
//
// pa (push a): Take the first element at the top of b and put it at the top of a.
// 				Do nothing if b is empty.
// 	DONE
// ------------------------------------------------------------------------------------
//
// pb (push b): Take the first element at the top of a and put it at the top of b.
// 				 wDo nothing if a is empty.
// 	DONE
// ------------------------------------------------------------------------------------
//
// ra (rotate a):	Shift up all elements of stack a by one.
// 					The first element becomes the last one
// 	DONE
// ------------------------------------------------------------------------------------
//
// rb (rotate b): 	Shift up all elements of stack b by one.
// 					The first element becomes the last one
// 	DONE
// ------------------------------------------------------------------------------------
//
// rr:	ra and rb at the same time.
// ------------------------------------------------------------------------------------
//
// rra (reverse rotate a):	Shift down all elements of stack a by one.
// 							The last element becomes the first one.
// ------------------------------------------------------------------------------------
//
// rrb (reverse rotate b):	Shift down all elements of stack b by one.
// 							The last element becomes the first one.
// ------------------------------------------------------------------------------------
//
// rrr:	rra and rrb at the same time.
// ------------------------------------------------------------------------------------

// Taking in consideration that is only gonna receive valid numbers for now
int	main(int ac, char **av)
{
	t_stacks stacks;

	stacks = init_stacks(ac, av);

	print_stack(stacks, 'a');
	print_stack(stacks, 'b');

	// sa(&stacks);
	// sb(&stacks);
	// pb(&stacks);

	// ra(&stacks);
	// ra(&stacks);
	// ra(&stacks);
	//
	// print_stack(stacks, 'a');
	// print_stack(stacks, 'b');

	pb(&stacks);
	pb(&stacks);
	pb(&stacks);
	pb(&stacks);

	print_stack(stacks, 'a');
	print_stack(stacks, 'b');

	rr(&stacks);
	rr(&stacks);

	print_stack(stacks, 'a');
	print_stack(stacks, 'b');

	// sa(&stacks);
	// sb(&stacks);
	// pb(&stacks);
	//
	// print_stack(stacks, 'a');
	// print_stack(stacks, 'b');
	//
	// sa(&stacks);
	// sb(&stacks);
	// pb(&stacks);
	//
	// print_stack(stacks, 'a');
	// print_stack(stacks, 'b');
	//
	// pa(&stacks);
	// pa(&stacks);
	//
	// print_stack(stacks, 'a');
	// print_stack(stacks, 'b');

	return (0);
}
