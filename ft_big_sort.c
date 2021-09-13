/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:14:28 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/13 21:09:28 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_is_lower(t_stack **stack, float median)
{
	t_stack	*temp;

	temp = *stack;
	while (temp != NULL)
	{
		if ((float)temp->content < median)
			return (1);
		temp = temp->next;
	}
	return (0);
}

static void	ft_big_sort_prep(int argc, t_stack **stack_a, t_stack **stack_b)
{
	float	median;

	median = ft_median(argc, stack_a);
	while ((*stack_a)->push != -1)
	{
		if ((float)(*stack_a)->content < median)
			ft_pb(stack_a, stack_b);
		else
		{
			if (ft_is_lower(stack_a, median))
			{
				(*stack_a)->push = -1;
				ft_ra(stack_a, 1);
			}
			else
				break ;
		}
	}
}

void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
{
	int		location;

	ft_big_sort_prep(argc, stack_a, stack_b);
	ft_set_push(stack_a, 0);
	while (*stack_b != NULL)
	{
		ft_large_pa(argc, stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		ft_small_pa(argc, stack_a, stack_b);
	}
	while ((*stack_a)->push == 1)
		ft_ra(stack_a, 1);
	while ((*stack_a)->push == 0)
		ft_pb(stack_a, stack_b);
	ft_set_push(stack_a, 0);
	while (*stack_b != NULL)
	{
		ft_large_pa(argc, stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		ft_small_pa(argc, stack_a, stack_b);
	}
	while ((*stack_a)->push == 1)
		ft_ra(stack_a, 1);
}

void	ft_big_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
// divide my stack into four portions, starting with the smallest quarter of numbers /////////////////////////////////////////
{
}
