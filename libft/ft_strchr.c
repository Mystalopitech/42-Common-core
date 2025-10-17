/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:49:22 by eautin            #+#    #+#             */
/*   Updated: 2025/10/17 14:47:09 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*ptr;
	unsigned char	c1;
	size_t		i;

	i = 0;
	ptr = (char *)s;
	c1 = (unsigned char)c;
	while (s[i])
	{
		if (ptr[i] == c1)
			return (ptr + i);
		i++;
	}
	if (c1 == '\0')
		return (ptr + i);
	return (NULL);
}
