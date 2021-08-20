/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 08:54:29 by tblaase           #+#    #+#             */
/*   Updated: 2021/06/26 15:46:44 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		a;
	unsigned int		i;
	unsigned char		*cdst;
	unsigned const char	*csrc;

	i = 0;
	a = c;
	cdst = (unsigned char *)dst;
	csrc = (unsigned const char *)src;
	while (i < n)
	{
		cdst[i] = csrc[i];
		if (a == cdst[i])
			return (dst + i + 1);
		i++;
	}
	return (0);
}
