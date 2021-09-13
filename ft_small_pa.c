/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_pa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:49:12 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/13 21:06:38 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_small_pa(int argc, t_stack **stack_a, t_stack **stack_b)
{
	int	location_small;

	argc = ft_lst_size(stack_b);
	location_small = ft_find_smallest(stack_b, 2147483647);
	if (location_small < argc / 2)
	{
		while (location_small != 0 && *stack_b != NULL)
		{
			if (ft_find_largest(stack_b, -2147483648) == 0)
			{
				ft_pa(stack_a, stack_b);
				(*stack_a)->push = 1;

				location_small--;
				continue ;
			}
			ft_rb(stack_b, 1);
			location_small--;
		}
	}
	else
	{
		while (location_small < argc && *stack_b != NULL)
		{
			if (ft_find_largest(stack_b, -2147483648) == 0)
			{
				ft_pa(stack_a, stack_b);
				(*stack_a)->push = 1;

				continue ;
			}
			ft_rrb(stack_b, 1);
			location_small++;
		}
	}
	ft_pa(stack_a, stack_b);
	(*stack_a)->push = 1;
	ft_ra(stack_a, 1);
}
