/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:40:58 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/29 21:42:23 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_small_sort(int argc, t_stack **stack_a, t_stack **stack_b)
{
	if (argc == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a, 1);
	}
	else if (argc == 3)
		ft_sort_three(stack_a);
	// else if (argc == 4)
	// 	ft_sort_four(stack_a, stack_b);
	else if (argc == 5)
		ft_sort_five(stack_a, stack_b);
}

static void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
/*
** check if sorted or backwards sorted
** if backwards sorted until a->next==Null(rra, pb)then until b==NULL(pa)
** for 500 elements 1497 actions for 100 elements 297 actions
*/
{
}

void	ft_push_half(int argc, t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	i = 0;
	while (i < (argc / 2))
	{
		ft_pb(stack_a, stack_b);
		i++;
	}
}

void	ft_sort(int argc, t_stack **stack_a, t_stack **stack_b)
{
	if (argc <= 100)
		ft_small_sort(argc, stack_a, stack_b);
	else
		ft_big_sort(argc, stack_a, stack_b);
}
