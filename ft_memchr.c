/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:57:10 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/12 22:29:04 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int *c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	charfdr;

	ptr = (unsigned char *)s;
	charfdr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == charfdr)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
