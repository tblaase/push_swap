/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:46:12 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/28 22:37:53 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_small(int argc, t_stack **stack_a, t_stack **stack_b, int flag)
{
	int	a;
	int	b;

	a = (*stack_a)->content;
	b = (*stack_b)->content;
	if (a > b && flag != 1 && flag != 4 && argc >= 1)
	{
		argc--;
		ft_pa(stack_a, stack_b);
		ft_ra(stack_a, 1);
		ft_sort_small(argc, stack_a, stack_b, 1);
	}
	else if (a > b && flag != 2 && flag != 3 && argc >= 1)
	{
		argc--;
		ft_pb(stack_a, stack_b);
		ft_rb(stack_b, 1);
		ft_sort_small(argc, stack_a, stack_b, 2);
	}
	else if (a < b && flag != 3 && flag != 2 && argc >= 1)
	{
		argc--;
		ft_pb(stack_a, stack_b);
		ft_rb(stack_b, 1);
		ft_sort_small(argc, stack_a, stack_b, 3);
	}
	else if (a < b && flag != 1 && flag != 4 && argc >= 1)
	{
		argc--;
		ft_pa(stack_a, stack_b);
		ft_ra(stack_a, 1);
		ft_sort_small(argc, stack_a, stack_b, 4);
	}
}
