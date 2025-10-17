/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:21:18 by eautin            #+#    #+#             */
/*   Updated: 2025/10/17 13:48:58 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*cpy_src;

	p_dest = (unsigned char *)dest;
	cpy_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (p_dest > cpy_src && p_dest < cpy_src + n)
	{
		p_dest += n;
		cpy_src += n;
		while (n > 0)
		{
			p_dest--;
			cpy_src--;
			*p_dest = *cpy_src;
			n--;
		}
	}
	else
		ft_memcpy(p_dest, cpy_src, n);
	return (p_dest);
}
