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



t_stack	*ft_fill_list(int argc, char **argv)
/*
** this function will take an array of strings
** translate these strings into integers
** and create a linked list off of that array
** every number will be stored in one struct
** first number of the array will be the first struct in linked list
*/
{
	int		i;
	t_stack	*head;
	t_stack	*temp;

	i = 1;
	head = NULL;
	while (i < argc)
	{
		temp = ft_lst_new(ft_atoi(argv[i]));
		ft_lst_add_back(&head, temp);
		i++;
	}
	return (head);
}
