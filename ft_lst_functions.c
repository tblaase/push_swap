/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:42:22 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/06 13:04:45 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lst_new(int content)
/* same function as libft function but different struct it uses */
{
	t_stack	*head;

	head = malloc(sizeof(t_stack));
	if (head == NULL)
		return (0);
	head->content = content;
	head->swap = 0;
	head->next = NULL;
	return (head);
}

void	ft_lst_add_back(t_stack **head, t_stack *new)
/* same function as libft function but different struct it uses */
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

void	ft_lst_copy(t_stack **input, t_stack **output)
/* will copy the contents of a list into a new list */
{
	t_stack	*temp;
	t_stack	*current;

	if (*output != NULL)
		ft_free_all(output);
	temp = *input;
	*output = ft_lst_new(temp->content);
	(*output)->swap = temp->swap;
	current = *output;
	while (temp != NULL)
	{
		temp = temp->next;
		if (temp == NULL)
			return ;
		current->next = ft_lst_new(temp->content);
		current->next->swap = temp->swap;
		current = current->next;
		if (temp->next == NULL)
			break ;
	}
}

t_stack	*ft_fill_list(int argc, char **argv)
/* this function will take an array of strings translate into integers
** first number of the array will be the first struct in linked list/
** on top of the stack */
{
	int		i;
	t_stack	*head;
	t_stack	*temp;

	i = 1;
	head = NULL;
	while (i <= argc)
	{
		temp = ft_lst_new(ft_atoi(argv[i]));
		ft_lst_add_back(&head, temp);
		i++;
	}
	return (head);
}
