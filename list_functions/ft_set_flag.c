/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:34:03 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 15:54:45 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_set_flag(t_stack **stack, int x)
/* will set all push values of linked list stack to value of x
** does nothing if stack == NULL */
{
	t_stack	*temp;

	temp = *stack;
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			temp->flag = x;
			break ;
		}
		temp->flag = x;
		temp = temp->next;
	}
}
