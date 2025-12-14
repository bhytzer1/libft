/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 00:07:01 by dmandric          #+#    #+#             */
/*   Updated: 2025/12/14 19:50:04 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	char	numeri[10] = {1, 2, 3, 4, 5};
// 	int i = 0;
// 	printf("prima di bzero: \n");
// 	while (i < 5)
// 	{
// 		printf("%d, ", numeri[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 5;
// 	ft_bzero(numeri, i);
// 	i = 0;
// 	printf("dopo bzero: \n");
// 	while(i < 5)
// 	{
// 		printf("%d, ", numeri[i]);
// 		i++;
// 	}
// 	printf("\n");
// }

//memset

// int	main()
// {
// 	char buffer[10];
// 	ft_memset(buffer, 'x', sizeof(buffer));
// 	buffer[9] = '\0';
// 	printf("risultato: %s", buffer);
//     printf("\n");
// 	return(0);
// }

// int main()
// {
// 	char frase[] = "frase";
// 	char destinazione[5];
// 	printf("source prima di memcpy: %s \n", frase);
// 	ft_memcpy(destinazione, frase, 6);
// 	printf("destinazione dopo memcpy: %s \n", destinazione);
// }

// int main()
// {
//     char buffer[] = "ABCDEFG";
//     char destinazione[10];
//     printf("buffer: %s \n", buffer);
//     printf("destinazione before memmove: %s \n", destinazione);
//     ft_memmove(destinazione, buffer, 8);
//     printf("destinazione after memmove: %s \n", destinazione);

// }

// ft_toupper

// #include<stdio.h>

// int main()
// {
//     printf("%c\n", ft_toupper('a'));
//     printf("%c\n", ft_toupper('g'));
//     printf("%c\n", ft_toupper('A'));
//     printf("%c\n", ft_toupper('5'));
// }

int	main(void)
{
	printf("%s\n", ft_substr("pizza", '2', '4'));
}
