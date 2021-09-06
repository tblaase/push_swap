/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:01:55 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/06 16:38:11 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_all(t_stack **p)
/* will free the given linked list and set it to NULL */
{
	t_stack	*temp;

	temp = NULL;
	while (*p)
	{
		temp = (*p)->next;
		free(*p);
		*p = NULL;
		if (temp == NULL)
			break ;
		*p = temp;
	}
}
