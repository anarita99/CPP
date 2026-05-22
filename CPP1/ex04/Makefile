# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adores <adores@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/22 16:01:36 by adores            #+#    #+#              #
#    Updated: 2026/05/22 16:48:21 by adores           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp sed.cpp

RM = rm -f

all:
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re