/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:46:12 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/30 20:23:58 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int		a;
	int		b;
	int		x;

	ft_push_smallest_a(stack_a, stack_b);
	ft_push_smallest_a(stack_a, stack_b);
	// ft_pb(stack_a, stack_b);
	// ft_pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	// a = (*stack_b)->content;
	// b = (*stack_b)->next->content;
	// if (a < b)
	// 	ft_sb(stack_b, 1);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
	// while (*stack_b != NULL)
	// {
	// 	if (((*stack_a)->content > (*stack_b)->content)
	// 		|| (*stack_a)->swap == 1)
	// 	{
	// 		ft_pa(stack_a, stack_b);
	// 		(*stack_a)->swap = 1;
	// 		ft_ra(stack_a, 1);
	// 	}
	// 	else
	// 	{
	// 		(*stack_a)->swap = 1;
	// 		ft_ra(stack_a, 1);
	// 	}
	// }
}
