# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 18:10:37 by dmandric          #+#    #+#              #
#    Updated: 2025/11/29 22:16:48 by dmandric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
SRC		= ft_isalpha.c ft_isdigit.c ft_memset.c ft_bzero.c ft_isalnum.c ft_memcpy.c ft_memmove.c
OBJ		= ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
