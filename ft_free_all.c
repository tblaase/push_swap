/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:01:55 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/13 19:20:50 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lst_free(t_stack **p)
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

void	ft_free_array(char **str)
/* will free the given array and set it to NULL */
{
	int	i;

	i = 0;
	while (str && str[i] != NULL)
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
}
