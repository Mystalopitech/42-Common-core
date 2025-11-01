/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:06:52 by eautin            #+#    #+#             */
/*   Updated: 2025/11/01 18:28:44 by lucy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	string1_len;
	size_t	string2_len;
	size_t	s_total;
	size_t	i;
	char	*string;

	string1_len = ft_strlen(s1);
	string2_len = ft_strlen(s2);
	s_total = string1_len + string2_len;
	string = malloc(sizeof (char) * s_total + 1);
	if (!string)
		return (string);
	i = 0;
	string = (char *)s1;
	while (s2[i])
	{
		string[i + string1_len] = s2[i];
		i++;
	}
	string[i + string1_len] = '\0';
	return (string);
}
