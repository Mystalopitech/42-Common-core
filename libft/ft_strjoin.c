/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:06:52 by eautin            #+#    #+#             */
/*   Updated: 2025/10/25 13:35:33 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	s_total;
	size_t	i;
	char	*str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s_total = s1_len + s2_len;
	str = malloc(sizeof (char) * s_total + 1);
	if (!str)
		return (str);
	i = 0;
	str = (char *)s1;
	while (s2[i])
	{
		str[i + s1_len] = s2[i];
		i++;
	}
	str[i + s1_len] = '\0';
	return (str);
}
