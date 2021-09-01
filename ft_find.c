/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:57:32 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/01 21:10:19 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest(t_stack **stack, int x)
/* this function will find the smallest number in a linked list
** will return the value of the smallest number found */
{
	t_stack	*temp;

	temp = *stack;
	while (temp != NULL)
	{
		if (temp->content < x)
			x = temp->content;
		temp = temp->next;
	}
	return (x);
}
