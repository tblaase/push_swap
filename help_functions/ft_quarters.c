/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quarters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:09:31 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 15:54:08 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_quarters(t_quart **quart, int argc, t_stack **stack_a)
/* will find the median and the median of the lower and upper part
** those numbers will be stored in a struct called quart */
{
	t_stack	*temp;

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
	(*quart)->third = ft_median(argc, &temp);
	ft_lst_free(&temp);
}
