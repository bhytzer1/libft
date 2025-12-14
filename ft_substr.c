/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:56:58 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/14 19:54:08 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	int		n;
	int		ctr;
	int		i;
	char	*trgt;

	ctr = 0;
	if ((!s) || (start > len))
		return (NULL);
	n = ft_strlen(s);
	if (len > n)
		len = malloc((n + 1) * sizeof(char));
	while (s[ctr] && len <= n)
	{
		if (s[ctr] < start)
			ctr++;
		i = 0;
		while (s[ctr] >= start)
		{
			if (i < len)
			{
				trgt[ctr] = s[ctr];
				i++;
			}
		}
	}
	return (trgt);
}
