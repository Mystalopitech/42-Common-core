/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:59:57 by eautin            #+#    #+#             */
/*   Updated: 2025/10/25 17:03:41 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t			i;
	size_t			j;
	// int				*nb;
	char			*rsl;
	size_t			nlen;

	// nb = &n;
	nlen = ft_strlen((const char *)&n);
	rsl = malloc(sizeof (char) * nlen + 1);
	if (!rsl)
		return (rsl);
	i = 0;
	j = 0;
	while (n >= 10)
	{
		rsl[i] = n % 10 + '\0';
		i++;
	}
	while (n < 10)
	{
		rsl[i] = n / 10 + '\0';
	}
	return (rsl);
}
