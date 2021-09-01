/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big-sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:50:30 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/01 14:38:50 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
/* this function will initialize the big sort
** here i sort pairs of numbers
** then sort 2 pairs together
** when this function is finished all data is on stack_b
** after that i call a function to sort stack_b back to stack_a */
{
	while (*stack_a != NULL)
	{
		if (*stack_a && (*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a, 1);
		ft_pb(stack_a, stack_b);
		ft_pb(stack_a, stack_b);
	}
	ft_big_sort_b(argc, stack_a, stack_b);
}

void	ft_big_sort_a(int argc, t_stack **stack_a, t_stack **stack_b)
/* this function will sort presorted data from stack_a to stack_b
** stack_a = NULL when finished */
{
	t_stack	*temp;

	temp = NULL;
	while (*stack_a != NULL)
	{
		while ((*stack_a)->content < (*stack_a)->next->content)
			ft_pb(stack_a, stack_b);
		ft_pb(stack_a, stack_b);
		while (*stack_a != NULL)
		{
			if ((*stack_a)->content < (*stack_b)->content
				&& (*stack_b)->swap == 0)
			{
				(*stack_b)->swap++;
				ft_rb(stack_b, 1);
			}
			else
			{
				ft_pb(stack_a, stack_b);
				(*stack_b)->swap++;
				ft_rb(stack_b, 1);
			}
		}
		while ((*stack_b)->next->swap == 0)
		{
			(*stack_b)->swap++;
			ft_rb(stack_b, 1);
		}
	}
	ft_big_sort_b(argc, stack_a, stack_b);
}

void	ft_big_sort_b(int argc, t_stack **stack_a, t_stack **stack_b)
/* this function will sort presorted data from stack_b to stack_a
** stack_b = NULL when finished */
{
	t_stack	*temp;
	int		x;

	temp = NULL;
	while (*stack_b != NULL)
	{
		while ((*stack_b)->content > (*stack_b)->next->content)
		{
			(*stack_b)->swap = 0;
			ft_pa(stack_a, stack_b);
		}
		(*stack_b)->swap = 0;
		ft_pa(stack_a, stack_b);
		ft_rrb(stack_b, 1); // only rotate if A->swap != 0 || A->content > temp->content
		while (*stack_b != NULL /*&& (*stack_a)->swap == 0*/) // work on that statement, maybe without the swap flag in it, swap flag then later in that function inside while loop maybe, this whileloop then takes te remainder of the stack and pushes it?
		{
			if ((*stack_b)->content < (*stack_a)->content && (*stack_a)->swap == 0)
			{
				ft_pa(stack_a, stack_b);
				(*stack_a)->swap++;
				ft_ra(stack_a, 1); // maybe check if rotating is needed
				ft_rrb(stack_b, 1); // only rotate with condition
				if (*stack_b && (*stack_b)->next != NULL)
				{
					ft_lst_copy(stack_b, &temp);
					// ft_rrb(&temp, 0);
					if (temp->content < (*stack_b)->content)
					{
						// ft_free(temp);
						break ;
					}
				}
			}
			else if ((*stack_a)->swap == 0)
			{
				(*stack_a)->swap++;
				ft_ra(stack_a, 1);
			}
			if ((*stack_a)->swap != 0)
			{
				ft_pa(stack_a, stack_b);
				(*stack_a)->swap++;
				x = (*stack_a)->content;
				ft_ra(stack_a, 1);
				ft_lst_copy(stack_b, &temp);
				ft_rrb(&temp, 0);
				while (temp->content > x)
				{
					ft_rrb(stack_b, 1);
					ft_pa(stack_a, stack_b);
					// ft_free(&temp);
					ft_lst_copy(stack_b, &temp);
					ft_rrb(&temp, 0);
					if (temp->content < (*stack_a)->content)
						break ;
					x = (*stack_a)->content;
					ft_ra(stack_a, 1);
				}
				if (temp->content < (*stack_a)->content)
				{
					// ft_free(&temp);
					break ;
				}
			}
		}
		// while (*stack_b != NULL) // this while loop needs to disappear!!!!!!! alot of errors come with this loop, remainder of stack should be dealt with in line 81 loop
		// {
		// 	ft_pa(stack_a, stack_b);
		// 	(*stack_a)->swap++;
		// 	ft_ra(stack_a, 1);
		// 	ft_rrb(stack_b, 1); //need condition for this //////////// maybe with counter again
		// 	if (*stack_b && (*stack_b)->next != NULL)
		// 	{
		// 		ft_lst_copy(stack_b, &temp);
		// 		ft_rrb(&temp, 0);
		// 		if ((temp)->content < (*stack_b)->content)
		// 			break ;
		// 	}
		// }
		while ((*stack_a)->swap == 0) // this loop has to stay to make stack ready for next push
		{
			(*stack_a)->swap++;
			ft_ra(stack_a, 1);
		}
	}
	// insert test if_sorted function here ///////////////////////////////////////////
	ft_big_sort_a(argc, stack_a, stack_b);
}
