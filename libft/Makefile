# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhamdaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/08 15:15:18 by hhamdaou          #+#    #+#              #
#    Updated: 2018/10/20 16:37:20 by hhamdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

all : $(NAME)

$(NAME):
	    @gcc -Wall -Werror -Wextra -c *.c
		@ar rc $(NAME) *.o

clean :
	    @rm -f *.o

fclean : clean
	    @rm -f $(NAME)

re : fclean all
