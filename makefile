# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakkaya <sakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 08:28:30 by sakkaya           #+#    #+#              #
#    Updated: 2022/07/01 08:28:32 by sakkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMESERVER	:= server
NAMECLIENT	:= client
CC			:= gcc
LIBFT		:= libft/libft.a
CFLAGS		:=
SRCSERVER	:= server.c
SRCCLIENT	:= client.c
INCLUDE		:= -I libft/.

all: $(LIBFT) $(NAMESERVER) $(NAMECLIENT)

$(NAMESERVER):
	$(CC) $(CFLAGS) $(LIBFT) server.c -o server

$(NAMECLIENT):
	$(CC) $(CFLAGS) $(LIBFT) client.c -o client

$(LIBFT):
	make -C libft

clean:
	make clean -C libft

fclean: clean
	make fclean -C libft
	rm -rf $(NAMESERVER)
	rm -rf $(NAMECLIENT)

re: fclean all

norm:
	norminette *.[ch]

.PHONY: re clean fclean norm all


