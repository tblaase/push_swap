/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_sorted_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:59:03 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/05 17:00:41 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_if_sorted_b(int argc, t_stack **stack)
/* this function returns 1 if the stack is sorted corretly, 0 if not */
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->next != NULL && temp->content > temp->next->content)
		{
			temp = temp->next;
			i++;
		}
		else if (temp->next == NULL)
		{
			i++;
			if (i == argc)
				return (1);
		}
		else
			break ;
	}
	return (0);
}
