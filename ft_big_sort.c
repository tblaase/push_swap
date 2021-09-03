/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:50:30 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/03 21:44:00 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
/* this function will initialize the big sort
** here i sort pairs of numbers together, bigger number on top */
{
	while (*stack_a != NULL)
	{
		if (*stack_a && (*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a, 1);
		ft_pb(stack_a, stack_b);
		if (*stack_a)
			ft_pb(stack_a, stack_b);
	}
	ft_big_sort_b(argc, stack_a, stack_b);
}

void	ft_big_sort_a(int argc, t_stack **stack_a, t_stack **stack_b)
/* this function will sort presorted data from stack_a to stack_b
** biggest number on top of stack
** stack_a = NULL when finished */
{
	t_stack	*temp_one;
	t_stack	*temp_two;
	int		i;

	temp_one = NULL;
	temp_two = NULL;
	while (*stack_a != NULL)
	{
		i = 0;
		while ((*stack_a)->next != NULL && (*stack_a)->content < (*stack_a)->next->content) ////////////////////////////////////////////////
		{
			(*stack_a)->swap = 0;
			ft_pb(stack_a, stack_b); // pushing to stack_b gets broken up, check the statement which operates this ////////////////////////////////////////
		}
		(*stack_a)->swap = 0;
		ft_pb(stack_a, stack_b);
		if (*stack_a == NULL)
			break ;
		ft_lst_copy(stack_a, &temp_one);
		ft_rra(&temp_one, 0);
		while ((*stack_a)->content < temp_one->content)
		{
			if ((*stack_a)->next == NULL)
			{
				if ((*stack_a)->content > (*stack_b)->content)
					ft_pb(stack_a, stack_b);
				else
				{
					while ((*stack_a)->content > (*stack_b)->content)
						ft_rb(stack_b, 1);
					ft_pb(stack_a, stack_b);
				}
				break ;
			}
			if (i != 0)
			{
				ft_lst_copy(stack_b, &temp_two); // add protection too
				ft_rrb(&temp_two, 0);
				if (temp_two->content < temp_one->content && temp_two != 0)
					break ;
			}
			if ((*stack_b)->swap == 0 && ((*stack_b)->content < temp_one->content)) // this || might need to be a &&
			{
				ft_rra(stack_a, 1);
				ft_pb(stack_a, stack_b);
				(*stack_b)->swap = 1;
				ft_rb(stack_b, 1);
			}
			else if ((*stack_b)->swap == 0)
			{
				(*stack_b)->swap = 1;
				ft_rb(stack_b, 1);
			}
			else // this should only be true if current part of stack_b got fully rotated, then you should push-> rotate the remainding stack over to stack_b ///// verify with debugging!!!!!!!
			{
				while ((*stack_a)->next != NULL && (*stack_a)->content < (*stack_a)->next->content)
				{
					ft_pb(stack_a, stack_b);
					(*stack_a)->swap = 1;
					ft_ra(stack_b, 1);
				}
				ft_pb(stack_a, stack_b);
			}
			// ft_free(&temp_one);
			if (*stack_a != NULL)
			{
				ft_lst_copy(&(*stack_a)->next, &temp_one);
				ft_rra(&temp_one, 0);
			}
			i++;
		}
		// ft_free(&temp_one);
		// ft_free(&temp_two);
		while (/**stack_a != NULL && */(*stack_b)->swap == 0)
		{
			(*stack_b)->swap = 1;
			ft_rb(stack_b, 1);
		}
	}
	// ft_free(&temp_one);
	ft_big_sort_b(argc, stack_a, stack_b);
}

void	ft_big_sort_b(int argc, t_stack **stack_a, t_stack **stack_b)
/* this function will sort presorted data from stack_b to stack_a
** smallest number on top of stack
** stack_b = NULL when finished */
{
	t_stack	*temp_one;
	t_stack	*temp_two;
	int		i;

	temp_one = NULL;
	temp_two = NULL;
	while (*stack_b != NULL)
	{
		i = 0;
		while ((*stack_b)->next != NULL && (*stack_b)->content > (*stack_b)->next->content)
		{
			(*stack_b)->swap = 0;
			ft_pa(stack_a, stack_b);
		}
		(*stack_b)->swap = 0;
		ft_pa(stack_a, stack_b);
		if (*stack_b == NULL)
			break ;
		// if (ft_if_sorted(argc, stack_a) == 1 && *stack_b ==NULL)
		// 	return ;
		ft_lst_copy(stack_b, &temp_one);
		ft_rrb(&temp_one, 0);
		while ((*stack_b)->content > temp_one->content) // add a check if temp->content is smaller than stack_a->content and bigger than stack_a bottom if bottom->swap != 0 this test is line 154ff
		{
			if ((*stack_b)->next == NULL)
			{
				if ((*stack_a)->content > (*stack_b)->content)
					ft_pa(stack_a, stack_b);
				else
				{
					while ((*stack_a)->content < (*stack_b)->content)
						ft_ra(stack_a, 1);
					ft_pa(stack_a, stack_b);
				}
				break ;
			}
			if (i != 0) // so it will only check after first iteration
			{
				ft_lst_copy(stack_a, &temp_two);
				ft_rra(&temp_two, 0);
				if (temp_two->content > temp_one->content && temp_two->swap != 0)
					break ;
			}
			if (temp_one->content < (*stack_a)->content && (*stack_a)->swap == 0)
			{
				ft_rrb(stack_b, 1);
				ft_pa(stack_a, stack_b);
				(*stack_a)->swap = 1;
				ft_ra(stack_a, 1);
			}
			else if ((*stack_a)->swap == 0)
			{
				(*stack_a)->swap = 1;
				ft_ra(stack_a, 1);
			}
			else
			{
				if ((*stack_b)->next != NULL)
				{
					// ft_free(&temp_one);
					ft_lst_copy(stack_b, &temp_one);
					ft_rrb(&temp_one, 0);
					while ((*stack_b)->content < temp_one->content)
					{
						ft_pa(stack_a, stack_b);
						(*stack_a)->swap = 1;
						ft_ra(stack_a, 1);
						// ft_free(&temp_one);
						ft_lst_copy(stack_b, &temp_one);
						ft_rrb(&temp_one, 0);
					}
				}
				ft_pa(stack_a, stack_b);
			}
			// ft_free(&temp_one);
			if (*stack_b != NULL)
			{
				ft_lst_copy(stack_b, &temp_one);
				ft_rrb(&temp_one, 0);
			}
			i ++;
		}
		// ft_free(&temp_one);
		// ft_free(&temp_two);
		while (/**stack_b != NULL && */(*stack_a)->swap == 0)
		{
			(*stack_a)->swap = 1;
			ft_ra(stack_a, 1);
		}
	}
	// ft_free(&temp_one);
	if (ft_if_sorted(argc, stack_a) == 1 && *stack_b == NULL)
		return ;
	ft_big_sort_a(argc, stack_a, stack_b);
}
