/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:09:14 by eautin            #+#    #+#             */
/*   Updated: 2025/11/04 16:13:25 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_putstr(char *string)
{
	size_t		i;

	if (!string)
	{
		write (1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (string[i])
	{
		ft_putchar(string[i]);
		i++;
	}
	return (i);
}
