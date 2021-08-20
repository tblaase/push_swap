/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 16:12:36 by tblaase           #+#    #+#             */
/*   Updated: 2021/06/28 17:47:13 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = (char *)malloc(nelem * elsize);
	if (ptr == NULL)
		return (0);
	while (i < nelem * elsize)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
