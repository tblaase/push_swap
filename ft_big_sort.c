/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:14:28 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 13:33:00 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*temp;
	t_quart	*quart;

	quart = ft_calloc(1, sizeof(t_quart));
	ft_quarters(&quart, argc, stack_a);
//first
	ft_first(argc, stack_a, stack_b, &quart);
//second
	ft_second(argc, stack_a, stack_b, &quart);
//third
	ft_third_small(argc, stack_a, stack_b, &quart);
//fourth
	ft_last(argc, stack_a, stack_b);
	free(quart);
}

void	ft_big_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*temp;
	t_quart	*quart;

	quart = ft_calloc(1, sizeof(t_quart));
	ft_eigths(&quart, argc, stack_a);
//first
	i = 0;
	while (i < argc)
	{
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
//second
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
//third
	ft_third_big(argc, stack_a, stack_b, &quart);
//fourth
	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < quart->fourth && (*stack_a)->flag != -1)
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
//fifth
	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < quart->fifth && (*stack_a)->flag != -1)
			ft_pb(stack_a, stack_b);
		else if ((*stack_a)->flag != -1)
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
//sixth
	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < quart->sixth && (*stack_a)->flag != -1)
			ft_pb(stack_a, stack_b);
		else if ((*stack_a)->flag != -1)
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
//seventh
	i = 0;
	while (i < argc)
	{
		if ((*stack_a)->content < quart->seventh && (*stack_a)->flag != -1)
			ft_pb(stack_a, stack_b);
		else if ((*stack_a)->flag != -1)
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
//eigth
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
	ft_lst_free(&temp);
	free(quart);
}
