/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:11:57 by eautin            #+#    #+#             */
/*   Updated: 2025/11/04 14:37:23 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c_ptr;
	char			*occurence;
	char			*source_ptr;
	size_t			i;

	source_ptr = (char *)s;
	c_ptr = (unsigned char)c;
	occurence = NULL;
	i = 0;
	while (source_ptr[i])
	{
		if (source_ptr[i] == c_ptr)
			occurence = source_ptr + i;
		i++;
	}
	if (c_ptr == '\0')
		return (source_ptr + i);
	return (occurence);
}
