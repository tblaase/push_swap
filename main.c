/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:15:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/20 16:52:36 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
/*
** get the input from the user and create a linked list from it
*/
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			**input;
	char		**args;

	if (ft_input_error(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	// input = ft_convert_array(argc, argv);
	stack_a = ft_fill_list(argc, argv);
	//stack_b = ft_fill_list(argc, argv);
	printf("%s", "\nstacka1: ");
	ft_display_list(stack_a);
	//printf("%s", "\nstackb1: ");
	//ft_display_list(stack_b);

	ft_ra(&stack_a);

	printf("%s", "\nstacka2: ");
	ft_display_list(stack_a);
	//printf("%s", "\nstackb2: ");
	//ft_display_list(stack_b);
	//printf("%c", '\n');
	return (0);
}
