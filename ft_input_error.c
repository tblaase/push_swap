/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:32:51 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/20 16:51:06 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_input_error(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (argv[j] != NULL)
	{
		while (argv[j][i] != '\0')
		{
			if (!ft_isdigit(argv[j][i]))
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}
