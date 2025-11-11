/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:04:09 by eautin            #+#    #+#             */
/*   Updated: 2025/11/11 16:58:51 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int		ft_putchar(char c);
int		ft_putstr(char *string);
int		ft_putnbr(int n);
int		ft_unsigned_putnbr(unsigned int n);
int		ft_printf(const char *format, ...);
int		ft_putnbr_hexa(int n);

#endif
