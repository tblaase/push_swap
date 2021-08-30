/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big-sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:50:30 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/30 21:48:04 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b, int p_max)
/*
** check if sorted or backwards sorted
** if backwards sorted until a->next==Null(rra, pb)then until b==NULL(pa)
** for 500 elements 1497 actions for 100 elements 297 actions
*/
{
	int	p_count;

	while (*stack_a != NULL)
	{
		p_count = 0;
		while (p_count < p_max)
		{
			ft_pb(stack_a, stack_b);
			p_count++;
		}
		p_count = 0;
		if (*stack_a && (*stack_a)->content < (*stack_a)->next->content && p_max == 2)
			ft_sa(stack_a, 1);
		if ((*stack_b)->content < (*stack_b)->next->content && p_max ==2)
			ft_sb(stack_b, 1);
		while (p_count < p_max && *stack_a != NULL)
		{
			if ((*stack_a)->content < (*stack_b)->content
				&& (*stack_b)->swap == 0)
			{
				(*stack_b)->swap++;
				ft_rb(stack_b, 1);
			}
			else
			{
				p_count++;
				ft_pb(stack_a, stack_b);
				(*stack_b)->swap++;
				ft_rb(stack_b, 1);
			}
		}
		while ((*stack_b)->swap == 0)
		{
			(*stack_b)->swap++;
			ft_rb(stack_b, 1);
		}
	}
	if (p_max <= (argc / 2))
	{
		while (*stack_b != NULL)
		{
			// if ((*stack_b)->next != NULL)
			// 	ft_rrb(stack_b, 1); // rrb creates infinite new lists if only one in list!!!!!
			(*stack_b)->swap = 0;
			ft_pa(stack_a, stack_b);
		}
		p_max = p_max * 2;
		ft_big_sort(argc, stack_a, stack_b, p_max);
	}
}
