/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:42:33 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/04 18:08:55 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
/* take element from top of stack b and put it on top stack a
** do nothing if stack b is empty */

{
	t_stack	*temp;

	if (*stack_b)
	{
		temp = (*stack_b)->next;
		(*stack_b)->next = *stack_a;
		*stack_a = *stack_b;
		*stack_b = temp;
		write(1, "pa\n", 3);
	}
}
