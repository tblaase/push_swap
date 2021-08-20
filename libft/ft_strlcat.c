/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 10:37:33 by tblaase           #+#    #+#             */
/*   Updated: 2021/06/28 19:48:59 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		a;
	size_t	b;

	a = 0;
	i = ft_strlen(dst);
	b = i;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < b)
		return (ft_strlen(src) + dstsize);
	else
	{
		while (i < dstsize - 1 && src[a] != '\0')
		{
			dst[i] = src[a];
			i++;
			a++;
		}
		dst[i] = '\0';
		return (b + ft_strlen(src));
	}
}
