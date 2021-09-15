/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:16:41 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 22:10:56 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_rotate_smallest(t_stack **stack)
/* this function will rotate the smallest number of the stack to the top
** doesn't check for shortest way */
{
	int	location;

	location = ft_find_smallest(stack, 2147483647);
	while (location > 0)
	{
		ft_ra(stack, 0);
		location--;
	}
}

static int	ft_median_while(t_stack **temp, int i, int argc)
/* only exists because of the 25 line per function restriction */
{
	while (temp)
	{
		ft_rotate_smallest(temp);
		if (i < argc / 2)
			ft_del_top(temp);
		else
			break ;
		i++;
	}
	return (i);
}

float	ft_median(int argc, t_stack **stack_a)
/* this function will find the median of the given stack */
{
	float	median;
	int		i;
	t_stack	*temp;

	i = 1;
	temp = NULL;
	ft_lst_copy(stack_a, &temp);
	if (argc % 2 == 0)
	{
		i = ft_median_while(&temp, i, argc);
		median = (float)temp->content;
		temp->content = 2147483647;
		ft_rotate_smallest(&temp);
		median = (median + (float)temp->content) / 2;
	}
	else
	{
		i = ft_median_while(&temp, i, argc);
		median = (float)temp->content;
	}
	ft_lst_free(&temp);
	return (median);
}
