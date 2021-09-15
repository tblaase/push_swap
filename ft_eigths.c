/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eigths.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 11:44:52 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 13:09:01 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_eigths_help(t_quart **quart, int argc, t_stack **stack_a)
{
	t_stack	*temp;

	temp = NULL;
	ft_lst_copy(stack_a, &temp);
	ft_del_smaller_x(&temp, (*quart)->fourth);
	argc = ft_lst_size(&temp);
	(*quart)->sixth = ft_median(argc, &temp);
	ft_del_smaller_x(&temp, (*quart)->sixth);
	argc = ft_lst_size(&temp);
	(*quart)->seventh = ft_median(argc, &temp);
	ft_lst_copy(stack_a, &temp);
	ft_del_smaller_x(&temp, (*quart)->fourth);
	ft_del_larger_x(&temp, (*quart)->sixth);
	argc = ft_lst_size(&temp);
	(*quart)->fifth = ft_median(argc, &temp);
	ft_lst_free(&temp);
}

void	ft_eigths(t_quart **quart, int argc, t_stack **stack_a)
{
	t_stack	*temp;

	temp = NULL;
	(*quart)->fourth = ft_median(argc, stack_a);
	ft_lst_copy(stack_a, &temp);
	ft_set_flag(&temp, 0);
	ft_del_larger_x(&temp, (*quart)->fourth);
	argc = ft_lst_size(&temp);
	(*quart)->second = ft_median(argc, &temp);
	ft_del_larger_x(&temp, (*quart)->second);
	argc = ft_lst_size(&temp);
	(*quart)->first = ft_median(argc, &temp);
	ft_lst_copy(stack_a, &temp);
	ft_del_larger_x(&temp, (*quart)->fourth);
	ft_del_smaller_x(&temp, (*quart)->second);
	argc = ft_lst_size(&temp);
	(*quart)->third = ft_median(argc, &temp);
	ft_lst_free(&temp);
	ft_eigths_help(quart, argc, stack_a);
}
