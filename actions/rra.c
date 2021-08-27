/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:45:04 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/27 22:17:42 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_stack **stack_a)
/*
** shift down all elements of stack a by one
** last element becomes first
*/
{
	t_stack	*temp;
	t_stack	*new;

	temp = *stack_a;
	while (temp->next != NULL)
		temp = temp->next;
	new = temp;
	temp->next = NULL;
	new->next = *stack_a;
	(*stack_a)->next = NULL;
	*stack_a = new;
}
// this segfaults...
