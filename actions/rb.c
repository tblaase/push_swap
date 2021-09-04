/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:44:18 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/04 18:09:09 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_stack **stack_b, int flag)
/* shift up all elements of stack b by one
** first element becomes last */
{
	t_stack	*temp;

	if ((*stack_b)->next == NULL)
		return ;
	temp = (*stack_b)->next;
	(*stack_b)->next = NULL;
	ft_lst_add_back(&temp, *stack_b);
	*stack_b = temp;
	if (flag == 1)
		write(1, "rb\n", 3);
}
