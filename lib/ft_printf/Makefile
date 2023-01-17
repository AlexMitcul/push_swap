# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 12:16:45 by amitcul           #+#    #+#              #
#    Updated: 2022/12/24 16:47:22 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a

CC = clang
CFLAGS = -Wall -Wextra -Werror

INC = ft_printf.h
SRC = ft_printf.c \
		print_c.c \
		print_d.c \
		print_p.c \
		print_percent.c \
		print_s.c \
		print_u.c \
		print_x.c \
		token.c \
		utils.c

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
