/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:15:08 by dmandric          #+#    #+#             */
/*   Updated: 2025/11/29 22:21:48 by dmandric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
void	ft_bzero(void *ptr, int num);
void	ft_memset(void *ptr, int value, int num);
void	*ft_memcpy(void *dest, void	*src, int numb);
void 	*ft_memmove(void *dest, void *src, int num);



#endif
