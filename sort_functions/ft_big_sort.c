/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 11:14:28 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 22:09:32 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
/* will sort if 5 < numbers >= 100
will not always work if less than 25 numbers */
{
	t_quart	*quart;

	quart = ft_calloc(1, sizeof(t_quart));
	ft_quarters(&quart, argc, stack_a);
	ft_first(argc, stack_a, stack_b, &quart);
	ft_second(argc, stack_a, stack_b, &quart);
	ft_third_small(argc, stack_a, stack_b, &quart);
	ft_last(argc, stack_a, stack_b);
	free(quart);
}

void	ft_big_big_sort(int argc, t_stack **stack_a, t_stack **stack_b)
/* will sort if 100 < numbers */
{
	t_quart	*quart;

	quart = ft_calloc(1, sizeof(t_quart));
	ft_eigths(&quart, argc, stack_a);
	ft_first(argc, stack_a, stack_b, &quart);
	ft_second(argc, stack_a, stack_b, &quart);
	ft_third_big(argc, stack_a, stack_b, &quart);
	ft_fourth(argc, stack_a, stack_b, &quart);
	ft_fifth(argc, stack_a, stack_b, &quart);
	ft_sixth(argc, stack_a, stack_b, &quart);
	ft_seventh(argc, stack_a, stack_b, &quart);
	ft_last(argc, stack_a, stack_b);
	free(quart);
}
