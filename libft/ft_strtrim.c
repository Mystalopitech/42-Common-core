/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:37:43 by eautin            #+#    #+#             */
/*   Updated: 2025/11/10 13:51:44 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(char c, const char *set)
{
	size_t		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		source_len;
	size_t		start;
	size_t		end;
	char		*string;

	if (!s1)
		return (ft_strdup(("")));
	source_len = ft_strlen(s1);
	start = 0;
	end = source_len;
	while (to_trim(s1[start], set))
		start++;
	while (to_trim(s1[end - 1], set))
		end--;
	string = ft_substr(s1, start, (end - start));
	return (string);
}
