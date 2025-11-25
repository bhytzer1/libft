# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 18:10:37 by dmandric          #+#    #+#              #
#    Updated: 2025/11/25 20:27:47 by dmandric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
SRC		= ft_isalpha.c ft_isdigit.c
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
