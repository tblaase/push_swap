/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:25:00 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/05 17:56:57 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	i = 0;
	while (*stack_a != NULL)
	{
		if (i != 0 || *stack_b == NULL)
		{
			while ((*stack_a)->next != NULL
				&& (*stack_a)->content < (*stack_a)->next->content) // this while loop and the next two lines after it will push a sorted part to the other stack
			{
				(*stack_a)->swap = 0;
				ft_pb(stack_a, stack_b);
			}
			(*stack_a)->swap = 0;
			ft_pb(stack_a, stack_b);
			if (ft_one_stack_left_a(stack_a) == 1)// &&ft_one_stack_a(stack_b == 0) maybe will fix it
			{
				ft_set_swap(stack_a, 0);
				break ;
			}
		}
		i = 0;
		if (*stack_a == NULL)
			break ;
		if ((*stack_a)->next == NULL)// this statement will engage if only one element left in the list
		{
			while ((*stack_a)->content < (*stack_b)->content)
			{
				(*stack_b)->swap = 1;
				ft_rb(stack_b, 1);
			}
			ft_pb(stack_a, stack_b);
			ft_lst_copy(stack_b, &temp_one);
			ft_rrb(&temp_one, 0);
			if ((*stack_b)->content > (*stack_b)->next->content && temp_one->content < (*stack_b)->content)
				(*stack_b)->swap = 1;
			else
			{
				(*stack_b)->swap = 0;
				while ((*stack_b)->swap == 0)
				{
					(*stack_b)->swap = 1;
					ft_rb(stack_b, 1);
				}
			}
			break ;
		}
		ft_lst_copy(stack_a, &temp_one);
		ft_rra(&temp_one, 0);
		ft_lst_copy(&temp_one, &temp_two);
		ft_rra(&temp_two, 0);
		while (temp_one->content > temp_two->content)// this loop is taking one sorted part and sort it into a already pushed part which is currently on top of the other stack // maybe change this loop so it takes every object of presorted stacks
		{
			if (i != 0) // so it will only check after first iteration
			{
				ft_lst_copy(stack_b, &temp_two);
				ft_rrb(&temp_two, 0);
				if (temp_two->content < temp_one->content && temp_two->swap != 0)
				{
					i++;
					break ;
				}
			}
			i++;
			if ((*stack_b)->swap == 0 && temp_one->content > (*stack_b)->content)// this statement pushes and rotates one value to the other list
			{
				ft_rra(stack_a, 1);
				ft_pb(stack_a, stack_b);
				(*stack_b)->swap = 1;
				ft_rb(stack_b, 1);
			}
			else if ((*stack_b)->swap == 0)// this staement will rotate the list i want to push to
			{
				(*stack_b)->swap = 1;
				ft_rb(stack_b, 1);
			}
			else // this will only happen if current part of stack_b got fully rotated and there is still part of stack_a left to be pushed
			{
				if (*stack_a != NULL && (*stack_a)->next != NULL)
				{
					// ft_free(&temp_one);
					// ft_free(&temp_two);
					ft_lst_copy(stack_a, &temp_one);
					ft_rra(&temp_one, 0);
					ft_lst_copy(&temp_one, &temp_two);
					ft_rra(&temp_two, 0);
					while (temp_one->content > temp_two->content)// this loop will take all of the current sorted portion and push rotate it to the other stack
					{
						ft_rra(stack_a, 1);
						ft_pb(stack_a, stack_b);
						(*stack_b)->swap = 1;
						ft_rb(stack_b, 1);
						// ft_free(&temp_one);
						// ft_free(&temp_two);
						if ((*stack_a)->next == NULL)
							break ;
						ft_lst_copy(stack_a, &temp_one);
						ft_rra(&temp_one, 0);
						ft_lst_copy(&temp_one, &temp_two);
						ft_rra(&temp_two, 0);
					}
				}
				ft_rra(stack_a, 1); // not protected, might cause problems
				ft_pb(stack_a, stack_b);
				(*stack_b)->swap = 1;
				ft_rb(stack_b, 1);
				break ;
			}
			// ft_free(&temp_one);
			if (*stack_a == NULL || (*stack_a)->next == NULL)
				break ;
				// ft_free(&temp_one);
				// ft_free(&temp_two);
				ft_lst_copy(stack_a, &temp_one);
				ft_rra(&temp_one, 0);
				ft_lst_copy(&temp_one, &temp_two);
				ft_rra(&temp_two, 0);
		}
		// ft_free(&temp_one);
		// ft_free(&temp_two);
		if (*stack_a != NULL)// this will prepare for the statement in line 161
		{
			// ft_free(&temp_one);
			// ft_free(&temp_two);
			ft_lst_copy(stack_a, &temp_one);
			ft_rra(&temp_one, 0);
			if ((*stack_a)->next != NULL)
			{
				ft_lst_copy(&temp_one, &temp_two);
				ft_rra(&temp_two, 0);
			}
		}
		if (*stack_a != NULL && ((*stack_a)->next == NULL || temp_one->content < temp_two->content))// this statement will push the last number of the presorted part or stack to the right position
		{
			while ((*stack_b)->content > temp_one->content && (*stack_b)->swap == 0)// this loop will rotate until i can push the last number
			{
				(*stack_b)->swap = 1;
				ft_rb(stack_b, 1);
			}
			ft_rra(stack_a, 1);
			ft_pb(stack_a, stack_b);
			(*stack_b)->swap = 0;
		}
		while ((*stack_b)->swap == 0)// this loop will rotate every not rotated part from top to bottom
		{
			(*stack_b)->swap = 1;
			ft_rb(stack_b, 1);
		}
		if (ft_one_stack_left_a(stack_a) == 1)// &&ft_one_stack_a(stack_b == 0) maybe will fix it
		{
			ft_set_swap(stack_a, 0);
			break ;
		}
	}
	while ((*stack_b)->swap == 0)// TESTTESTTEST
	{
		(*stack_b)->swap = 1;
		ft_rb(stack_b, 1);
	} //TESTTESTTEST
	// ft_free(&temp_one);
	ft_big_sort_b(argc, stack_a, stack_b);
}
