/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:26:52 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/09 15:27:20 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char *s1, char *s2, int n)
/* joins two strings, second only n chars, first does not have to exist */
{
	char	*c;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (s2[i2] == '\0')
		return (NULL);
	c = malloc(ft_strlen(s1) + n + 1);
	if (!c)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			c[i] = s1[i];
			i++;
		}
	}
	while (s2 && s2[i2] != '\0' && i2 < n)
		c[i++] = s2[i2++];
	c[i] = '\0';
	if (s1)
		ft_free(&s1);
	return (c);
}
