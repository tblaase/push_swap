/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:11:47 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 13:32:15 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_support_big_sort(t_stack **stack_a)
{
	t_stack	*temp;

	temp = NULL;
	ft_lst_copy(stack_a, &temp);
	ft_rra(&temp, 0);
	while (temp->flag != -1)
	{
		ft_rra(stack_a, 1);
		ft_rra(&temp, 0);
	}
	ft_lst_free(&temp);
}

void	ft_fifth(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int	i;
}

void	ft_sixth(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int	i;
}

void	ft_seventh(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int	i;
}

void	ft_last(int argc, t_stack **stack_a, t_stack **stack_b)
{
	while ((*stack_a)->flag != -1)
		ft_pb(stack_a, stack_b);
	ft_set_flag(stack_a, 0);
	while (*stack_b != NULL)
	{
		ft_large_pa(argc, stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		ft_small_pa(argc, stack_a, stack_b);
	}
	while ((*stack_a)->flag == -1)
		ft_ra(stack_a, 1);
}
