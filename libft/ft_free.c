/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:25:52 by tblaase           #+#    #+#             */
/*   Updated: 2021/08/09 15:26:11 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **p)
/* checks if pointer exists and if so, frees it */
{
	if (!*p)
		return ;
	free(*p);
	*p = NULL;
}
