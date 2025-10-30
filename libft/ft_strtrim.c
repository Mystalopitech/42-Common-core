/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:37:43 by eautin            #+#    #+#             */
/*   Updated: 2025/10/30 16:04:11 by eautin           ###   ########.fr       */
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

static char	*string_trim(char *string, size_t start, size_t end)
{
	size_t		i;
	char		*trimmed_string;

	i = 0;
	trimmed_string = malloc(sizeof (char) * (end - start) + 1);
	if (!trimmed_string)
		return (trimmed_string);
	while (i < end)
	{
		trimmed_string[i] = string[i + start];
		i++;
	}
	return (trimmed_string);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed_string;
	size_t		source_len;
	size_t		start;
	size_t		end;

	if (!s1)
		return (ft_strdup(("")));
	source_len = ft_strlen(s1);
	start = 0;
	end = source_len;
	while (to_trim(s1[start], set))
		start++;
	while (to_trim(s1[end - 1], set))
		end--;
	trimmed_string = string_trim((char *)s1, start, end);
	return (trimmed_string);
}
