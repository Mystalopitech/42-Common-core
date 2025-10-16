/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:47:32 by eautin            #+#    #+#             */
/*   Updated: 2025/10/16 17:58:38 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>

int	main(void)
{
//	char arr[50] = "ALED IL DEVIENT FOU!";

	//printf("%d\n", ft_isascii(','));
	//printf("%d\n", ft_isalnum('%'));
	//printf("%d\n", ft_isprint(127));
	//printf("%d\n", isdigit('2'));
	//ft_memset(arr, '0', 'A');
	//printf("%s\n", arr);
	//printf("%c\n", ft_toupper('h'));
	//printf("%c\n", ft_tolower('Z'));
	//printf("%d\n", ft_atoi("469"));
	//printf("%d\n", atoi("469"));
	//printf("%s\n", ft_strnstr(arr, "DEVIENT", 15));
	//printf("%s\n", strnstr(arr, "DEVIENT", 15));
	printf("%d\n", ft_strncmp("1234", "1235", 3));
	printf("%d\n", strncmp("1234", "1235", 3));
	return (0);
}
