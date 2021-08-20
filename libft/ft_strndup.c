/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:26:22 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/09 15:26:44 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *input, int n)
/* duplicates a string until n chars */
{
	char	*output;
	int		len;
	int		i;

	i = 0;
	len = n;
	output = malloc(len + 1);
	if (!output)
		return (NULL);
	while (input && input[i] != '\0' && i < n)
	{
		output[i] = input[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
