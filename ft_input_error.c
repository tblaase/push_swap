/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:32:51 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/28 16:48:45 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_doubles(unsigned int *numbers, char **argv, int j)
{
	int					number;
	unsigned int		u;

	number = ft_atoi(argv[j]);
	if (number < 0)
	{
		u = (number * -1) + 2147483647;
		numbers[u]++;
		if (numbers[u] > 1)
			return (1);
	}
	else
	{
		++numbers[number];
		if (numbers[number] > 1)
			return (1);
	}
	return (0);
}

int	ft_input_error(int argc, char **argv)
{
	int					i;
	int					j;
	static unsigned int	numbers[4294967295];

	j = 1;
	while (argv[j] != NULL)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] == '-')
				i++;
			if (!ft_isdigit(argv[j][i]))
				return (1);
			i++;
		}
		if (ft_doubles(numbers, argv, j) == 1)
			return (1);
		j++;
	}
	return (0);
}
