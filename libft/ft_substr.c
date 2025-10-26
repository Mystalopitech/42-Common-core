/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:18:41 by eautin            #+#    #+#             */
/*   Updated: 2025/10/26 12:07:05 by lucy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			s_len;

	s_len = ft_strlen(s);
	if (len >= 2147483647)
		len = s_len;
	substr = malloc(len + 1);
	if (!substr)
		return (substr);
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup(""));
	else
	{
		ft_strlcpy(substr, s + start, len + 1);
		substr[len] = '\0';
	}
	return (substr);
}
