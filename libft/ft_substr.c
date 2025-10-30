/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:18:41 by eautin            #+#    #+#             */
/*   Updated: 2025/10/30 14:24:45 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			source_len;

	if (s[0] == '\0' || len == 0)
		return (ft_strdup(""));
	source_len = ft_strlen(s);
	if (len >= source_len && start <= source_len)
		len = source_len - start;
	if (start > source_len)
		return (ft_strdup(""));
	substr = malloc(sizeof (char) * len + 1);
	if (!substr)
		return (substr);
	else
	{
		ft_strlcpy(substr, s + start, len + 1);
		substr[len] = '\0';
	}
	return (substr);
}
