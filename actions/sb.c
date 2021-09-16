/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:31:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/16 16:00:48 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_stack **stack_b, int flag)
/* swap the first two elements on top of stack b
** do nothing if only one or no elements on stack */
{
	t_stack	*temp;

	if (stack_b && (*stack_b)->next != NULL)
	{
		temp = (*stack_b)->next;
		(*stack_b)->next = temp->next;
		temp->next = *stack_b;
		*stack_b = temp;
	}
	if (flag == 1)
		write(1, "sb\n", 3);
}
