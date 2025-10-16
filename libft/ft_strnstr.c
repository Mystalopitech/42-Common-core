/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:24:32 by eautin            #+#    #+#             */
/*   Updated: 2025/10/16 17:08:41 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[j])
		return (big);
	while ((little[j] && big[i]) && (i < len))
	{
		if (little[j] == big[i])
		{
			j++;
			i++;
			if (little[j] == '\0')
				return (big + i - j);
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return (0);
}
