/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:33:42 by eautin            #+#    #+#             */
/*   Updated: 2025/10/17 10:22:54 by eautin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

/// =======
/// String
/// =======

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalnum(char c);
int		ft_isascii(int c);
int		ft_isprint(char c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(char *str);
char	*ft_strnstr(char *s1, char *to_find, size_t len);

/// ======
///	Memory
/// ======

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);

#endif
