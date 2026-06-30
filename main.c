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

#include "ft_printf/ft_printf.h"

// Taking in consideration that is only gonna receive valid numbers for now
int	main(int ac, char **av)
{
	ft_printf("AC: %d\n", ac);
	ft_printf("AV[0]: %s\n", *av);

	return (0);
}
