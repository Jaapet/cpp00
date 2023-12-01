# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/01 16:03:49 by ndesprez          #+#    #+#              #
#    Updated: 2023/12/01 17:03:18 by ndesprez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = megaphone.cpp

NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		rm -f $(NAME)

fclean:
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re