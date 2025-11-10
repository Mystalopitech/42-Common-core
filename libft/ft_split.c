/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucy <lucy@42angouleme.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:57:52 by lucy              #+#    #+#             */
/*   Updated: 2025/11/10 15:25:17 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_strings(char **strings, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

static size_t	ft_count_strings(char *source, char delimiter)
{
	size_t		i;
	size_t		strings_count;

	i = 0;
	strings_count = 0;
	while (source[i])
	{
		while (source[i] && source[i] == delimiter)
			i++;
		if (source[i] && source[i] != delimiter)
			strings_count++;
		while (source[i] && source[i] != delimiter)
			i++;
	}
	return (strings_count);
}

static char	**ft_free_tab(char **strings_arr, size_t n)
{
	ft_free_strings(strings_arr, n);
	return (NULL);
}

static char	**ft_split_strings(char **strings_arr, char *source, char delimiter)
{
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	k = 0;
	while (source[i])
	{
		while (source[i] && source[i] == delimiter)
			i++;
		j = i;
		while (source[i] && source[i] != delimiter)
			i++;
		if (i > j)
		{
			strings_arr[k] = ft_substr(source, j, i - j);
			if (!strings_arr[k])
			{
				ft_free_tab(strings_arr, k);
				return (NULL);
			}
			k++;
		}
	}
	strings_arr[k] = NULL;
	return (strings_arr);
}

char	**ft_split(char const *s, char c)
{
	char		**strings_array;
	size_t		strings_number;

	strings_number = ft_count_strings((char *)s, c);
	strings_array = malloc(sizeof (char *) * (strings_number + 1));
	if (!strings_array)
		return (strings_array);
	strings_array = ft_split_strings(strings_array, (char *)s, c);
	return (strings_array);
}
