/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:14:28 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/14 22:06:39 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_is_lower(t_stack **stack, float median)
{
	t_stack	*temp;

	temp = *stack;
	while (temp != NULL)
	{
		if ((float)temp->content < median)
			return (1);
		temp = temp->next;
	}
	return (0);
}

static void	ft_big_sort_prep(int argc, t_stack **stack_a, t_stack **stack_b)
{
	float	median;

	median = ft_median(argc, stack_a);
	while ((*stack_a)->flag != -1)
	{
		if ((float)(*stack_a)->content < median)
			ft_pb(stack_a, stack_b);
		else
		{
			if (ft_is_lower(stack_a, median))
			{
				(*stack_a)->flag = -1;
				ft_ra(stack_a, 1);
			}
			else
				break ;
		}
	}
}

void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
{
	int		location;

	ft_big_sort_prep(argc, stack_a, stack_b);
	ft_set_flag(stack_a, 0);
	while (*stack_b != NULL)
	{
		ft_large_pa(argc, stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		ft_small_pa(argc, stack_a, stack_b);
	}
	while ((*stack_a)->flag == -1)
		ft_ra(stack_a, 1);
	while ((*stack_a)->flag == 0)
		ft_pb(stack_a, stack_b);
	ft_set_flag(stack_a, 0);
	while (*stack_b != NULL)
	{
		ft_large_pa(argc, stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		ft_small_pa(argc, stack_a, stack_b);
	}
	while ((*stack_a)->flag == -1)
		ft_ra(stack_a, 1);
}

void	ft_big_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
// divide my stack into four portions, starting with the smallest quarter of numbers /////////////////////////////////////////
{
	int		i;
	t_stack	*temp;
	t_quart	*quart;

	quart = ft_calloc(1, sizeof(t_quart));
	ft_quarters(&quart, argc, stack_a);
//first_quart
	i = 0;
	while (i < argc)
	{
		// if (ft_find_smallest) //dont remember what i wanted to do here
		if ((*stack_a)->content < quart->first)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a, 1);
		i++;
	}
	while (*stack_b != NULL)
	{
		ft_large_pa(argc, stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		ft_small_pa(argc, stack_a, stack_b);
	}
	while ((*stack_a)->flag == -1)
		ft_ra(stack_a, 1);
//second_quart
	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < quart->second && (*stack_a)->flag != -1)
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a, 1);
		i++;
	}
	while (*stack_b != NULL)
	{
		ft_large_pa(argc, stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		ft_small_pa(argc, stack_a, stack_b);
	}
	while ((*stack_a)->flag == -1)
		ft_ra(stack_a, 1);
//third_quart
	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < quart->third && (*stack_a)->flag != -1)
			ft_pb(stack_a, stack_b);
		else if ((*stack_a)->flag != -1)// SAVE MOVES HERE BY USING RRA INSTEAD OF RA!!!!!!!, saves ~125 moves
			ft_ra(stack_a, 1);
		else
		{
			temp = NULL;
			ft_lst_copy(stack_a, &temp);
			ft_rra(&temp, 0);
			while(temp->flag != -1)
			{
				ft_rra(stack_a, 1);
				ft_rra(&temp, 0);
			}
			ft_lst_free(&temp);
			break ;
		}
		i++;
	}
	while (*stack_b != NULL)
	{
		ft_large_pa(argc, stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		ft_small_pa(argc, stack_a, stack_b);
	}
	while ((*stack_a)->flag == -1)
		ft_ra(stack_a, 1);
//fourth_quart
	while ((*stack_a)->flag != -1)
		ft_pb(stack_a, stack_b);
	ft_set_flag(stack_a, 0);
	while (*stack_b != NULL)
	{
		ft_large_pa(argc, stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		ft_small_pa(argc, stack_a, stack_b);
	}
	while ((*stack_a)->flag == -1)
		ft_ra(stack_a, 1);
// SPLIT INTO MORE THAN 4 SECTIONS, TRY 8 !!!!!!!!!!!!!!!!!!!
}
