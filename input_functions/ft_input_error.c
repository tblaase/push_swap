/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:32:51 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/15 22:02:57 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_doubles(unsigned int *numbers, char **input, int j)
/* this function will check **input for doubles
** if double is found return is 1 */
{
	int					number;
	unsigned int		u;

	number = ft_atoi(input[j]);
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

int	ft_input_error(char **input)
/* this function will scan **input for non digit values and doubles
** if double or non digit found return is 1 */
{
	int					i;
	int					j;
	static unsigned int	numbers[4294967295];

	j = 0;
	while (input[j] != NULL)
	{
		i = 0;
		while (input[j][i] != '\0')
		{
			if (input[j][i] == '-')
				i++;
			if (!ft_isdigit(input[j][i]))
				return (1);
			i++;
		}
		if (ft_doubles(numbers, input, j) == 1)
			return (1);
		j++;
	}
	return (0);
}
