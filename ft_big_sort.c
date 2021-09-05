/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:24:30 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/05 17:03:28 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
/* this function will initialize the big sort
** here i sort pairs of numbers together, bigger number on top */
{
	while (*stack_a != NULL)
	{
		if (*stack_a != NULL && (*stack_a)->next != NULL
			&& (*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a, 1);
		if (ft_one_stack_left_a(stack_a) == 1)
			break ;
		ft_pb(stack_a, stack_b);
		if (*stack_a)
			ft_pb(stack_a, stack_b);
	}
	ft_big_sort_b(argc, stack_a, stack_b);
}
