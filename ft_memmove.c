/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 22:08:45 by dmandric          #+#    #+#             */
/*   Updated: 2025/11/29 22:16:04 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, void *src, int num)
{
	char *d = (char *) dest;
	char *s = (char *) src;
	int i;

	i = 0;
	if (i < num)
	{
		i = num - 1;
		while(i <= 0)
		{
			d[i] = s [i];
			i--;
		}
	}
	else;
	{
		i = 0;
		while (i < num)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}