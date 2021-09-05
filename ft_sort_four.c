/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:46:00 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/05 15:10:51 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_four(t_stack **stack_a, t_stack **stack_b)
{
	ft_pb(stack_a, stack_b);
	ft_pb(stack_a, stack_b);
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_ra(stack_a, 1);
	if ((*stack_b)->content > ((*stack_b)->next->content))
		ft_rb(stack_b, 1);
	while (*stack_b != NULL)
	{
		if (((*stack_a)->content > (*stack_b)->content)
			|| (*stack_a)->swap == 1)
			ft_pa(stack_a, stack_b);
		(*stack_a)->swap = 1;
		ft_ra(stack_a, 1);
	}
	while ((*stack_a)->swap == 0)
		ft_ra(stack_a, 1);
}
