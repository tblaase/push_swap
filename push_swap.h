/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:34:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/20 17:09:45 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/*
** LINKED LIST FOR STACK a AND STACK b
*/
typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

/*
** ACTIONS ******************************************************************
*/
void	ft_sa(int **a);
void	ft_sb(int **b);
void	ft_ss(int **a, int **b);
void	ft_pa(int **a);
void	ft_pb(int **b);
void	ft_ra(int **a);
void	ft_rb(int **b);
void	ft_rr(int **a, int **b);
void	ft_rra(int **a);
void	ft_rrb(int **b);
void	ft_rrr(int **a, int **b);
/*
** MAINFUNCTIONS ************************************************************
*/
// int		**ft_convert_array(int argc, char **string);
int		ft_input_error(int argc, char **argv);
t_stack	*ft_fill_list(int argc, char **argv);
void	ft_free_all(int **a, int **b);
void	ft_push_swap(int **a, int **b);
int		main(int argc, char **argv);

/*
** TESTFUNCTIONS ***********************************************************
*/
void	ft_display_list(t_stack *stack);

#endif
