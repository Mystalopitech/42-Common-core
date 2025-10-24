/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:50:02 by eautin            #+#    #+#             */
/*   Updated: 2025/10/24 16:16:24 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		d;
	size_t		s;
	size_t		i;

	d = 0;
	s = 0;
	if (!dest && size == 0)
		return (ft_strlen(src));
	while (dest[d] && d < size)
		d++;
	while (src[s])
		s++;
	i = 0;
	while (src[i] && (d + i + 1) < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	if (d < size)
		dest[d + i] = '\0';
	return (d + s);
}
