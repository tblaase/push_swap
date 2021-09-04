/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:44:01 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/04 18:09:04 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack **stack_a, int flag)
/* shift up all elements of stack a by one
** first element becomes last */
{
	t_stack	*temp;

	if ((*stack_a)->next == NULL)
		return ;
	temp = (*stack_a)->next;
	(*stack_a)->next = NULL;
	ft_lst_add_back(&temp, *stack_a);
	*stack_a = temp;
	if (flag == 1)
		write(1, "ra\n", 3);
}
