/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:34:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 21:16:53 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/*
** STRUCT FOR LINKED LIST *******************************************************
*/

typedef struct s_stack
{
	int				content;
	int				flag;
	struct s_stack	*next;
}					t_stack;

/*
** STRUCT FOR QUARTERS **********************************************************
*/

typedef struct s_quart
{
	float	first;
	float	second;
	float	third;
	float	fourth;
	float	fifth;
	float	sixth;
	float	seventh;
}			t_quart;

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
** LIST_FUNCTIONS ***************************************************************
*/

t_stack	*ft_lst_new(long long content);
t_stack	*ft_fill_list(int argc, char **argv);
void	ft_lst_add_back(t_stack **head, t_stack *new);
void	ft_lst_copy(t_stack **input, t_stack **output);
void	ft_push_smallest_a(t_stack **stack_a, t_stack **stack_b);
void	ft_lst_free(t_stack **stack);
int		ft_lst_size(t_stack **stack);
void	ft_set_flag(t_stack **stack, int x);
void	ft_del_top(t_stack **stack);
void	ft_del_larger_x(t_stack **stack, float x);
void	ft_del_smaller_x(t_stack **stack, float x);

/*
** SORT_FUNCTIONS ***************************************************************
*/

void	ft_sort(int argc, t_stack **stack_a, t_stack **stack_b);
void	ft_sort_three(t_stack **stack_a);
void	ft_sort_four(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b);
void	ft_big_sort(int argc, t_stack **stack_a, t_stack **stack_b);
void	ft_big_big_sort(int argc, t_stack **stack_a, t_stack **stack_b);
void	ft_large_pa(int argc, t_stack **stack_a, t_stack **stack_b);
void	ft_small_pa(int argc, t_stack **stack_a, t_stack **stack_b);

/*
** HELP_FUNCTIONS ***************************************************************
*/

int		ft_if_sorted(int argc, t_stack **stack);
int		ft_find_smallest(t_stack **stack, int x);
int		ft_find_largest(t_stack **stack, int x);
float	ft_median(int argc, t_stack **stack_a);
void	ft_free_array(char **str);
void	ft_quarters(t_quart **quart, int argc, t_stack **stack_a);
void	ft_eigths(t_quart **quart, int argc, t_stack **stack_a);
void	ft_support_big_sort(t_stack **stack_a);
void	ft_first(int argc, t_stack **stack_a, t_stack **stack_b,
			t_quart **quart);
void	ft_second(int argc, t_stack **stack_a, t_stack **stack_b,
			t_quart **quart);
void	ft_third_small(int argc, t_stack **stack_a, t_stack **stack_b,
			t_quart **quart);
void	ft_third_big(int argc, t_stack **stack_a, t_stack **stack_b,
			t_quart **quart);
void	ft_fourth(int argc, t_stack **stack_a, t_stack **stack_b,
			t_quart **quart);
void	ft_fifth(int argc, t_stack **stack_a, t_stack **stack_b,
			t_quart **quart);
void	ft_sixth(int argc, t_stack **stack_a, t_stack **stack_b,
			t_quart **quart);
void	ft_seventh(int argc, t_stack **stack_a, t_stack **stack_b,
			t_quart **quart);
void	ft_last(int argc, t_stack **stack_a, t_stack **stack_b);

/*
** INPUT_FUNCTIONS **************************************************************
*/

int		ft_input(char **argv, char **input);
int		ft_input_error(char **argv);

#endif
