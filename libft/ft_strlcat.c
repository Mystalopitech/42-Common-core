/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:50:02 by eautin            #+#    #+#             */
/*   Updated: 2025/10/24 12:08:56 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		len_dest;
	size_t		len_src;
	size_t		len_total;
	char		*s;
	size_t		i;

	i = 0;
	s = (char *)src;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	len_total = len_dest + len_src;
	if (size == 0)
		return (len_src);
	while (s[i])
	{
		if (size != 1)
		{
			ft_memset(dest, src[i], 1);
			i++;
		}
	}
	dest[i + len_dest] = '\0';
	return (len_total);
}
