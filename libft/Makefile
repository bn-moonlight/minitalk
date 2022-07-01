# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 10:53:26 by sakkaya           #+#    #+#              #
#    Updated: 2022/07/01 10:53:27 by sakkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC 	:= gcc
CFLAGS	:= -Wall -Wextra -Werror -I. -c
FILES	:= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

BSRC	:= $(wildcard ft_lst*.c)
B_OBJ	:= $(BSRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(B_OBJ)
	ar -rcs $(NAME) $(OBJ) $(B_OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
