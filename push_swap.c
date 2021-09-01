/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:15:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/01 12:06:44 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//
#include <fcntl.h>
#include <stdio.h>
//
int	main(int argc, char **argv)
/* get the input from the user and create a linked list from it */
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	if (ft_input_error(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	argc -= 1;
	//
	// argc = 5;
	// int i = 1;
	// int fd = open("input.txt", O_RDONLY);
	// char *buff;
	// while (i <= 119)
	// {
	// int x = 1;
	// while (x <= 5)
	// {
	// 	buff = ft_calloc(2, 1);
	// 	read(fd, buff, 1);
	// 	argv[x] = ft_strdup(buff);
	// 	x++;
	// }
	//
	stack_a = ft_fill_list(argc, argv);
	ft_display_list(stack_a);
	ft_sort(argc, &stack_a, &stack_b);
	ft_display_list(stack_a);
	// ft_display_list(stack_b);
	//
	// printf("\n%d\n\n", i);
	// i++;
	// }
	//
	return (0);
}
