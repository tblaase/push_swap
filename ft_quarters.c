/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quarters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:09:31 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/14 21:33:24 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_del_top(t_stack **stack)
/* will free the first element of the linked list
** second element will be the new first */
{
	t_stack	*temp;

	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
}

void	ft_del_larger_x(t_stack **stack, float x)
/* will delete every element of the stack larger than x */
{
	while ((*stack)->flag != 1)
	{
		if ((*stack)->content > x)
			ft_del_top(stack);
		else
		{
			(*stack)->flag = 1;
			ft_ra(stack, 0);
		}
	}
	ft_set_flag(stack, 0);
}

void	ft_del_smaller_x(t_stack **stack, float x) //will not delete the appropriate ammount, one number below the x is skipped for some reason
/* will delete every element of the stack smaller than x */
{
	while ((*stack)->flag != 1)
	{
		if ((*stack)->content < x)
			ft_del_top(stack);
		else
		{
			(*stack)->flag = 1;
			ft_ra(stack, 0);
		}
	}
	ft_set_flag(stack, 0);
}

void	ft_quarters(t_quart **quart, int argc, t_stack **stack_a)
/* will find the median and the median of the lower and upper part
** those numbers will be stored in a struct called quart */
{
	t_stack	*temp;
	// int		i;

	temp = NULL;
	(*quart)->second = ft_median(argc, stack_a);
	ft_lst_copy(stack_a, &temp);
	ft_set_flag(&temp, 0);
	ft_del_larger_x(&temp, (*quart)->second);
	argc = ft_lst_size(&temp);
	(*quart)->first = ft_median(argc, &temp);
	ft_lst_copy(stack_a, &temp);
	ft_del_smaller_x(&temp, (*quart)->second);
	argc = ft_lst_size(&temp);
	//
	// ft_display_list(temp);
	//
	(*quart)->third = ft_median(argc, &temp);
}
