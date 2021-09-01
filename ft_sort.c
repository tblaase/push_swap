/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:40:58 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/01 21:23:00 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_small_sort(int argc, t_stack **stack_a, t_stack **stack_b)
/* will determine which small_sort function to call */
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

void	ft_push_half(int argc, t_stack **stack_a, t_stack **stack_b)
/* will push half of stack_a to stack_b */
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
/* will determine if small_sort or big_sort is to be called */
{
	if (argc <= 5)
		ft_small_sort(argc, stack_a, stack_b);
	else
		ft_big_sort(argc, stack_a, stack_b);
}
