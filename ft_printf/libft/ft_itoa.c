/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:59:57 by eautin            #+#    #+#             */
/*   Updated: 2025/11/04 12:32:34 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

static char	*ft_reverse_string(char *string, size_t len)
{
	size_t		right_i;
	size_t		left_i;
	char		temporary_char;

	left_i = 0;
	right_i = len - 1;
	while (left_i < right_i)
	{
		temporary_char = string[left_i];
		string[left_i] = string[right_i];
		string[right_i] = temporary_char;
		left_i++;
		right_i--;
	}
	return (string);
}

static char	*ft_is_neg(int n, size_t len)
{
	size_t		i;
	char		*rsl;

	rsl = malloc(sizeof (char) * len + 2);
	if (!rsl)
		return (rsl);
	i = 0;
	if (n < 0)
	{
		n *= -1;
	}
	while (i <= len - 1)
	{
		rsl[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	rsl[i] = '-';
	i++;
	rsl[i] = '\0';
	rsl = ft_reverse_string(rsl, ft_strlen(rsl));
	return (rsl);
}

static char	*ft_is_pos(int n, size_t len)
{
	int		i;
	char	*rsl;

	rsl = malloc(sizeof (char) * len + 1);
	if (!rsl)
		return (rsl);
	i = 0;
	while (i <= (int)len - 1)
	{
		rsl[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	rsl[i] = '\0';
	rsl = ft_reverse_string(rsl, ft_strlen((rsl)));
	return (rsl);
}

char	*ft_itoa(int n)
{
	char			*rsl;
	size_t			nlen;

	if (n == 0)
		return (ft_strdup("0"));
	if (n != -2147483648)
		nlen = ft_nlen(n);
	else
		return (ft_strdup("-2147483648"));
	if (n < 0)
		rsl = ft_is_neg(n, nlen);
	if (n >= 0)
		rsl = ft_is_pos(n, nlen);
	return (rsl);
}
