# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eautin <eautin@42angouleme.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 17:01:41 by eautin            #+#    #+#              #
#    Updated: 2025/10/17 15:17:04 by eautin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra

MY_SOURCES = ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strchr.c \
			ft_atoi.c \
			ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c\
			ft_strrchr.c \


MY_OBJECTS = $(MY_SOURCES:.c=.o)

NAME = libft.a

re: fclean all

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

%.o: %.c libft.h
	cc $(CFLAGS) -o $@ -c $<

clean:
	rm -f *.o 

fclean: clean
	rm -f $(NAME)
