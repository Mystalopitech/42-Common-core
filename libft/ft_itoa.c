/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:59:57 by eautin            #+#    #+#             */
/*   Updated: 2025/11/01 18:36:12 by lucy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdatomic.h>

unsigned int	ft_nlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	i++;
	if (n < 0)
		i--;
	return (i);
}

char	*ft_is_neg(int n, size_t len)
{
	int		i;
	char	*rsl;

	rsl = malloc(sizeof (char) * len + 1);
	if (!rsl)
		return (rsl);
	i = len;
	if (n < 0)
	{
		n *= -1;
	}
	while (i != 0)
	{
		rsl[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	rsl[0] = '-';
	rsl[len + 1] = '\0';
	return (rsl);
}

char	*ft_is_pos(int n, size_t len)
{
	int		i;
	char	*rsl;

	rsl = malloc(sizeof (char) * len + 1);
	if (!rsl)
		return (rsl);
	i = len - 1;
	while (i >= 0)
	{
		rsl[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	rsl[len + 1] = '\0';
	return (rsl);
}

char	*ft_itoa(int n)
{
	char			*rsl;
	size_t			nlen;

	if (n != -2147483648)
	{
		nlen = ft_nlen(n);
		// rsl = malloc(sizeof (char) * nlen + 1);
		// if (!rsl)
			// return (rsl);
	}
	// if (n == -2147483648)
	// {
		// rsl = malloc(sizeof (char) * 12);
		// if (!rsl)
			// return (rsl);
		// rsl = "-2147483647\0";
		// return (rsl);
	// }
	if (n < 0)
		rsl = ft_is_neg(n, nlen);
	if (n >= 0)
		rsl = ft_is_pos(n, nlen);
	return (rsl);
}
