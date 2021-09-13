/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:34:03 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/13 15:03:09 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_push(t_stack **stack, int x)
/* will set all push values of linked list stack to value of x
** does nothing if stack == NULL */
{
	t_stack	*temp;

	temp = *stack;
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			temp->push = x;
			break ;
		}
		temp->push = x;
		temp = temp->next;
	}
}

// void	ft_set_swap(t_stack **stack, int x)
// /* will set all swap values of linked list stack to value of x
// ** does nothing if stack == NULL */
// {
// 	t_stack	*temp;

// 	temp = *stack;
// 	while (temp != NULL)
// 	{
// 		if (temp->next == NULL)
// 		{
// 			temp->swap = x;
// 			break ;
// 		}
// 		temp->swap = x;
// 		temp = temp->next;
// 	}
// }
