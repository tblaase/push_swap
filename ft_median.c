/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:16:41 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/13 17:56:16 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate_smallest(t_stack **stack)
{
	int	location;

	location = ft_find_smallest(stack, 2147483647);
	while (location > 0)
	{
		ft_ra(stack, 0);
		location--;
	}
}

float	ft_median(int argc, t_stack **stack_a)
{
	float	median;
	int		i;
	t_stack	*temp;

	i = 1;
	temp = NULL;
	ft_lst_copy(stack_a, &temp);
	if (argc % 2 == 0)
	{
		while (temp)
		{
			ft_rotate_smallest(&temp);
			if (i < argc / 2)
				temp->content = 2147483647;
			else
				break ;
			i++;
		}
		median = (float)temp->content;
		temp->content = 2147483647;
		ft_rotate_smallest(&temp);
		median = (median + (float)temp->content) / 2;
	}
	else
	{
		while (temp)
		{
			ft_rotate_smallest(&temp);
			if (i < (argc / 2) + 1)
				temp->content = 2147483647;
			else
				break ;
			i++;
		}
		median = (float)temp->content;
	}
	ft_lst_free(&temp);
	return (median);
}
