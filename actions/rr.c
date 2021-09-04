/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:44:35 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/04 18:09:13 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
/* shift up all elements of stack a and stack b by one
** first element becomes last */
{
	ft_ra(stack_a, 0);
	ft_rb(stack_b, 0);
	write(1, "rr\n", 3);
}
