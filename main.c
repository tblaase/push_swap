/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:15:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/30 20:24:38 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
/*
** get the input from the user and create a linked list from it
*/
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	if (ft_input_error(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	argc -= 1;
	stack_a = ft_fill_list(argc, argv);
	ft_display_list(stack_a);
	ft_sort(argc, &stack_a, &stack_b);
	ft_display_list(stack_a);
	ft_display_list(stack_b);
	return (0);
}
