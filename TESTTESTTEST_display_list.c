/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TESTTESTTEST_display_list.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:42:54 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/28 21:51:47 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_display_list(t_stack *stack)
{
	while (stack != NULL)
	{
		printf("\t: %d", stack->content);
		stack = stack->next;
	}
	printf("%s", "\n");
}
