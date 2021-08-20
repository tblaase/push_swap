/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:52:50 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/20 18:26:40 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lst_new(int content)
/*
** same function as libft function but different struct it uses
*/
{
	t_stack	*head;

	head = malloc(sizeof(t_stack));
	if (head == NULL)
		return (0);
	head->content = content;
	head->next = NULL;
	return (head);
}

void	ft_lst_add_back(t_stack **head, t_stack *new)
{
	t_stack	*current;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}
t_stack	*ft_fill_list(int argc, char **argv)
/*
** this function will take an array of integers
** and create a linked list off of that array
** every number will be stored in one struct
** first number of array will be first struct in linked list
*/
{
	int		i;
	t_stack	*head;
	t_stack	*temp;

	i = 1;
	while (i < argc)
	{
		temp = ft_lst_new(ft_atoi(argv[i]));
		ft_lst_add_back(&head, temp);
		i++;
	}
	return (head);
}
