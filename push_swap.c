/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:15:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 13:08:40 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
/* get the input from the user
** create linked list off of that
** sort that linked list by ascending order */
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		**input;

	input = ft_calloc(501, sizeof(char *));
	argc = ft_input(argv, input);
	if (ft_input_error(input) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	stack_a = ft_fill_list(argc, input);
	ft_free_array(input);
	if (ft_if_sorted(argc, &stack_a) == 1)
		return (0);
	ft_sort(argc, &stack_a, &stack_b);
	// system("leaks push_swap");
	return (0);
}
