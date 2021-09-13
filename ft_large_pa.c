/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_large_pa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:13:36 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/13 20:45:56 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_large_pa(int argc, t_stack **stack_a, t_stack **stack_b)
{
	int	location_high;

	argc = ft_lst_size(stack_b);
	location_high = ft_find_largest(stack_b, -2147483648);
	if (location_high < argc / 2)
	{
		while (location_high != 0 && *stack_b != NULL)
		{
			if (ft_find_smallest(stack_b, 2147483647) == 0)
			{
				ft_pa(stack_a, stack_b);
				(*stack_a)->push = 1;
				ft_ra(stack_a, 1);
				location_high--;
				continue ;
			}
			ft_rb(stack_b, 1);
			location_high--;
		}
	}
	else
	{
		while (location_high < argc && *stack_b != NULL)
		{
			if (ft_find_smallest(stack_b, 2147483647) == 0)
			{
				ft_pa(stack_a, stack_b);
				(*stack_a)->push = 1;
				ft_ra(stack_a, 1);
				continue ;
			}
			ft_rrb(stack_b, 1);
			location_high++;
		}
	}
	ft_pa(stack_a, stack_b);
	(*stack_a)->push = 1;
}
