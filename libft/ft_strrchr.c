/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:04:21 by tblaase           #+#    #+#             */
/*   Updated: 2021/06/27 12:22:46 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	int		i;

	a = c;
	i = ft_strlen(s);
	while (s[i] != a && i > 0)
		i--;
	if (s[i] == a)
		return ((char *)(s + i));
	else
		return (0);
}
