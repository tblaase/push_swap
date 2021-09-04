/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:43:25 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/04 18:08:59 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
/* take element from top of stack a and put it on top stack b
** do nothing if stack a is empty */

{
	t_stack	*temp;

	if (*stack_a)
	{
		temp = (*stack_a)->next;
		(*stack_a)->next = *stack_b;
		*stack_b = *stack_a;
		*stack_a = temp;
		write(1, "pb\n", 3);
	}
}
