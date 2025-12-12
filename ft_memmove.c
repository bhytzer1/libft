/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 22:08:45 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/12 22:51:29 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, int num)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (char *) dest;
	s = (char *) src;
	if (d > s)
	{
		while (num > 0)
		{
			d[num - 1] = s[num - 1];
			num--;
		}
	}
	else
	{
		while (i < num)
		{
			d[i] = s[i];
			i++;
		}
	}
}
