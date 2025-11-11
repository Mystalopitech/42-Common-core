/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:57:18 by eautin            #+#    #+#             */
/*   Updated: 2025/11/11 17:06:41 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_putnbr_hexa(int n)
{
	int		decimal_number;
	int		temp;

	decimal_number = n;
	while (decimal_number != 0)
	{
		temp = decimal_number % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;

	}

}
