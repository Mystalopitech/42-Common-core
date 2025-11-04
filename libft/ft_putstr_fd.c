/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:39:21 by eautin            #+#    #+#             */
/*   Updated: 2025/11/04 15:57:07 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t		i;

	i = 0;
	if (!s)
	{
		write (fd, "(null)", 6);
		return ;
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
