/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:01:45 by eautin            #+#    #+#             */
/*   Updated: 2025/11/11 16:59:51 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

static int	handle_conversion(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_unsigned_putnbr(va_arg(args, unsigned int)));
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'x')
		return (ft_putnbr_hexa(va_arg(args, int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			args_count;

	va_start(args, format);
	args_count = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			args_count += handle_conversion(*format, args);
		}
		else
			args_count += write (1, format, 1);
		format++;
	}
	va_end(args);
	return (args_count);
}
