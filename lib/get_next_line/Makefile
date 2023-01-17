# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 12:05:48 by amitcul           #+#    #+#              #
#    Updated: 2022/12/24 16:47:43 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libget_next_line.a

CC = clang
CFLAGS = -Wall -Wextra -Werror

INC = get_next_line.h
SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
