/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:47:32 by eautin            #+#    #+#             */
/*   Updated: 2025/10/17 18:28:14 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>

int	main(void)
{
//char arr[50] = "ALED IL DEVIENT FOU!";
	//char arr_dest[50] = "BONJOUR LEQUIPAGEEEEUH";
	char *arr;

	arr = strdup("bonjour");
	//printf("%d\n", ft_isascii(','));
	//printf("%d\n", ft_isalnum('%'));
	//printf("%d\n", ft_isprint(127));
	//printf("%d\n", isdigit('2'));
	//ft_memset(arr, 'A', 4);
	//printf("%s\n", arr);
	//printf("%c\n", ft_toupper('h'));
	//printf("%c\n", ft_tolower('Z'));
	//printf("%d\n", ft_atoi("469"));
	//printf("%d\n", atoi("469"));
	//printf("%s\n", ft_strnstr(arr, "DEVIENT", 15));
	//printf("%s\n", strnstr(arr, "DEVIENT", 15));
	//printf("%d\n", ft_strncmp("1234", "1235", 3));
	//printf("%d\n", strncmp("1234", "1235", 3));
	//ft_bzero(arr, 4);
	//printf("%s\n", arr);
	//printf("%s\n", arr);
	//ft_memcpy(arr_dest, arr, 4);
	//printf("%s\n", arr_dest);
	//ft_memmove(arr, arr, 4); //dst2 + 3, dst2, size
//	memmove(arr_dest, arr_dest, 4); //dst2 + 3, dst2, size
//	printf("%s\n", arr);
//	printf("%s\n", arr_dest);
	printf("%s\n", (char *)ft_memchr(arr, 0, 0));
	printf("%s\n", (char *)memchr(arr, 0, 0));
	free(arr);
	return (0);
}
