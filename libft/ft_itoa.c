/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 15:03:24 by tblaase           #+#    #+#             */
/*   Updated: 2021/09/14 13:01:26 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_n(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (10);
	if (n < 0)
		n = n * -1;
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_putnbr(int n, char *str, int i)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10, str, i - 1);
		ft_putnbr(n % 10, str, i);
	}
	else
		str[i] = n + '0';
	i++;
}

static void	ft_standard(char *str, int i, int n)
{
	if (n < 0)
	{
		str[0] = 45;
		n = n * -1;
	}
	str[i] = '\0';
	i--;
	ft_putnbr(n, str, i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_count_n(n);
	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	else
	{
		if (n < 0)
			i++;
		str = malloc(i + 1);
		if (str == NULL)
			return (0);
		ft_standard(str, i, n);
	}
	return (str);
}
