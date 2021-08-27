/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:15:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/27 22:00:28 by tblaase          ###   ########.fr       */
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
	stack_a = ft_fill_list(argc, argv);
	stack_b = ft_fill_list(argc, argv);
	printf("\na1: ");
	ft_display_list(stack_a);
	printf("\nb1: ");
	ft_display_list(stack_b);
	ft_rra(&stack_a);
	printf("\na2: ");
	ft_display_list(stack_a);
	printf("\nb2: ");
	ft_display_list(stack_b);
	printf("%c", '\n');
	return (0);
}
