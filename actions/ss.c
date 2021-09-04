/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:31:18 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/04 18:09:31 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
/* swap the first two elements on top of stack a and stack b
** do nothing if only one or no elements on stack */
{
	ft_sa(stack_a, 0);
	ft_sb(stack_b, 0);
	write(1, "ss\n", 3);
}
