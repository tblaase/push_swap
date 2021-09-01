/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:34:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/01 17:41:03 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/*
** LINKED LIST FOR STACK a AND STACK b ******************************************
*/

typedef struct s_stack
{
	int				content;
	int				swap;
	struct s_stack	*next;
}					t_stack;

/*
** ACTIONS **********************************************************************
*/

void	ft_sa(t_stack **stack_a, int flag);
void	ft_sb(t_stack **stack_b, int flag);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_ra(t_stack **stack_a, int flag);
void	ft_rb(t_stack **stack_b, int flag);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rra(t_stack **stack_a, int flag);
void	ft_rrb(t_stack **stack_b, int flag);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);

/*
** HELPFUNCTION *****************************************************************
*/

t_stack	*ft_lst_new(int content);
void	ft_lst_add_back(t_stack **head, t_stack *new);
void	ft_lst_copy(t_stack **input, t_stack **output);
void	ft_push_smallest_a(t_stack **stack_a, t_stack **stack_b);
// void	ft_push_biggest_b(t_stack **stack_a, t_stack **stack_b);

/*
** SORT_FUNCTIONS ***************************************************************
*/

void	ft_sort(int argc, t_stack **stack_a, t_stack **stack_b);
void	ft_sort_three(t_stack **stack_a);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b);
void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b);
void	ft_big_sort_a(int argc, t_stack **stack_a, t_stack **stack_b);
void	ft_big_sort_b(int argc, t_stack **stack_a, t_stack **stack_b);
/*
** MAIN_FUNCTIONS ***************************************************************
*/

int		ft_input_error(int argc, char **argv);
t_stack	*ft_fill_list(int argc, char **argv);
int		ft_if_sorted(int argc, t_stack **stack);
// void	ft_push_swap(int **a, int **b);

/*
** TESTFUNCTIONS ****************************************************************
*/

void	ft_display_list(t_stack *stack);

#endif
