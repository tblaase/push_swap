/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:31:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/19 17:59:24 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_sb(t_stack *stack_b)
/*
** swap the first two elements on top of stack b
** do nothing if only one or no elements on stack
*/
{
	t_stack *temp;

	temp = stack_b->next;
	stack_b->next = temp->next;
	temp->next = stack_b;
	return (temp);
}
