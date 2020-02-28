# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhamdaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 14:49:41 by hhamdaou          #+#    #+#              #
#    Updated: 2018/12/18 19:12:00 by hhamdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

all : $(NAME)

$(NAME) :
	@make -C libft
	@gcc -Wall -Wextra -Werror src/*.c libft/libft.a -o $(NAME)

clean :
	@make clean -C libft

fclean :
	@make fclean -C libft
	@rm -f $(NAME)

re : fclean all
