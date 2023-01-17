# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 12:22:21 by amitcul           #+#    #+#              #
#    Updated: 2023/01/14 16:52:02 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = clang
CFLAGS = -Wall -Wextra -Werror

INC = includes/push_swap.h includes/stack.h
SRCS =	main.c stack.c read.c moves_classification.c moves_functions.c sort.c \
		util.c moving_to_second_stack.c \
		debug.c

SRC = $(addprefix src/, $(SRCS))

OBJ = $(SRC:.c=.o)

all: lib $(NAME)

lib:
	cd lib/ && $(MAKE)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I. libft.a libprintf.a libget_next_line.a -o $(NAME)

clean:
	rm -rf src/main
	rm -rf src/main.d*
	rm -rf src/*.o
	rm *.a
	cd lib/ && $(MAKE) clean

fclean: clean
	rm -rf push_swap*
	cd lib/ && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re lib
