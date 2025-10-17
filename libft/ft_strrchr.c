/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:11:57 by eautin            #+#    #+#             */
/*   Updated: 2025/10/17 15:52:26 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c1;
	char			*ptr;
	size_t			i;

	ptr = (char *)s;
	c1 = (unsigned char)c;
	i = ft_strlen(ptr);
	while (ptr[i - 1])
	{
		if (ptr[i] == c1)
			return (ptr + i);
		i--;
	}
	if (c1 == '\0')
		return (ptr + i);
	return (NULL);
}
