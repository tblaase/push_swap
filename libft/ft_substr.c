/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:37:26 by tblaase           #+#    #+#             */
/*   Updated: 2021/07/06 13:41:05 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char				*c;
	unsigned int		i;

	if (!s)
		return (0);
	i = 0;
	c = malloc(len + 1);
	if (c == NULL)
		return (0);
	if (ft_strlen(s) < start)
	{
		c[i] = '\0';
		return (c);
	}
	while (i < len)
	{
		c[i] = s[start];
		i++;
		start ++;
	}
	c[i] = '\0';
	return (c);
}
