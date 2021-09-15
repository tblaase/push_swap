/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_lower.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:11:38 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 21:57:51 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* these functions sort the stack by their single parts */

void	ft_first(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < (*quart)->first)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a, 1);
		i++;
	}
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

void	ft_second(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < (*quart)->second && (*stack_a)->flag != -1)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a, 1);
		i++;
	}
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

void	ft_third_small(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int		i;

	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < (*quart)->third && (*stack_a)->flag != -1)
			ft_pb(stack_a, stack_b);
		else if ((*stack_a)->flag != -1)
			ft_ra(stack_a, 1);
		else
		{
			ft_support_big_sort(stack_a);
			break ;
		}
		i++;
	}
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

void	ft_third_big(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < (*quart)->third && (*stack_a)->flag != -1)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a, 1);
		i++;
	}
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

void	ft_fourth(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < (*quart)->fourth && (*stack_a)->flag != -1)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a, 1);
		i++;
	}
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
