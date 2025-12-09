/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 11:15:01 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/09 11:59:10 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include<unistd.h>

int ft_strlen(char *c)
{
	int i;

	i = 0;
	while(c[i])
		i++;
	return(i);
}

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char finder;

	finder = (char)c;
	i = ft_strlen((char *)s);
	if(*s == '\0')
		return(0);
	while(s[i] >= 0)
	{
		if(s[i] == finder)
			return((char *)&s[i]);
		i--;
	}
	return(NULL);
}
