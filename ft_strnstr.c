/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 14:44:34 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/12 22:57:47 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	b;
	size_t	n;

	if (needle[0] == '\0')
		return ((char *)haystack);
	b = 0;
	while (haystack[b] && b < n)
	{
		n = 0;
		while (needle[n + b] == haystack[b] && b < len)
		{
			b++;
		}
		if (needle[b] == '\0')
		{
			return ((char *)&haystack[b]);
		}
	}
	return (0);
}
