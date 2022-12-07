# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitculstudent.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 12:50:13 by amitcul           #+#    #+#              #
#    Updated: 2022/11/29 13:00:16 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

LIBFT		= libft
INC			= inc
HEADER		= -I includes
SRC_DIR		= src/
OBJ_DIR		= obj/

CC			= cc
FLAGS		= -Wall -Werror -Wextra

RM			= rm -f

OBJF		=	.cache_exists

SRC	=	main stack moves stack_operations

SRCCL 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC)))
OBJCL 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

start:
			@make -C $(LIBFT)
			@cp $(LIBFT)/libft.a .

all:		start $(NAME) $(NAMESV)

$(NAME):	$(OBJCL) $(OBJF)
			$(CC) $(FLAGS) $(OBJCL) $(HEADER) libft.a -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(OBJF)
			$(CC) $(FLAGS) $(HEADER) -c $< -o $@

$(OBJF):
			mkdir -p $(OBJ_DIR)
			touch $(OBJF)

clean:
			$(RM) -r $(OBJ_DIR)
			$(RM) $(OBJF)
			make clean -C $(LIBFT)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(LIBFT)/libft.a
			$(RM) libft.a
			find . -name ".DS_Store" -delete

re:			fclean all

.PHONY:		start all clean fclean re
