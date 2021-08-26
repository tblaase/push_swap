/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:31:02 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/19 17:59:33 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_sa(t_stack *stack_a)
/*
** swap the first two elements on top of stack a
** do nothing if only one or no elements on stack
*/
{
	t_stack *temp;

	temp = stack_a->next;
	stack_a->next = temp->next;
	temp->next = stack_a;
	return (temp);
}
