/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:57:32 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 15:53:48 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_smallest(t_stack **stack, int x)
/* this function will find the smallest number in a linked list
** will return the location of the smallest number found, 0 is on top
** if no smaller number than x is found, the return is -1 */
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
	while (temp && temp->content != x)
	{
		i++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	return (i);
}

int	ft_find_largest(t_stack **stack, int x)
/* this function will find the largest number in a linked list
** will return the location of the largest number found, 0 is on top
** if no larger number than x is found, the return is -1 */
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
	while (temp && temp->content != x)
	{
		i++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	return (i);
}
