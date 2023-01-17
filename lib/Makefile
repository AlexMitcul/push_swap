# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 12:19:54 by amitcul           #+#    #+#              #
#    Updated: 2022/12/23 13:43:06 by amitcul          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	cd libft && $(MAKE)
	cd libft && mv libft.a ../../
	cd get_next_line && $(MAKE)
	cd get_next_line && mv libget_next_line.a ../../
	cd ft_printf && $(MAKE)
	cd ft_printf && mv libprintf.a ../../

clean:
	cd libft && $(MAKE) clean
	cd get_next_line && $(MAKE) clean
	cd ft_printf && $(MAKE) clean

fclean:
	cd libft && $(MAKE) fclean
	cd get_next_line && $(MAKE) fclean
	cd ft_printf && $(MAKE) fclean

re:
	cd libft && $(MAKE) re
	cd get_next_line && $(MAKE) re
	cd ft_printf && $(MAKE) re
