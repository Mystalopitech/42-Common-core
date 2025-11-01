/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucy <lucy@42angouleme.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:57:52 by lucy              #+#    #+#             */
/*   Updated: 2025/11/01 18:30:52 by lucy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_strings(char *source, char delimiter)
{
	size_t		i;
	size_t		strings_number;

	i = 0;
	strings_number = 0;
	while (source[i])
	{
		if (source[i + 1] == '\0')
		{
			strings_number++;
			i++;
		}
		else if (source[i] != delimiter)
			i++;
		else if (source[i] == delimiter)
		{
			strings_number++;
			i++;
		}
	}
	return (strings_number);
}

static char	**ft_split_strings(char **strings_arr, char *source, char delimiter)
{
	size_t		i;
	size_t		j;
	size_t		k;
	size_t		string_size;

	i = 0;
	j = 0;
	k = 0;
	string_size = 0;
	while (source[i])
	{
		if (source[i] != delimiter && source[i + 1])
			i++;
		if ((source[i] == delimiter) || (!source[i + 1]))
		{
			string_size = i - j;
			if (!source[i + 1])
				string_size++;
			strings_arr[k] = ft_substr(source, j, string_size);
			k++;
			i++;
			j = i;
		}
	}
	return (strings_arr);
}

char	**ft_split(char const *s, char c)
{
	char		**strings_array;
	size_t		strings_number;

	strings_number = ft_count_strings((char *)s, c);
	strings_array = malloc(sizeof (char *) * strings_number + 1);
	strings_array = ft_split_strings(strings_array, (char *)s, c);
	return (strings_array);
}
