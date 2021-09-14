/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:45:04 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/14 16:58:38 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_stack **stack_a, int flag)
/* shift down all elements of stack a by one
** last element becomes first */
{
	t_stack	*temp;
	t_stack	*new;

	if ((*stack_a)->next == NULL)
		return ;
	temp = *stack_a;
	while (temp->next != NULL)
		temp = temp->next;
	new = ft_lst_new(temp->content);
	new->flag = temp->flag;
	temp = *stack_a;
	while (temp->next != NULL)
	{
		if ((temp->next)->next == NULL)
		{
			free(temp->next);
			temp->next = NULL;
		}
		else
			temp = temp->next;
	}
	ft_lst_add_back(&new, *stack_a);
	*stack_a = new;
	if (flag == 1)
		write(1, "rra\n", 4);
}
