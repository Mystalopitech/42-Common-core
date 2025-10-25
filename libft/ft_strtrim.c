/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:37:43 by eautin            #+#    #+#             */
/*   Updated: 2025/10/25 14:36:10 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strstr(char *big, char *little)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((little[j] && big[i]))
	{
		if (little[j] == big[i])
		{
			j++;
			i++;
			if (little[j] == '\0')
				return (i - j);
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		i;
	size_t		dindex;
	size_t		slen;
	size_t		dlen;

	slen = ft_strlen(s1);
	dlen = ft_strlen(set);
	str = malloc(sizeof (char) * slen - dlen + 1);
	if (!str)
		return (str);
	i = 0;
	dindex = ft_strstr((char *)s1, (char *)set);
	while (s1[i])
	{
		if (i >= dindex && i <= dlen + dindex)
			i++;
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
