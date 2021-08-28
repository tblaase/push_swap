/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:40:58 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/28 22:38:10 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_small_sort(int argc, t_stack **stack_a, t_stack **stack_b)
{
	if (argc == 3)
		ft_sort_three(stack_a);
	else
		ft_sort_small(argc, stack_a, stack_b, 1);
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
	ft_push_half(argc, stack_a, stack_b);
	if (argc <= 100)
		ft_small_sort(argc, stack_a, stack_b);
	else
		ft_big_sort(argc, stack_a, stack_b);
	while ((*stack_b)->next != NULL)
	{
		ft_rrb(stack_b, 1);
		ft_pa(stack_a, stack_b);
		ft_ra(stack_a, 1);
	}
	ft_pa(stack_a, stack_b);
	ft_ra(stack_a, 1);
}
