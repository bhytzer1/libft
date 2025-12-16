/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:15:08 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/16 14:25:33 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdint.h>

// Caratteri (ctype)
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int i);
int		ft_toupper(int c);
int		ft_tolower(int c);

// Memoria (memory/bzero/memset/memcpy/memmove)
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *c, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *c, int fd);
void	ft_bzero(void *ptr, size_t num);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	*ft_memcpy(void *dest, const void *src, size_t numb);
void	*ft_memmove(void *dest, const void *src, size_t num);

// Stringhe (string/strlen/strchr/strrchr/strncmp/strlcat)
char	*ft_itoa(int n);
size_t	ft_strlen(const char *i);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	**ft_split(const char *s, char c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t dest_size);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif