/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:31:21 by eautin            #+#    #+#             */
/*   Updated: 2025/10/24 15:22:26 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (size != 0 && (nmemb * size) / size != nmemb)
		return (0);
	str = malloc((nmemb * size));
	if (!str)
		return (str);
	ft_bzero(str, (nmemb * size));
	return (str);
}
