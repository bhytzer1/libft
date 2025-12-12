/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 21:20:58 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/12 22:37:58 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void	*src, size_t numb)
{
	char	*d;
	char	*s;
	int		i;

	if (!dest && !src)
		return (NULL);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (i < numb)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
