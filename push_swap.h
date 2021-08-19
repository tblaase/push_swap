/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:34:14 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/19 18:05:13 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>

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
void	ft_free_all(int **a, int **b);
void	ft_push_swap(int **a, int **b);

#endif
