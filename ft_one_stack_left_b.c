/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one_stack_left_b.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:01:21 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/05 17:04:10 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_one_stack_left_b(t_stack **stack)
/* this function returns 1 if only one sorted stack is left, returns 0 if not
** returns -1 if stack == NULL */
{
	t_stack	*temp;
	int		i;
	int		len;

	if (*stack == NULL)
		return (-1);
	len = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->next == NULL)
		{
			len++;
			break ;
		}
		temp = temp->next;
		len++;
	}
	return (ft_if_sorted_b(len, stack));
}
