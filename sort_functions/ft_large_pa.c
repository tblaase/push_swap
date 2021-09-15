/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_large_pa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:13:36 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 22:10:01 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_large_pa_else(int location_high, int argc,
	t_stack **stack_a, t_stack **stack_b)
/* only exists because of the 25 line per function restriction */
{
	while (location_high < argc && *stack_b != NULL)
	{
		if (ft_find_smallest(stack_b, 2147483647) == 0)
		{
			ft_pa(stack_a, stack_b);
			(*stack_a)->flag = -1;
			ft_ra(stack_a, 1);
			continue ;
		}
		ft_rrb(stack_b, 1);
		location_high++;
	}
}

void	ft_large_pa(int argc, t_stack **stack_a, t_stack **stack_b)
/* will find the shortest way to rotate the largest value of the stack to the top
** will sort smallest value if encountered on the way */
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
				(*stack_a)->flag = -1;
				ft_ra(stack_a, 1);
				location_high--;
				continue ;
			}
			ft_rb(stack_b, 1);
			location_high--;
		}
	}
	else
		ft_large_pa_else(location_high, argc, stack_a, stack_b);
	ft_pa(stack_a, stack_b);
	(*stack_a)->flag = -1;
}
