/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 21:20:58 by dmandric          #+#    #+#             */
/*   Updated: 2025/11/29 21:57:31 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void	*src, int numb)
{
	char *d = (char *)dest;
	char *s = (char *)src;
	int i;

	i = 0;
	while(i < numb)
	{
		d[i] = s[i];
		i++;
	}
return (dest);
}
