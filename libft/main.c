/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:47:32 by eautin            #+#    #+#             */
/*   Updated: 2025/11/01 18:33:22 by lucy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#include <stdlib.h>

int	main(void)
{
//char arr[50] = "ALED IL DEVIENT FOU!";
	//char arr_dest[50] = "BONJOUR LEQUIPAGEEEEUH";
	char	*strings;
	char	*strings1;
	// char	delimiter;
	// char	**strings_array;
	// char	*arr;
	// size_t	i;
	
	// i = 0;
	// char *arr2;
	// char *arr_dest;
	// char *arr_dest2;
	// char	*str;
	// char	*str2;
	// arr = ft_strdup("lorem ipsum dolor sit amet");
	// arr2 = ft_strdup("lorem ipsum dolor sit amet");
	// arr_dest = ft_strdup("");
	// arr_dest2 = ft_strdup("");
	// str = ft_strdup("lorem ipsum dolor sit amet");
	// str2 = ft_strdup("dolor sit amet");
	// arr = ft_strtrim(str, str2);
	// arr = ft_strjoin(str, str2);
	// printf("%s\n", arr);
	// str = ft_strdup("ALED IL DEVIENT FOU!");
	// printf("%s\n", ft_substr(str, 6, 15));
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
	//printf("%s\n", (char *)ft_memchr(arr, 0, 0));
	//printf("%s\n", (char *)memchr(arr, 0, 0));
	// printf("%ld\n", strlcpy(arr_dest, arr, 5));
	// printf("%ld\n", ft_strlcpy(arr_dest2, arr2, 5));
	// printf("%s\n", arr);
	// printf("%s\n", arr_dest);
	// printf("%s\n", arr_dest2);
	// arr = ft_itoa(-10);
	// printf("%s\n", arr);
	// delimiter = '*';
	// strings = ft_strdup("**d*d****ddd**d*d*d*********d********we**D*S**DS**DA**A*D");
	// strings_array = ft_split(strings, delimiter);
	// while (strings_array[i])
	// {
	// 	printf("%s\n", (char*)strings_array[i]);
	// 	i++;
	// }
	// i = 0;
	// while (strings_array[i])
	// {
	// 	free(strings_array[i]);
	// 	i++;
	// }
	// free(strings_array);
	// free(strings);
	// strings = ft_strdup("lorem \n ipsum \t dolor \n sit \t amet");
	strings1 = ft_strdup("Bon");
	strings =  ft_strjoin(strings1, "jour");
	printf("%s\n", strings);
	// free(arr);
	free(strings);
	return (0);
}
