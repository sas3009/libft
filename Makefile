# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olmishyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/26 19:03:32 by olmishyn          #+#    #+#              #
#    Updated: 2018/05/02 11:41:29 by olmishyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
AR = ar rc
W = -W -Wall -Wextra -Werror
SRC = *.c
OBJ = *.o

all: $(NAME)

$(NAME):
	$(CC) $(W) $(SRC)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
