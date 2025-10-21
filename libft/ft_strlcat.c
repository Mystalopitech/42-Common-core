/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:50:02 by eautin            #+#    #+#             */
/*   Updated: 2025/10/21 16:55:39 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t		len_dest;
	size_t		len_src;
	size_t		len_total;
	size_t		i;

	i = 0;
	len_dest = ft_strlen(dest) + 1;
	len_src = ft_strlen(src);
	len_total = len_dest + ft_strlen(src);
	if (size == 0)
		return (len_src);
	while (size != 0 && (i + len_dest) < size)
	{
		dest[i + len_dest - 1] = src[i];
		i++;
	}
	dest[i + len_dest] = '\0';
	return (len_total - 1);
}
