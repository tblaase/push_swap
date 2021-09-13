/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:01:43 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/13 19:44:35 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_input(char **argv, char **input)
{
	char		**split;
	int			j;
	int			i;
	int			end;

	end = 0;
	j = 1;
	i = 0;
	while (argv[j] != NULL)
	{
		// i = 0;
		// while (argv[j][i] != '\0')
		// {
			// if (argv[j][i] == '-')
			// 	i++;
			// while (argv[j][i] != NULL)
			// {
			// 	if (!ft_isdigit(argv[j][i]))
			// 	{
					split = ft_split(argv[j], ' ');
					i = 0;
					// end = 0;
					// while (input && input[end] != NULL)
					// 	end++;
					while (split[i] != NULL)
					{
						input[end] = ft_strdup(split[i]);
						i++;
						end++;
					}
					ft_free_array(split);
				// }
				// else
				// {
				// 	end = 0;
				// 	while (input && input[end] != NULL)
				// 		end++;
				// 	input[end] = ft_strdup(split[i]);
				// }
				// i++;
			// }
		// }
		j++;
	}
	return (end);
}
