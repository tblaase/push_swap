/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:57:32 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/13 11:34:49 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_smallest(t_stack **stack, int x)
/* this function will find the smallest number in a linked list
** will return the location of the smallest number found, 0 is on top */
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp != NULL)
	{
		if (temp->content < x)
			x = temp->content;
		temp = temp->next;
	}
	temp = *stack;
	while (temp->content != x)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

int	ft_find_largest(t_stack **stack, int x)
/* this function will find the largest number in a linked list
** will return the location of the largest number found, 0 is on top */
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp != NULL)
	{
		if (temp->content > x)
			x = temp->content;
		temp = temp->next;
	}
	temp = *stack;
	while (temp->content != x)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
