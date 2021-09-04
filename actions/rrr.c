/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:45:35 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/04 18:09:19 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
/* shift down all elements of stack a and stack b by one
** last element becomes first */
{
	ft_rra(stack_a, 0);
	ft_rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
