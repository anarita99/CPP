# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adores <adores@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/15 11:47:44 by adores            #+#    #+#              #
#    Updated: 2026/05/15 11:48:01 by adores           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

RM = rm -f

all:
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re