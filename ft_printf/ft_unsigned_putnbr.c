/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:17:50 by eautin            #+#    #+#             */
/*   Updated: 2025/11/04 16:26:53 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int n)
{
	int		count;

	count = 0;
	if (n > 9)
	{
		ft_unsigned_putnbr(n / 10);
		ft_unsigned_putnbr(n % 10);
		count++;
	}
	else
	{
		ft_putchar(n + '0');
		count++;
	}
	return (count);
}
