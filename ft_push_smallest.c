/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 20:11:46 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/31 18:41:38 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push_smallest_a_help(t_stack **stack_a, t_stack **stack_b,
	int i, int n)
{
	if (n < 3)
	{
		i = 0;
		while (i < n)
		{
			ft_ra(stack_a, 1);
			i++;
		}
	}
	else
	{
		while (i >= n)
		{
			ft_rra(stack_a, 1);
			i--;
		}
	}
}

void	ft_push_smallest_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	int		x;
	int		n;
	t_stack	*temp;

	i = 0;
	temp = *stack_a;
	x = temp->content;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
		if (x > temp->content)
		{
			n = i;
			x = temp->content;
		}
	}
	ft_push_smallest_a_help(stack_a, stack_b, i, n);
	ft_pb(stack_a, stack_b);
}

// static void	ft_push_biggest_b_help(t_stack **stack_a, t_stack **stack_b, int i, int n)
// {
// 	if (n <= 3)
// 	{
// 		i = 0;
// 		while (i < n)
// 		{
// 			ft_rb(stack_b, 1);
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		while (i > n)
// 		{
// 			ft_rrb(stack_b, 1);
// 			i--;
// 		}
// 	}
// }

// void	ft_push_biggest_b(t_stack **stack_a, t_stack **stack_b)
// {
// 	int		i;
// 	int		x;
// 	int		n;
// 	int		i;
// 	t_stack	*temp;

// 	i = 0;
// 		temp = *stack_b;
// 		x = temp->content;
// 		while (temp->next != NULL)
// 		{
// 			temp = temp->next;
// 			i++;
// 			if (x < temp->content)
// 			{
// 				n = i;
// 				x = temp->content;
// 			}
// 		}
// 		ft_push_biggest_a_help(stack_a, stack_b, i , n);
// 		ft_pa(stack_a, stack_b);
// }
