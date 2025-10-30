/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucy <lucy@42angouleme.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:57:52 by lucy              #+#    #+#             */
/*   Updated: 2025/10/30 09:55:21 by lucy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h";

char **ft_split(char const *s, char c)
{
	size_t		i;
	char		**str;
	size_t		src_len;
	size_t		char_len;
	char		*c_ptr;

	src_len = ft_strlen(s);
	char_len = ft_strlen(c_ptr);
	str = malloc(sizeof (char *) * src_len + char_len + 1 );
	i = 0;
	while (str[i])
	{
		
	}
	return (str);
}
