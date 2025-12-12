/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:15:08 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/12 23:01:04 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

// Caratteri (ctype)
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(char i);
int	ft_toupper(int c);
int	ft_tolower(int c);

// Memoria (memory/bzero/memset/memcpy/memmove)
void	ft_bzero(void *ptr, int num);
void	ft_memset(void *ptr, int value, int num);
void	*ft_memcpy(void *dest, void *src, int numb);
void	*ft_memmove(void *dest, void *src, int num);

// Stringhe (string/strlen/strchr/strrchr/strncmp/strlcat)
int     ft_strlen(char *i);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t dest_size);
char	*ft_strnstr(const char *needle, const char *haystack, size_t len);



#endif
