/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:44:18 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/27 21:50:42 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_stack **stack_b)
/*
** shift up all elements of stack b by one
** first element becomes last
*/
{
	t_stack	*temp;

	temp = (*stack_b)->next;
	(*stack_b)->next = NULL;
	ft_lst_add_back(&temp, *stack_b);
	*stack_b = temp;
	write(1, "rb\n", 3);
}
