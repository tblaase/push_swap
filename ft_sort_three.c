/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:55:23 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/30 20:24:01 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_three_help(t_stack **stack_a, int *numbers)
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
	if (numbers[0] < numbers[1] && numbers[1] < numbers[2])
		return ;
	else if (numbers[0] > numbers[1] && numbers[1] < numbers[2]
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
