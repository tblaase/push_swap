/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_pa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 20:49:12 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 22:10:04 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_small_pa_else(int location_small, int argc,
	t_stack **stack_a, t_stack **stack_b)
/* only exists because of the 25 line per function restriction */
{
	while (location_small < argc && *stack_b != NULL)
	{
		if (ft_find_largest(stack_b, -2147483648) == 0)
		{
			ft_pa(stack_a, stack_b);
			(*stack_a)->flag = -1;
			continue ;
		}
		ft_rrb(stack_b, 1);
		location_small++;
	}
}

void	ft_small_pa(int argc, t_stack **stack_a, t_stack **stack_b)
/* will find the shortest way to rotate the smallest value of the stack to the top
** will sort largest value if encountered on the way */
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
				(*stack_a)->flag = -1;
				location_small--;
				continue ;
			}
			ft_rb(stack_b, 1);
			location_small--;
		}
	}
	else
		ft_small_pa_else(location_small, argc, stack_a, stack_b);
	ft_pa(stack_a, stack_b);
	(*stack_a)->flag = -1;
	ft_ra(stack_a, 1);
}
