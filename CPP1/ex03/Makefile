# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/20 12:13:58 by adores            #+#    #+#              #
#    Updated: 2026/05/20 12:14:54 by adores           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = human
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

RM = rm -f

all:
	$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re