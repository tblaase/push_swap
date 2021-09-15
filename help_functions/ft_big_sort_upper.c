/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_upper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:11:47 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 21:58:38 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* these functions sort the stack by their single parts */

void	ft_support_big_sort(t_stack **stack_a)
/* this function makes sure that i rotate in the shortesst direction */
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

	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < (*quart)->fifth && (*stack_a)->flag != -1)
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

void	ft_sixth(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < (*quart)->sixth && (*stack_a)->flag != -1)
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

void	ft_seventh(int argc, t_stack **stack_a, t_stack **stack_b,
	t_quart **quart)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < (*quart)->seventh && (*stack_a)->flag != -1)
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
