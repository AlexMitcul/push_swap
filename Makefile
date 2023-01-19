# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 12:22:21 by amitcul           #+#    #+#              #
#    Updated: 2023/01/18 10:54:06 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = clang
CFLAGS = -Wall -Wextra -Werror

INC = includes/push_swap.h includes/stack.h
SRCS =	main.c stack.c read.c moves_classification.c moves_functions.c sort.c \
		util.c moving_to_second_stack.c indexing.c init.c move_to_a.c \
		debug.c

SRC = $(addprefix src/, $(SRCS))

OBJ = $(SRC:.c=.o)

LIBFT = libft

CHECKER = checker
CHECKER_SRCS =	main.c init.c moves_classification.c read.c stack.c free.c \
				moves_functions.c util.c
CHECKER_SRC = $(addprefix checker_src/, $(CHECKER_SRCS))
OBJ_CHECKER = $(CHECKER_SRC:.c=.o)

all: lib $(NAME) end

lib:
	make -C $(LIBFT)
	cp $(LIBFT)/libft.a .

end:
	@rm $(LIBFT).a

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) libft.a -o $(NAME)

bonus: lib $(CHECKER) end

$(CHECKER): $(OBJ_CHECKER)
	$(CC) $(CFLAGS) $(OBJ_CHECKER) libft.a -o $(CHECKER)

clean:
	@rm -rf src/main
	@rm -rf src/main.d*
	@rm -rf checker_src/*.o
	@rm -rf src/*.o
	@cd $(LIBFT) && $(MAKE) clean

fclean: clean
	@rm -rf push_swap
	@rm -rf checker
	@cd $(LIBFT) && $(MAKE) fclean

re: fclean all



.PHONY: all clean fclean re lib
