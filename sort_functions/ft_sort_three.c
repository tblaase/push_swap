/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:55:23 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 15:55:20 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_sort_three_help(t_stack **stack_a, int *numbers)
/* only exists because of the 25 line per function restriction */
{
	if (numbers[0] > numbers[1] && numbers[1] > numbers[2])
	{
		ft_ra(stack_a, 1);
		ft_sa(stack_a, 1);
	}
	else if (numbers[0] < numbers[1] && numbers[1] > numbers[2]
		&& numbers[0] < numbers[2])
	{
		ft_sa(stack_a, 1);
		ft_ra(stack_a, 1);
	}
}

void	ft_sort_three(t_stack **stack_a)
/* this function will sort a stack_a by ascending order, smallest on top
** only works if there is 3 numbers */
{
	t_stack	*temp;
	int		numbers[3];
	int		i;

	i = 0;
	temp = *stack_a;
	while (temp != 0)
	{
		numbers[i] = temp->content;
		temp = temp->next;
		i++;
	}
	if (numbers[0] > numbers[1] && numbers[1] < numbers[2]
		&& numbers[0] < numbers[2])
		ft_sa(stack_a, 1);
	else if (numbers[0] < numbers[1] && numbers[1] > numbers[2]
		&& numbers[0] > numbers[2])
		ft_rra(stack_a, 1);
	else if (numbers[0] > numbers[1] && numbers[1] < numbers[2]
		&& numbers[0] > numbers[2])
		ft_ra(stack_a, 1);
	else
		ft_sort_three_help(stack_a, numbers);
}
