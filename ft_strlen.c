/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 09:35:39 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/13 20:14:10 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *i)
{
	int	counter;

	counter = 0;
	while (i[counter])
		counter++;
	return (counter);
}
